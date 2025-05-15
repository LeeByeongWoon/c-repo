//
// Created by 이병운 on 25. 5. 12.
//

#ifndef C_ALGORITHM_BFS_H
#define C_ALGORITHM_BFS_H

#include "graph.h"
#include "dfs.h"

typedef struct Queue {
    GraphNode *front;
    GraphNode *rear;
    int size;
} Queue;

int bfsVisit[MAX_SIZE];

void bfs(int index, Queue *queue, GraphNode **a);

void queuePush(int index, Queue *queue);

int queuePop(Queue *queue);


#endif //C_ALGORITHM_BFS_H
