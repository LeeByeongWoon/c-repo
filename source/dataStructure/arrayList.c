//
// Created by 이병운 on 24. 8. 2.
//

#include <stdio.h>
#include "arrayList.h"

#define INF 10000

int arr[INF];
int count = 0;

void addBack(int num) {
    arr[count] = num;
    count++;
}

//하나씩 미루기
void addFirst(int num) {
    for (int i = count; i >= 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = num;
    count++;
}

//삭제하고 하나식 당기기
void deleteAt(int index) {
    for (int i = index; i < count - 1; i++) {
        arr[i] = arr[i + 1];
    }
    count--;
};

void printList() {
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
}