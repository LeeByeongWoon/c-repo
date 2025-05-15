//
// Created by 이병운 on 25. 4. 30.
//

#include <stdlib.h>
#include "linkedListStack.h"

void linkedStackPush(Stack *stack, int data) {
    GraphNode *node = (GraphNode *) malloc(sizeof(GraphNode));
    node->data = data;
    node->next = stack->top;
    stack->top = node;
};