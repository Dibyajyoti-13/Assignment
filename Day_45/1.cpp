#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node* right;
    Node* left;
    Node(int n):data(n), right(nullptr), left(nullptr){}
};

Node* Insert(Node* root,int data){
    Node* nd=new Node(data);
    if(!root) return nd;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        if(curr->left) q.push(curr->left);
        else{
            curr->left=nd;
            return root;
        }
        if(curr->right) q.push(curr->right);
        else{
            curr->right=nd;
            return root;
        }
    }
}

void InOrder(Node* root){
    if(!root) return;
    if(root->left) InOrder(root->left);
    cout<<root->data<<" ";
    if(root->right) InOrder(root->right);
    return;
}

int main(){
    Node* root=nullptr;
    for(int i=1;i<=5;i++){
        root=Insert(root, i);
    }
    InOrder(root);
    return 0;
}
