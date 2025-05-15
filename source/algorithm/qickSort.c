//
// Created by 이병운 on 25. 5. 7.
//

#include "qickSort.h"
#include "arrAlgorithmUtil.h"

void quickSort(int arr[], int size) {
    if (size <= 1) return;
    sort(0, size - 1, arr);
    printArr(arr, size);
}

static void sort(int start, int end, int arr[]) {
    if (start >= end) return;
    int key = start, i = start + 1, j = end, temp;
    while (i <= j) {
        while (i <= end && arr[i] <= arr[key]) i++;
        while (j > start && arr[j] >= arr[key]) j--;
        if (i > j) swap(&arr[key], &arr[j]);
        else swap(&arr[i], &arr[j]);
    }
    sort(start, j - 1, arr);
    sort(j + 1, end, arr);
}