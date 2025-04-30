//
// Created by 이병운 on 24. 10. 15.
//

#include "t_factorial.h"

int t_factorial(int n) {
    if (n <= 1) return 1;
    else return n * t_factorial(n - 1);
};
// t_factorial(3)
// 3 * 2 * 1 = 6