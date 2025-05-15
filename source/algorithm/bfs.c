//
// Created by 이병운 on 25. 5. 12.
//

#include <stdlib.h>
#include "bfs.h"
#include "../dataStructure/listStack.h"

void bfs(int index, Queue *queue, GraphNode **a) {
    queue->front = queue->rear = NULL;
    queue->size = 0;
    queuePush(index, queue);
    bfsVisit[index] = 1;
    while (queue->size != 0) {
        int x = queuePop(queue);
        printf("%d ", x);
        GraphNode *cur = a[x]->next;
        while (cur != NULL) {
            int next = cur->index;
            if (!bfsVisit[next]) {
                queuePush(index, queue);
                bfsVisit[next] = 1;
            }
            cur = cur->next;
        }
    }
}

void queuePush(int index, Queue *queue) {
    GraphNode *node = (GraphNode *) malloc(sizeof(GraphNode));
    node->index = index;
    node->next = NULL;
    if (queue->size == 0) {
        queue->front = node;
    } else {
        queue->rear->next = node;
    }
    queue->rear = node;
    queue->size++;
}

int queuePop(Queue *queue) {
    if (queue->size == 0) {
        return -INF;
    }
    GraphNode *node = queue->front;
    int index = node->index;
    queue->front = node->next;
    free(node);
    queue->size--;
    return index;
}