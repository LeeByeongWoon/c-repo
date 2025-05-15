//
// Created by 이병운 on 25. 5. 7.
//

#include "insertionSort.h"
#include "arrAlgorithmUtil.h"

void insertionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int j = i;
        while (j >= 0 && arr[j] > arr[j + 1]) {
            swap(&arr[j], &arr[j + 1]);
            j--;
        }
    }
    printArr(arr, size);
}