//
// Created by 이병운 on 25. 5. 14.
//

#include <MacTypes.h>
#include <stdlib.h>
#include <printf.h>
#include "binarySearchTree.h"

BinaryNode *insertBinaryNode(BinaryNode *root, int data) {
    if (root == NULL) {
        root = (BinaryNode *) malloc(sizeof(BinaryNode));
        root->leftNode = root->rightNode = NULL;
        root->data = data;
        return root;
    } else {
        if (root->data > data) {
            root->leftNode = insertBinaryNode(root->leftNode, data);
        } else {
            root->rightNode = insertBinaryNode(root->rightNode, data);
        }
    }
    return root;
}

BinaryNode *searchBinaryNode(BinaryNode *root, int data) {
    if (root == NULL) return NULL;
    if (root->data == data) return root;
    else if (root->data > data) return searchBinaryNode(root->leftNode, data);
    else return searchBinaryNode(root->rightNode, data);
}

void binaryTreePreorder(BinaryNode *root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    binaryTreePreorder(root->leftNode);
    binaryTreePreorder(root->rightNode);
}