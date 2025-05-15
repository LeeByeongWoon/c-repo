//
// Created by 이병운 on 25. 4. 30.
//

#ifndef C_ALGORITHM_LINKEDLISTSTACK_H
#define C_ALGORITHM_LINKEDLISTSTACK_H
typedef struct GraphNode {
    int data;
    struct GraphNode *next;
} GraphNode;

typedef struct {
    GraphNode *top;
} Stack;

void linkedStackPush(Stack *stack, int data);

int linkedStackPop();

#endif //C_ALGORITHM_LINKEDLISTSTACK_H
