#include "calc.h"

int add(int num1, int num2) {
    return num1 + num2;
}

int min(int num1, int num2) {
    return num1 - num2;
}

int multi(int num1, int num2) {
    return num1 * num2;
}

int div(int num1, int num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        return 0;
    }
}

// left shift => num * (2 * shifter);
int bitLeftShift(int num1, int shifter) {
    int result = num1 << shifter;
    return result;
}

int bitRightShift(int num1, int shifter) {
    return num1 >> shifter;
}

void switchCaseFunc() {
    printf("학점을 입력 하세요: ");
    char a;
    scanf("%s", &a);
    printf("%c \n", a);
    if ((char) a >= 65 && (char) a <= 70) {
        printf("%s 학점 입니다. \n", &a);
    } else {
        printf("옳바르지 않은 학점 입니다.\n");
    }
//    switch (a) {
//        case 'A':
//            printf("A 학점 입니다. \n");
//            break;
//        case 'B':
//            printf("B 학점 입니다. \n");
//            break;
//        case 'C':
//            printf("C 학점 입니다. \n");
//            break;
//        default:
//            printf("옳바르지 않은 학점 입니다.\n");
//    }
}

// ~ (BIT NOT) , & (AND) , | (OR) , ^ (XOR) , << / >> (SHIFT)

void printCalc(int num1, int num2) {
    printf("%-5d + %5d = %5d\n", num1, num2, add(num1, num2));
    printf("%-5d - %5d = %5d\n", num1, num2, min(num1, num2));
    printf("%-5d x %5d = %5d\n", num1, num2, multi(num1, num2));
    printf("%-5d / %5d = %5d\n", num1, num2, div(num1, num2));
}