//
// Created by 이병운 on 24. 10. 14.
//

#include <printf.h>
#include "control.h"

// 1= b, 2 = f ,3 = A,  4 = c , 5 = F
// 1 is b, 3 is A, 4 is C
void cont() {
    int score[] = {86, 53, 95, 76, 61};
    char grade;
    char str[] = "Rank";
    for (int i = 0; i < 5; i++) {
        switch (score[i] / 10) {
            case 10:
            case 9:
                grade = 'A';
                break;
            case 8:
                grade = 'B';
                break;
            case 7:
                grade = 'C';
                break;
            default:
                grade = 'F';
        }
        if (grade != 'F') {
            printf("%d is %c %s\n", i + 1, grade, str);
        }
    }
}

/**
 * 나머지(모듈러 연산) 으로 뒷자리 한자리 씩 result * 10에 더해 자릿수를 뒤집는 함수
 */
void cont_2() {
    int number = 1234;
    int div = 10, result = 0;
    while (number > 0) {
        result = result * div;
        result = result + number % div;
        number = number / div;
    }
    printf("%d", result);
}

/**
 * 모듈러 연산으로 한자리 씩 떼 내어 2^n만큼 곱해 10진수화 시킴
 */
void binary() {
    int input = 101110;
    int di = 1;
    int sum = 0;
    while (1) {
        if (input == 0) break;
        sum = sum + (input % 10) *
                    di; // 0 + 1 * 2 + 1 * (2 * 2) + 1 * (2 * 2 * 2) + 0 + 1 * (2 * 2 * 2 * 2 * 2) 2 + 4 + 8 + 32
        di = di * 2;
        input = input / 10;
    }
    printf("%d", sum);
}

void t_pointer() {
    int a = 50;
    int *b = &a;
    *b = *b + 20;
    // 주소 참조 후 변경 했으므로 원본 값도 수정 됨
    printf("%d, %d\n", a, *b);
    char *s;
    s = "gilbut";
    for (int i = 0; i < 6; i += 2) {
        printf("%c, ", s[i]);
        printf("%c, ", *(s + i));
        printf("%s\n", s + i);
    }
    // g g gilbut
    // i i lbut
    // l l ut
}

void t_pointer2() {
    int arr[3];
    int s = 0;
    *(arr + 0) = 1; // [1, NULL, NULL]
    arr[1] = *(arr + 0) + 2; // [1, 3, NULL]
    arr[2] = *arr + 3; //[1 ,3 ,4]
    for (int i = 0; i < 3; i++) {
        s = s + arr[i]; // 1 + 3 + 4
    }
    printf("%d", s); // 8
}

void t_qwerty() {
    char *a = "qwer";
    char *b = "qwety"; //r이 없는 함정 문제
    for (int i = 0; a[i] != '\0'; i++)
        for (int j = 0; b[j] != '\0'; j++)
            if (a[i] == b[j])
                printf("%c", a[i]); //
}
