#include <bits/stdc++.h>
using namespace std;  

struct Node {
    char data;
    Node *left, *right;
    Node(char x) {
        data = x;
        left = right = NULL;
    }
};

// preorder index global / reference
int preIndex = 0;

// search in inorder[]
int searchInorder(char inorder[], int start, int end, char key) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == key) return i;
    }
    return -1;
}

// build tree from preorder + inorder
Node* buildTree(char preorder[], char inorder[], int inStart, int inEnd) {
    if (inStart > inEnd) return NULL;

    // current root = preorder[preIndex]
    char rootVal = preorder[preIndex++];
    Node* root = new Node(rootVal);

    // if leaf node
    if (inStart == inEnd) return root;

    // find root in inorder
    int pos = searchInorder(inorder, inStart, inEnd, rootVal);

    // left & right subtree
    root->left  = buildTree(preorder, inorder, inStart, pos - 1);
    root->right = buildTree(preorder, inorder, pos + 1, inEnd);

    return root;
}

// traversals ------------------
void preorderPrint(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}

void inorderPrint(Node* root) {
    if (!root) return;
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

void postorderPrint(Node* root) {
    if (!root) return;
    postorderPrint(root->left);
    postorderPrint(root->right);
    cout << root->data << " ";
}

int main() {
    char preorder[] = {'F','A','E','K','C','D','H','G','B'};
     char inorder[]  = {'E','A','C','K','F','H','D','B','G'};
    int n = 9;

    Node* root = buildTree(preorder, inorder, 0, n - 1);

    cout << "Preorder : ";
    preorderPrint(root);
    cout << "\nInorder  : ";
    inorderPrint(root);
    cout << "\nPostorder: ";
    postorderPrint(root);
    cout << endl;

    return 0;
}
