//
// Created by 이병운 on 24. 10. 15.
//

#include <printf.h>
#include "insa.h"

void insa_runner() {
    insa a[] = {"Kim", 28, "Lee", 38, "Park", 42, "Choi", 31};
    insa *p;
    p = a;
    p++;
    printf("%s\n", p->name); // Lee
    printf("%d\n", p->age); // 38
}

void a_runner() {
    a st[2];

    for (int i = 0; i < 2; i++) {
        st[i].n = i;
        st[i].g = i + 1;
    }
    //{{0, 1}, {1, 2}}
    printf("%d", st[0].n + st[1].g); // 0 + 2
}