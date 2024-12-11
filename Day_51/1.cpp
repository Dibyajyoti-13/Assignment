#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int n) : data(n), left(nullptr), right(nullptr) {}
};

void insert(Node*& root, int data){
    Node* newNode = new Node(data);
    if(root == NULL){
        root = newNode;
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp->left == nullptr){
            temp->left = newNode;
            return;
        }
        else q.push(temp->left);

        if(temp->right == nullptr){
            temp->right = newNode;
            return;
        }
        else q.push(temp->right);
    }
}

int max_depth(Node* root, int data){
     if (root == nullptr) {
        cout << "Empty binary tree" << endl;
        return -1;
    }
    
    queue<Node*> q;
    q.push(root);
    int depth = 0;
    while (!q.empty()) {
        int levelSize = q.size();
        depth++;
        
        for (int i = 0; i < levelSize; ++i) {
            Node* temp = q.front();
            q.pop();
            
            if (temp->data == data) return depth; 
            if (temp->left != nullptr)
                q.push(temp->left);
            if (temp->right != nullptr)
                q.push(temp->right);
        }
    }
    
    return -1; 
}

void inorder(Node* root) {
    if (root == NULL) return;
    
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
    Node* root = NULL;
    int n;
    cout << "Enter number of values: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int data;
        cin >> data;
        insert(root, data);
    }
    inorder(root);
    cout << endl;
    int value;
    cout << "Enter value to search: ";
    cin >> value;
    int t = max_depth(root,value);
    cout << "Max Depth of Node: " << t << endl;
    return 0;
}