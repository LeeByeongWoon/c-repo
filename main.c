#include <stdio.h>
#include <stdlib.h>
#include "Student.h"
#include "fileIO.h"
//함수의 시작점 항상 0을 반환 하므로(종료 코드) 반환 타입이 int임
/*
 * 변수 종류
 * int number 4byte %d
 * long long long number 8byte %lld
 * float Decimal number 8byte %f
 * double big Decimal number 8byte %lf, %f 입력 받을 때 정확히 입력해야 하므로 입력은 %lf 로 해야함
 * charValue text unlimit %s
 * bool true/false
 * char 1 length text 1byte %c
 * % 이스케이프 -> %%
 * & 주소 연산자 -> 컴퓨터가 실제 데이터의 메모리에 접근함.
 * %.2f -> 2번째 자릿수 까지 반올림
 */



int main(void) {
    Student student1 = createStudentReturnStudent("20141897", "이병운", 4, "정보통신학과", 90);
    Student student2 = createStudentReturnStudent("20141898", "이병운", 3, "정보통신학과", 99);
    Student student3 = createStudentReturnStudent("20141899", "이병운", 4, "정보통신학과", 88);

    Student student[] = {student1, student2, student3};
    printStudentInfo(student3);
    inputStudentData(student, 3);
    return 0;
}

