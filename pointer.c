#include <printf.h>

//
// Created by 이병운 on 7/8/24.
//

// & 주소연산자
// * 포인터 변수를 선언 할 때 사용
// * 간접 참조 연산자 -> 포인터 변수가 가지고 있는 변수를 구함
void pointer() {
    int a = 5;
    int *b = &a; // a의 주소 참조
    int **c = &b; // b의 주소를 갖고 있는 포인터의 포인터 난독화에 사용 됨
    printf("%d\n", *b); // 참조한 값 출력 5
    printf("%d\n", &a); // a의 주소 출력 1865790300
    printf("%d\n", &b); // b의 주소 출력 1865790288
    printf("%d\n", b); // b의 주소 출력  1865790300
}

void arrayPointer() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //배열은 변수 자체가 주소를 가르 킴
    int *b = a;
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", &a[i]);
    }
    int j;
    for (j = 0; j < 10; j++) {
        printf("%d\n", &b[j]);
    }
}