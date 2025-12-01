#include <iostream>
using namespace std;

// Node structure of Binary Tree
struct Node {
    int data;
    Node* left;
    Node* right;
    
    // constructor
    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int main() {
    // Manually create this tree:
    //        1
    //       / \
    //      2   3
    //     / \
    //    4   5

    Node* root = new Node(1);   // root node

    root->left = new Node(2);   // left child of root
    root->right = new Node(3);  // right child of root

    root->left->left = new Node(4);   // left child of node 2
    root->left->right = new Node(5);  // right child of node 2

    cout << "Root data: " << root->data << endl;
    cout << "Left child of root: " << root->left->data << endl;
    cout << "Right child of root: " << root->right->data << endl;

    return 0;
}
