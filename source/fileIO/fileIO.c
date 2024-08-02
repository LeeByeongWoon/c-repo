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
    file = fopen("studentInfo.txt", "w");
    for (int i = 0; i < length; i++) {
        fprintf(file, "%s %d %s %d %s\n", (student + i)->studentId, (student + i)->score, (student + i)->name,
                (student + i)->grade,
                (student + i)->major);
    }
    fclose(file);
}

double calcStudentAvg(int sum, int count) {
    return (double) sum / count;
}

void outputStudentData() {
    int linesCount = 0, sum = 0;
    FILE *file;
    file = fopen("studentInfo.txt", "r");
    char ch;

    if (file == NULL) {
        return;
    }

    //포인터가 파일 끝으로 이동했음.
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n')
            linesCount++;
    }

    //포인터 초기화
    rewind(file);
    printf("lines: %d\n", linesCount);

    Student *students = (Student *) malloc(sizeof(Student) * linesCount);
    for (int i = 0; i < linesCount; i++) {
        // 입력
        fscanf(file, "%s %d %s %d %s\n", (students + i)->studentId, &(students + i)->score,
               (students + i)->name,
               &(students + i)->grade,
               (students + i)->major);
        // 출력
        printf("%s %d %s %d %s\n", (students + i)->studentId, (students + i)->score,
               (students + i)->name,
               (students + i)->grade,
               (students + i)->major);

        sum += (students + i)->score;
    }
    free(students);
    fclose(file);
    printf("점수 평균: %.2f\n", calcStudentAvg(sum, linesCount));
    students = NULL;
}

