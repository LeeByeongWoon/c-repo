//
// Created by 이병운 on 7/8/24.
//
#include <stdio.h>
#include <stdio.h>
#include <string.h>

// ascii code
// 0 ~ 127
// 0 ~ 9 => 48 ~ 57
// A ~ Z => 65 ~ 96
// a ~ z => 97 ~ 127
// 각 1바이트 할당


void charValue() {
    char a = 65;
    printf("%c\n", a);
}

void inputBufferTypeError() {
    int a;
    char b;
    scanf("%d", &a);
    printf("%d\n", a);
    int temp;
    while ((temp = getchar()) != EOF && temp != '\n') {}
    scanf("%c", &b);
    printf("%c\n", b);
}

// 문자열 메모리 주소 마지막에 null 을 포함 함
// 0 1 2 3 4 5 6 7 8 9 11 10
// H E L L O   W O R L D  \0
void string() {
    char *a = "hello world";
    printf("%s\n", a);
}

void inputString() {
    char a[100];
    fgets(a, sizeof a, stdin);
    printf("%s\n", a);
}

void stringUtil() {
    //strlen
    char a[40] = "hello, world";
    char b[20] = "w";
    //찾은 문자열 이후 값 모두 출력
    printf("문자열 찾기: %s\n", strstr(a, b));
    strcpy(b, a);
    printf("문자열의 길이: %lu\n", strlen(a));
    printf("문자열 복사: %s\n", b);
    strcat(a, b);
    printf("문자열 연결: %s\n", a);
}