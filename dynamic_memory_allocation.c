//
// Created by 이병운 on 24. 7. 29.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void dynamic1() {
    int *a = malloc(sizeof(int));
    printf("%d\n", *a);
    a = malloc(sizeof(int));
    printf("%d\n", *a);
}

void dynamic2() {
    // stack에 선언된 포인터는 자동으로 해제 되지만, 동적 할당한 포인터는 해제하지않으면 계속 유지된다.
    // 이는 메모리 누수로 이어져 프로그램이 꺼지는 주요 원인이 된다.
    int *a = malloc(sizeof(int));
    printf("%d\n", *a);
    free(a);
    a = malloc(sizeof(int));
    printf("%d\n", *a);
    free(a);
}

void dynamic3() {
    // 포인터 *3 을 하므로써 포인터의 포인터를 표현
    int **p = (int **) malloc(sizeof(int *) * 3);
    for (int i = 0; i < 3; i++) {
        *(p + i) = (int *) malloc(sizeof(int) * 3);
    }

    printf("%p\n", &(*(*(p + 1) + 1)));
    printf("%p\n", &p[1][1]);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            *(*(p + i) + j) = i * 3 + j;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(p + i) + j));
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++) {
        free(p[i]);
    }
    free(p);
}

void dynamicStr() {
    char *a = malloc(100);
    memset(a, 'A', 100);
    for (int i = 0; i < 100; i++) {
        printf("%d %c", i + 1, a[i]);
        printf("\n");
    }
}