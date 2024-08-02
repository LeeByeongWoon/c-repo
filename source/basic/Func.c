//
// Created by 이병운 on 24. 7. 31.
//

#include <stdio.h>
#include "Func.h"
#include "calc.h"


void myFunction() {
    printf("It's my function");
}

void yourFunction() {
    printf("It's my function");
}

void FuncPointer() {
    void (*fp)() = myFunction;
    fp();
    fp = yourFunction;
    fp();
}

void FuncPointerWithParams() {
    int (*fp)(int, int) = add;
    printf("%d\n", fp(10, 3));
    fp = min;
    printf("%d\n", fp(10, 3));
}

// char *a == char a[] []안을 비울 경우 크기를 알 수 없으므로 포인터와 같은 취급함
int (*process(char *a))(int, int) {
    printf("%s\n", a);
    return add;
}

void FuncPointerWithPointerParams() {
    int (*fp)(int, int) = process("안녕하세요 여러분");
    printf("%d\n", fp(10, 2));
}