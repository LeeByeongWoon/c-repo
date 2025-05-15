//
// Created by 이병운 on 24. 8. 2.
//

#include <stdlib.h>
#include <printf.h>
#include "singleLinkedList.h"

GraphNode *head;

// 메모리 해제 (해제 후 NULL을 할당하여 에러 방지)
void freeNode(GraphNode **node) {
    if (*node != NULL) {
        free(*node);
        *node = NULL;
    }
}

void freeAll(GraphNode *root) {
    GraphNode *cur = root->next;
    while (cur != NULL) {
        GraphNode *nextNode = cur->next;
        freeNode(&cur);
        cur = nextNode;
    }
    freeNode(&root);
}

void printAll(GraphNode *root) {
    printf("%d\n", root->data);
    GraphNode *cur = head->next;
    while (cur != NULL) {
        printf("%d\n", cur->data);
        cur = cur->next;
    }
}

void deleteItem(GraphNode *root, int targetData) {
    GraphNode *cur = root;
    GraphNode *prev = NULL;
    while (cur != NULL) {
        if (cur->data == targetData) {
            if (prev == NULL) {
                freeNode(&cur);
            } else {
                prev->next = cur->next;
                freeNode(&cur);
            }
        } else {
            prev = cur;
            cur = cur->next;
        }
    }
}

void addFront(GraphNode *root, int data) {
    GraphNode *node = (GraphNode *) malloc(sizeof(GraphNode));
    node->next = root->next;
    node->data = data;
    root->next = node;
}

void removeFront(GraphNode *root) {
    GraphNode *deleteNode = root->next;
    if (deleteNode != NULL) {
        root->next = deleteNode->next;
        freeNode(&deleteNode);
    }
}

void singleLinkedListTest() {
    // 크기 동적 할당 & node 선언
    head = (GraphNode *) malloc(sizeof(GraphNode));
    GraphNode *node1 = (GraphNode *) malloc(sizeof(GraphNode));
    GraphNode *node2 = (GraphNode *) malloc(sizeof(GraphNode));

    // 데이터 삽입
    head->data = 0;
    node1->data = 1;
    node2->data = 2;

    // list 주소로 연결
    head->next = node1;
    node1->next = node2;
    node2->next = NULL;

    // 리스트를 순화하며 모든 데이터 출력
    printAll(head);
//    메모리 해제
    freeAll(head);
}


