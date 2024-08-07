//
// Created by 이병운 on 24. 8. 6.
//

#include <stdlib.h>
#include "doublyLinkedList.h"


void insert(int data) {
    DoublyNode *node = (DoublyNode *) malloc(sizeof(DoublyNode));
    node->data = data;
    node->prev = NULL;
    node->next = NULL;
}