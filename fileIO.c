//
// Created by 이병운 on 24. 7. 31.
//

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include "fileIO.h"

void openFile() {
    char s[20] = "Hello, World";
    FILE *file;
    file = fopen("temp.txt", "w");
    fprintf(file, "%s\n", s);
    fclose(file);
    printf("done");
}

void inputStudentData(Student *student, int length) {
    FILE *file;
    file = fopen("studentInfo.txt", "a");
    for (int i = 0; i < length; i++) {
        fprintf(file, "%s %d %s %d %s\n", (student + i)->studentId, (student + i)->score, (student + i)->name,
                (student + i)->grade,
                (student + i)->major);
        printf("%s %d %s %d %s\n", (student + i)->studentId, (student + i)->score, (student + i)->name,
               (student + i)->grade,
               (student + i)->major);
    }
    fclose(file);
}

void outputStudentData(FILE *file) {
//    int n, sum = 0;
//    file = fopen("input.txt", "r");
//    fscanf(file, "%d", &n);
//    Student *students = (Student *) malloc(sizeof(Student) * n);
//    for (int i = 0; i < n; i++) {
//        scanf(file, "%s %d", &(students + i)->name, &(students + i)->score, &(students + i)->studentId);
//        printf("이름: %s, 성적: %d, 아이디:%s\n", (students + i)->name, (students + i)->score,
//               (students + i)->studentId);
//    }
//    free(students);
//    students = NULL;
}