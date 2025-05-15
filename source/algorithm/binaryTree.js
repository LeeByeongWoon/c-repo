import {stdout} from 'node:process';

class BinaryTree {
    #leftChild
    #rightChild

    constructor(data, leftChild, rightChild) {
        this.data = data;
        this.#leftChild = leftChild;
        this.#rightChild = rightChild;
    }

    get leftChild() {
        return this.#leftChild;
    }

    get rightChild() {
        return this.#rightChild;
    }

}

function preorder(node) {
    if (!node) return;
    stdout.write(node.data.toString() + " ");
    preorder(node.leftChild);
    preorder(node.rightChild);
}

function inOrder(node) {
    if (!node) return;
    inOrder(node.leftChild);
    stdout.write(node.data.toString() + " ");
    inOrder(node.rightChild);
}

function postOrder(node) {
    if (!node) return;
    postOrder(node.leftChild);
    postOrder(node.rightChild);
    stdout.write(node.data.toString() + " ");
}

const n7 = new BinaryTree(50, null, null);
const n6 = new BinaryTree(37, null, null);
const n5 = new BinaryTree(23, null, null);
const n4 = new BinaryTree(5, null, null);
const n3 = new BinaryTree(48, n6, n7);
const n2 = new BinaryTree(17, n4, n5);
const n1 = new BinaryTree(30, n2, n3);
preorder(n1);
console.log();
inOrder(n1);
console.log();
postOrder(n1);