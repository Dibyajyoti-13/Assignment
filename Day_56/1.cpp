#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    int height;
    Node(int value){
        data = value;
        left = right = nullptr;
        height = 1;
    }
};

int height(Node* root){
    if(root == nullptr) return 0;
    return root->height;
}

int get_balance(Node* root){
    if(root == nullptr) return 0;
    return height(root->left) - height(root->right);
}

Node* rightRotate(Node* y){
    Node* x = y->left;
    Node* t = x->right;
    x->right = y;
    y->left = t;
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;
    return x;
}

Node* leftRotate(Node* y){
    Node* x = y->right;
    Node* t = x->left;
    x->left = y;
    y->right = t;
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;
    return x;
}

Node* insert(Node* root, int data){
    if(root == nullptr) return new Node(data);

    if(data < root->data) root->left = insert(root->left, data);
    
    else if (data > root->data) root->right = insert(root->right, data);
    
    else return root;

    root->height = 1 + max(height(root->left), height(root->right));

    int balance = get_balance(root);

    if(balance > 1 && data < root->left->data) return rightRotate(root);
    
    if(balance < -1 && data > root->right->data) return leftRotate(root);
    
    if(balance > 1 && data > root->left->data){
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if(balance < -1 && data < root->right->data){
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
    return root;
}

void inorder(Node *root, int start, int stop){
    if (root == nullptr) return;

    inorder(root->left, start, stop);
    if(start <= root->data && root->data <= stop)
    cout << root->data << " ";
    inorder(root->right, start, stop);
}

int main(){
    Node *root = nullptr;
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        root = insert(root, a);
    }
    int start, stop;
    cout << "Enter range values: ";
    cin >> start >> stop;
    inorder(root, start, stop);
    return 0;
}