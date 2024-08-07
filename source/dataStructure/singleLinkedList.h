//
// Created by 이병운 on 24. 8. 2.
//

#ifndef C_ALGORITHM_SINGLELINKEDLIST_H
#define C_ALGORITHM_SINGLELINKEDLIST_H

// struct Node 에 Node라는 별칭을 붙임
typedef struct Node Node;

struct Node {
    int data;
    Node *next;
};

void freeNode(Node **node);

void freeAll(Node *root);

void printAll(Node *root);

void deleteItem(Node *root, int targetData);

void addFront(Node *root, int data);

void removeFront(Node *root);

#endif //C_ALGORITHM_SINGLELINKEDLIST_H
