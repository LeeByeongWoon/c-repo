//standard I/O
#include <stdio.h>

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

int main(void) {
    // double a, b;
    // scanf("%lf %lf", &a, &b);
    // //한자리씩 끊어 받기
    // // int a, b, c;
    // // scanf("%d %d %d", &a, &b, &c);
    // // printf("%d %d %d\n", a, b, c);
    // printf("The number is %.2f %.2f\n", b, a);
    // getchar();

    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a > b);
    printf("%d\n", !a);
    getchar();
    return 0;
}
