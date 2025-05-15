//
// Created by 이병운 on 25. 5. 12.
//

#ifndef C_ALGORITHM_GRAPH_H
#define C_ALGORITHM_GRAPH_H

typedef struct GraphNode {
    int index;
    int distance;
    struct GraphNode *next;
} GraphNode;

void undirectedUnWeightedGraph(int arr[][1001]);

void directedWeightedGraph();

void addFrontForGraph(GraphNode *root, int index, int distance);

static void showAll(GraphNode *root);

#endif //C_ALGORITHM_GRAPH_H
