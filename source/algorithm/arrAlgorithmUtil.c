//
// Created by 이병운 on 25. 5. 7.
//

#include "arrAlgorithmUtil.h"


//
// Created by 이병운 on 25. 5. 7.
//

#include <stdio.h>
#include <limits.h>
#include "selectionSort.h"

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArr(int array[], int length) {
    printf("[");
    for (int i = 0; i < length; i++) {
        if (i == length - 1) {
            printf("%d", array[i]);
        } else printf("%d, ", array[i]);
    }
    printf("]");
}