#include <stdio.h>
#include <limits.h>
//
// Created by 이병운 on 7/8/24.
//

void printArr() {
    int a[10] = {6, 5, 4, 3, 9, 8, 0, 1, 2, 7};
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
}

void printArrMaxVal() {
    int a[10] = {6, 5, 4, 3, 9, 8, 0, 1, 2, 7};
    int i, maxValue = INT_MIN;
    for (i = 0; i < 10; i++) {
        if (a[i] > maxValue) {
            maxValue = a[i];
        }
    }
    printf("Max value: %d\n", maxValue);
    printf("Int Max value: %d\n", INT_MAX);
}

void printString() {
    char a[50];
    scanf("%[^\n]", &*a);
    printf("%s\n", a);
}