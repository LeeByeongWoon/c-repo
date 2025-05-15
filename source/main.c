
#include <stdio.h>
#include "algorithm/qickSort.h"
#include "algorithm/binarySearchTree.h"


int main(void) {
    BinaryNode *root = NULL;
    root = insertBinaryNode(root, 30);
    root = insertBinaryNode(root, 17);
    root = insertBinaryNode(root, 48);
    root = insertBinaryNode(root, 5);
    root = insertBinaryNode(root, 23);
    root = insertBinaryNode(root, 37);
    root = insertBinaryNode(root, 50);
    binaryTreePreorder(root);
    return 0;
}