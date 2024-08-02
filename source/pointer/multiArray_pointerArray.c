//
// Created by 이병운 on 7/9/24.
//

#include <stdio.h>

void multiArray_2() {
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void multiArray_3() {
    int a[2][3][3] = {{{1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9}},
                      {{1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9}}};
    int i, j, k;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

void pointerArr() {
//    int a = 10;
//    int b[10];
//    b = &a; 상수는 배열에 대입 불가능
// 반대로 배열은 포인터에 대입 가능
    int a[5] = {1, 2, 3, 4, 5};
//    int *b = a; // *b = &a[0] 과 동일 함
    int i;
    for (i = 0; i < 5; i++) {
        printf("%p \n", (a + i));
    }
}

void pointerAdd() {
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;
    // 포인터 에서 연산은 포인터가 가리키는 자료형 만큼의 연산이 됨 따라서 +1 을 할경우 +4byte만큼 증가함.
    printf("%d\n", *(p));
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p++));
    printf("%d\n", *(++p));
    printf("%d\n", *(p + 2));
}

void pointerPointer() {
    int a[2][5] = {{1, 2, 3, 4, 5},
                   {6, 7, 8, 9, 10}};
    int (*p)[5] = &a[1];
    //    int num1, num2, num3, num4;
    //    int *p2[4] = {&num1, &num2, &num3, &num4};
    // 해당 표현은 주소를 4개 담는 포인터 배열이라는 표현
    printf("%p\n", &a[0][4]);
    printf("%p\n", &a[1][0]);
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", p[0][i]);
    }
}