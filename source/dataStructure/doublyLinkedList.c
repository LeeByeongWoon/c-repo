//
// Created by 이병운 on 24. 8. 6.
//

#include <stdlib.h>
#include "doublyLinkedList.h"


void insert(int data, DoublyNode *head, DoublyNode *tail) {
    DoublyNode *node = (DoublyNode *) malloc(sizeof(DoublyNode));
    node->data = data;
    DoublyNode *cur;
    cur = head->next;
    while (cur->data < data && cur != tail) {
        cur = cur->next;
    }
    DoublyNode *prev = cur->prev;
    node->prev = prev;
    node->next = cur;
    prev->next = node;
    cur->prev = node;
}