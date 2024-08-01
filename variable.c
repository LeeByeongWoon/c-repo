#include <stdio.h>

//
// Created by 이병운 on 7/9/24.
//
int alpha = 7;

void changeValue() {
    alpha = 10;
    printf("%d\n", alpha);
}

void innerVariable() {
    int a = 7;
    if (1) {
        int a = 5;
    }
    printf("%d", a);
}

void staticVariable() {
    static int a = 5;
    a = a + 1;
    printf("%d\n", a);
}

//cpu register 로 처리 되어 더 빠름 (무조건 레지스터로 처리되는건 보장 하지 않음)
void registerVariable() {
    register int a = 10, i;
    for (i = 0; i < a; i++) {
        printf("%d\n", i);
    }
}

void variableAdd(int a, int b) {
    a = a + b;
}

void referenceAdd(int *a, int b) {
    *a = *a + b;
}

void referenceVariable() {
    int a = 7;
    variableAdd(a, 10);
    printf("%d\n", a); // 값 전달은 내부에서 값으로 만 사용 하므로 실제 값엔 반영 되지 않음 == 7
    referenceAdd(&a, 10);
    printf("%d\n", a); // 주소 자체를 전달하면, 주소에서 값을 꺼내와 사용 함. == 17
}