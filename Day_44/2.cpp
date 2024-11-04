#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node* right;
    Node* left;
    Node(int n):data(n), right(nullptr), left(nullptr){}
};

Node* InsertNode(Node* root, int d){
    Node* n=new Node(d);
    if(root==nullptr){
        root=n;
        return root;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        if (curr->left != nullptr)
            q.push(curr->left);
        else {
            curr->left =n;
            return root;
        }
    
        if (curr->right != nullptr)
            q.push(curr->right);
        else {
            curr->right = n;
            return root;
        }
    }
}

void PreOrder(Node* root){
    if(!root) return;

    cout<<root->data<<" ";
    
    if(root->left) PreOrder(root->left);
    if(root->right) PreOrder(root->right);
    return;    
}

int main(){
    Node* root=nullptr;
    cout<<"Enter length: ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        root=InsertNode(root, a);
    }
    PreOrder(root);
    return 0;
}
