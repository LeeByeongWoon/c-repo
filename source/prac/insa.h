//
// Created by 이병운 on 24. 10. 15.
//

#ifndef C_ALGORITHM_INSA_H
#define C_ALGORITHM_INSA_H

typedef struct insa insa;
typedef struct A a;

struct A {
    int n;
    int g;
};
struct insa {
    char name[10];
    int age;
};

void insa_runner();

void a_runner();

#endif //C_ALGORITHM_INSA_H
