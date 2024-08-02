//
// Created by 이병운 on 24. 8. 2.
//
#define PI 3.1415926535
#define POW(x) (x * x)
#define ll long long
#define ld long double

#include <printf.h>
#include "preprocessor.h"

double circumference(int r) {
    return 2 * PI * r;
}

int powInputNumber(int number) {
    return POW(number);
}

void printLargeNum() {
    ll a = 9223372036854775807LL;
    ld b = 12345.678910L;
    printf("%lld\n", a);
    printf("%LF\n", b);
}