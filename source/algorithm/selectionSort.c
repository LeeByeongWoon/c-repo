//
// Created by 이병운 on 25. 5. 7.
//

#include <stdio.h>
#include <limits.h>
#include "selectionSort.h"
#include "arrAlgorithmUtil.h"

void selectionSort(int array[]) {
    int n, min, index;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++) {
        min = INT_MAX;
        for (int j = i; j < n; j++) {
            if (min > array[j]) {
                min = array[j];
                index = j;
            }
        }
        swap(&array[i], &array[index]);
    }
    printArr(array, n);
}