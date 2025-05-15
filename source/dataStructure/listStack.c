//
// Created by 이병운 on 25. 4. 30.
//

#include "listStack.h"

int top = -1;
int stack[SIZE];

static void push(int data) {
    if (top == SIZE - 1) {
        printf("Stack is full");
    } else {
        stack[++top] = data;
    }
}

static int pop() {
    if (top == -1) {
        printf("Stack is empty");
        return -INF;
    } else {
        return stack[top--];
    }
}

static void show() {
    printf("------top-------\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
    printf("-----bottom-----\n");
}