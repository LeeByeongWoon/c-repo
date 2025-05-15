//
// Created by 이병운 on 24. 10. 15.
//

#include <printf.h>
#include "bubbleSort.h"

static void swap(int *a, int idx1, int idx2) {
    int t = a[idx1];
    a[idx1] = a[idx2];
    a[idx2] = t;
}

void Usort(int *a, int len) {
    for (int i = 0; i < len - 1; i++)
        for (int j = 0; j < len - 1 - i; j++)
            if (a[j] > a[j + 1])
                swap(a, j, j + 1);
}