//
// Created by 이병운 on 24. 7. 31.
//

#ifndef C_ALGORITHM_C_STRUCT_H
#define C_ALGORITHM_C_STRUCT_H
typedef struct {
    char studentId[10];
    char name[10];
    int grade;
    char major[51];
    int score;
} Student;

Student createDefaultStudent();

void createStudent(Student *student, char *studentId, char *name, int grade, char *major, int score);

Student createStudentReturnStudent(const char *studentId, const char *name, int grade, const char *major, int score);

void printStudentInfo(Student student);

void printPointerStudentInfo(Student *student);

#endif //C_ALGORITHM_C_STRUCT_H