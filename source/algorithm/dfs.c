//
// Created by 이병운 on 25. 5. 12.
//

#include <printf.h>
#include "dfs.h"

void dfs(int x, GraphNode **a) {
    if (c[x]) return; // 방문한 노드면 탐색 중단
    c[x] = 1; // 방문 처리
    printf("%d", x); // 방문 처리한 노드 출력
    GraphNode *cur = a[x]->next; // 커서를 이웃 노드로 변경
    while (cur != NULL) {
        int next = cur->index;
        dfs(next, a); // 재귀적 으로 이웃 node 호출
        cur = cur->next; // 다음 이웃 노드의 주소 할당
    }
}
