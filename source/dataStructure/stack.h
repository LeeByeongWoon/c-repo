//
// Created by 이병운 on 25. 5. 7.
//

#ifndef C_ALGORITHM_STACK_H
#define C_ALGORITHM_STACK_H

#include <stddef.h>

typedef struct stackNode {
    int stackData;
    struct stackNode *nextStackNode;
} stackNode;

typedef struct Stack {
    stackNode *top;
} Stack;

static int pop(Stack *stack);

static void push(Stack *stack, int data);

#endif //C_ALGORITHM_STACK_H
