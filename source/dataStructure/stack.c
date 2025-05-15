//
// Created by 이병운 on 25. 5. 7.
//

#include <stdlib.h>
#include "stack.h"

static int pop(Stack *stack) {
    if (stack->top == NULL) return -9999;
    stackNode *temp = stack->top;
    int tempData = temp->stackData;
    stack->top = stack->top->nextStackNode;
    free(temp);
    return tempData;
}

static void push(Stack *stack, int data) {
    stackNode *node = (stackNode *) malloc(sizeof(stackNode));
    node->stackData = data;
    node->nextStackNode = stack->top;
    stack->top = node;
}
