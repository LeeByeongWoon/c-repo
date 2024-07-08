//standard I/O
#include <stdio.h>
#include <stdbool.h>
#include "calc.h"
#include "arr.h"
#include "pointer.h"
#include "string.h"
//함수의 시작점 항상 0을 반환 하므로(종료 코드) 반환 타입이 int임
/*
 * 변수 종류
 * int number 4byte %d
 * long long long number 8byte %lld
 * float Decimal number 8byte %f
 * double big Decimal number 8byte %lf, %f 입력 받을 때 정확히 입력해야 하므로 입력은 %lf 로 해야함
 * string text unlimit %s
 * bool true/false
 * char 1 length text 1byte %c
 * % 이스케이프 -> %%
 * & 주소 연산자 -> 컴퓨터가 실제 데이터의 메모리에 접근함.
 * %.2f -> 2번째 자릿수 까지 반올림
 */
int factorial(int a) {
    if (a == 1) return 1;
    else return a * factorial(a - 1);
}

int main(void) {
//    pointer();
    string();
    getchar();
    return 0;
}

