//
//  main.cpp
//  binary_tree
//
//  Created by Saloxiddin Sayfuddinov on 28/10/24.
//

#include <iostream>

using namespace std;

struct BtNode {
    int data;
    BtNode *left, *right;
    BtNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

BtNode* insertNode(BtNode *root, int val) {
    if (!root) return new BtNode(val);
    if (val < root->data) {
        root->left = insertNode(root->left, val);
    } else {
        root->right = insertNode(root->right, val);
    }
    return root;
}

void inorderTraversal(BtNode *root) {
    if (!root) return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    BtNode *root = nullptr;
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 40);
    insertNode(root, 60);
    insertNode(root, 70);
    insertNode(root, 80);
    
    cout << "InorderTraversal: ";
    inorderTraversal(root);
    cout << endl;
    return 0;
}
