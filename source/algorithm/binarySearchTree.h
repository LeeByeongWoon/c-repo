//
// Created by 이병운 on 25. 5. 14.
//

#ifndef C_ALGORITHM_BINARYSEARCHTREE_H
#define C_ALGORITHM_BINARYSEARCHTREE_H
typedef struct BinaryNode {
    int data;
    struct BinaryNode *leftNode;
    struct BinaryNode *rightNode;
} BinaryNode;

BinaryNode *insertBinaryNode(BinaryNode *root, int data);

BinaryNode *searchBinaryNode(BinaryNode *root, int data);

void binaryTreePreorder(BinaryNode *root);

#endif //C_ALGORITHM_BINARYSEARCHTREE_H
