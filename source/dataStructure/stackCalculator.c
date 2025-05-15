//
// Created by 이병운 on 25. 5. 7.
//

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include "stackCalculator.h"

char *pop(CalcStack *stack) {
    if (stack->top == NULL) return NULL;
    CalcNode *temp = stack->top;
    char *tempData = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return tempData;
}

void push(CalcStack *stack, char *data) {
    CalcNode *node = (CalcNode *) malloc(sizeof(CalcNode));
    strcpy(node->data, data);
    node->next = stack->top;
    stack->top = node;
}

char *getTop(CalcStack *stack) {
    return stack->top->data;
}

int getPriority(char *i) {
    if (!strcmp(i, "(")) return 0;
    if (!strcmp(i, "+") || !strcmp(i, "-")) return 1;
    if (!strcmp(i, "*") || !strcmp(i, "/")) return 2;
    return 3;
}

char *transition(CalcStack *stack, char **s, int size, char *result_buffer, size_t buffer_size) {
    //버퍼 메모리 초기화
    memset(result_buffer, 0, buffer_size);
    //받은 문자열의 크기만큼 순회
    for (int i = 0; i < size; i++) {
        // 같으면 0이므로 뒤집으면 1, 따라서 +, -, * , / 을 만난 경우
        if (!strcmp(s[i], "+") || !strcmp(s[i], "-") || !strcmp(s[i], "*") || !strcmp(s[i], "/")) {
            //stack의 top 이 null 이 아니고, 우선순위가 top의 stack 보다 현재 원소가 낮거나 같을 경우
            while (stack->top != NULL && getPriority(getTop(stack)) >= getPriority(s[i])) {
                // 버퍼에 stack 의 맨 끝 요소를 붙여 넣음
                strcat(result_buffer, pop(stack));
                // 구분자 추가
                strcat(result_buffer, " ");
            }
            // 연산자를 stack에 추가
            push(stack, s[i]);
            // (일경우 stack에 추가
        } else if (!strcmp(s[i], "(")) push(stack, s[i]);
            // )일경우
        else if (!strcmp(s[i], ")")) {
            // stack의 top 이 (가 아닐 때 까지
            while (strcmp(getTop(stack), "(") != 0) {
                // 버퍼에 stack의 끝값 복사
                strcat(result_buffer, pop(stack));
                // 구분자 추가
                strcat(result_buffer, " ");
            }
            // stack의 값 반환
            pop(stack);
            // 숫자인 경우
        } else {
            // 버퍼에 값 추가
            strcat (result_buffer, s[i]);
            // 구분자 추가
            strcat(result_buffer, " ");
        }
        // stack 전체 순회
    }
    while (stack->top != NULL) {
        // stack의 모든 값 버퍼에 추가
        strcat(result_buffer, pop(stack));
        // 값 사이사이 공백 으로 구분자 추가
        strcat(result_buffer, " ");
    }
    //버퍼 반환
    return result_buffer;
}

void calculate(CalcStack *stack, char **s, int size) {
    int x, y, z;
    for (int i = 0; i < size; i++) {
        if (!strcmp(s[i], "+") || !strcmp(s[i], "-") || !strcmp(s[i], "*") || !strcmp(s[i], "/")) {
            char *x_str = pop(stack);
            char *y_str = pop(stack);

            char *endptr_x = NULL;
            char *endptr_y = NULL;
            errno = 0;

            long x_long = strtol(x_str, &endptr_x, 10);
            if (errno == ERANGE || *endptr_x != '\0' || endptr_x == x_str) {
                fprintf(stderr, "변환 오류 %s는 유효한 숫자가 아닙니다\n", x_str);
                return;
            }

            errno = 0;
            long y_long = strtol(y_str, &endptr_y, 10);
            if (errno == ERANGE || *endptr_y != '\0' || endptr_y == y_str) {
                fprintf(stderr, "변환 오류 %s는 유효한 숫자가 아닙니다\n", y_str);
                return;
            }

            x = (int) x_long;
            y = (int) y_long;

            if (!strcmp(s[i], "+")) z = y + x;
            if (!strcmp(s[i], "-")) z = y - x;
            if (!strcmp(s[i], "*")) z = y * x;
            if (!strcmp(s[i], "/")) {
                if (x == 0) {
                    fprintf(stderr, "Zero Division Error");
                    return;
                }
                z = y / x;
            }
            char buffer[100];
            sprintf(buffer, "%d", z);
            push(stack, buffer);
        } else {
            push(stack, s[i]);
        }
    }
    printf("%s\n", pop(stack));
}