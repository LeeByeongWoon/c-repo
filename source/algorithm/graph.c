//
// Created by 이병운 on 25. 5. 12.
//

#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

void undirectedUnWeightedGraph(int arr[][1001]) {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        arr[x][y] = 1;
        arr[y][x] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
}

void directedWeightedGraph() {
    int n, m;
    scanf("%d %d", &n, &m);
    GraphNode **a = (GraphNode *) malloc(sizeof(GraphNode *) * (n + 1));
    for (int i = 1; i <= n; i++) {
        a[i] = (GraphNode *) malloc(sizeof(GraphNode));
        a[i]->next = NULL;
    }

    for (int i = 0; i <= m; i++) {
        int x, y, distance;
        scanf("%d %d %d", &x, &y, &distance);
        addFrontForGraph(a[x], y, distance);
    }
    for (int i = 1; i <= n; i++) {
        printf("원소 [%d]", i);
        showAll(a[i]);
        printf("\n");
    }

    for (int i = 0; i <= n; i++) {
        if (a[i] != NULL) free(a[i]);
    }
    if (a != NULL)
        free(a);
}

void addFrontForGraph(GraphNode *root, int index, int distance) {
    GraphNode *node = (GraphNode *) malloc(sizeof(GraphNode));
    node->index = index;
    node->distance = distance;
    node->next = root->next;
    root->next = node;
}

static void showAll(GraphNode *root) {
    GraphNode *curr = root->next;
    while (curr != NULL) {
        printf("%d(거리: %d)", curr->index, curr->distance);
        curr = curr->next;
    }
}