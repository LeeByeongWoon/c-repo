//
// Created by 이병운 on 24. 10. 16.
//

#include "perfectNum.h"

int perfectNum(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }
    if (num == sum) return 1;
    return 0;
}