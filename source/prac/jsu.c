//
// Created by 이병운 on 24. 10. 15.
//

#include <stdio.h>
#include "jsu.h"

void runner() {
    struct jsu st[3] = {{"데이터",  95, 88},
                        {"데이터",  84, 91},
                        {"데이터3", 86, 75}};
    struct jsu *p;

    p = &st[0];
    (p + 1)->hab = (p + 1)->os + (p + 2)->db; // 84 + 75
    (p + 1)->hhab = (p + 1)->hab + p->os + p->db; // (84 + 75) + 95+88
    // hab = (1->os + 2->db) == 84 + 75
    // hhab = hab + 0->os + 0->db == hab + 95 + 88
    // hab + hhab = 159 + 342 = 501
    printf("%d", (p + 1)->hab + (p + 1)->hhab);
}