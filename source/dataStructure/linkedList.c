//
// Created by 이병운 on 24. 8. 2.
//

#include <stdlib.h>
#include <printf.h>
#include "linkedList.h"

Node *head;

// 메모리 해제 (해제 후 NULL을 할당하여 에러 방지)
void freeNode(Node **node) {
    if (*node != NULL) {
        free(*node);
        *node = NULL;
    }
}

void freeAll(Node *root) {
    Node *cur = root->next;
    while (cur != NULL) {
        Node *nextNode = cur->next;
        freeNode(&cur);
        cur = nextNode;
    }
    freeNode(&root);
}

void printAll(Node *root) {
    printf("%d\n", root->data);
    Node *cur = head->next;
    while (cur != NULL) {
        printf("%d\n", cur->data);
        cur = cur->next;
    }
}

void deleteItem(Node *root, int targetData) {
    Node *cur = root;
    Node *prev = NULL;
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

void addFront(Node *root, int data) {
    Node *node = (Node *) malloc(sizeof(Node));
    node->next = root->next;
    node->data = data;
    root->next = node;
}

void appendNode(Node *root, int data) {
    Node *cur = root;
    Node *newNode = {data, NULL};
    while (cur != NULL) {
        if (cur->next == NULL) {
            cur->next = node;
        } else {
            Node *nextNode = cur->next;
            cur->next = node;
            node->next = nextNode;
        }
    }
}

void removeFront(Node *root) {
    Node *deleteNode = root->next;
    if (deleteNode != NULL) {
        root->next = deleteNode->next;
        freeNode(&deleteNode);
    }
}

void singleLinkedList() {
    // 크기 동적 할당 & node 선언
    head = (Node *) malloc(sizeof(Node));
    Node *node1 = (Node *) malloc(sizeof(Node));
    Node *node2 = (Node *) malloc(sizeof(Node));

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


