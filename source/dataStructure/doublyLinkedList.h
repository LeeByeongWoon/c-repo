//
// Created by 이병운 on 24. 8. 6.
//

#ifndef C_ALGORITHM_DOUBLYLINKEDLIST_H
#define C_ALGORITHM_DOUBLYLINKEDLIST_H
typedef struct DoublyNode DoublyNode;

struct DoublyNode {
    int data;
    DoublyNode *prev;
    DoublyNode *next;
};

void insert(int data, DoublyNode *head, DoublyNode *tail);

#endif //C_ALGORITHM_DOUBLYLINKEDLIST_H
