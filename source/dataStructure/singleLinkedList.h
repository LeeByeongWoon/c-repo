//
// Created by 이병운 on 24. 8. 2.
//

#ifndef C_ALGORITHM_SINGLELINKEDLIST_H
#define C_ALGORITHM_SINGLELINKEDLIST_H

// struct GraphNode 에 Node라는 별칭을 붙임
typedef struct GraphNode GraphNode;

struct GraphNode {
    int data;
    GraphNode *next;
};

void freeNode(GraphNode **node);

void freeAll(GraphNode *root);

void printAll(GraphNode *root);

void deleteItem(GraphNode *root, int targetData);

void addFront(GraphNode *root, int data);

void removeFront(GraphNode *root);

#endif //C_ALGORITHM_SINGLELINKEDLIST_H
