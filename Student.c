#include <string.h>
#include <stdio.h>
#include "Student.h"

//
// Created by 이병운 on 24. 7. 31.
//

//Student student;
//    Student student2 = {"201553158", "이짱구", 4, "컴퓨터교육과"};
//    createStudent(&student, "20153157", "김철수", 4, "컴퓨터교육과");
//    Student *student3 = malloc(sizeof(Student));
//
//    printStudentInfo(student);
//    printStudentInfo(student2);
//    printPointerStudentInfo(student3);

// char* -> 문자열 리터럴에 저장 되므로 읽기 전용이 됨. 리터럴 자체를 수정 불가능
// char[] -> 스택에 저장 된 값을 복사해 옴. 스택에 위치한 값은 자유롭게 수정 가능

Student createDefaultStudent() {
    Student student = {"20141897", "이병운", 4, "정보통신학과", 95};
    return student;
}

void createStudent(Student *student, char *studentId, char *name, int grade, char *major, int score) {
    strcpy(student->studentId, studentId);
    strcpy(student->name, name);
    student->grade = grade;
    stpcpy(student->major, major);
    student->score = score;
};

Student createStudentReturnStudent(const char *studentId, const char *name, int grade, const char *major, int score) {
    Student student;
    strcpy(student.studentId, studentId);
    strcpy(student.name, name);
    student.grade = grade;
    strcpy(student.major, major);
    student.score = score;
    return student;
}

void printStudentInfo(Student student) {
    printf("Student ID: %s\n", student.studentId);
    printf("Name: %s\n", student.name);
    printf("Grade: %d\n", student.grade);
    printf("Major: %s\n", student.major);
};

void printPointerStudentInfo(Student *student) {
    printf("Student ID: %s\n", student->studentId);
    printf("Name: %s\n", student->name);
    printf("Grade: %d\n", student->grade);
    printf("Major: %s\n", student->major);
};