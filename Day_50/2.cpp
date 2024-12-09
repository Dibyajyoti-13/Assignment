#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

int findMin(Node* root) {
    if (root == nullptr) {
        cout << "Tree is empty!" << endl;
        return -1; 
    }

    Node* current = root;
    while (current->left != nullptr) {
        current = current->left;
    }
    return current->data;
}

int main() {
    int n, value;
    cout << "Enter the number of nodes in the BST: ";
    cin >> n;

    if (n == 0) {
        cout << "Tree is empty!" << endl;
        return 0;
    }

    Node* root = nullptr;
    cout << "Enter the BST elements (one by one): ";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        root = insert(root, value);
    }

    cout << "Minimum value in the BST: " << findMin(root) << endl;

    return 0;
}
