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

void PostOrder(Node* root){
    if(!root) return;
    if(root->left) PostOrder(root->left);
    if(root->right) PostOrder(root->right);
    cout<<root->data<<" ";
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
        root=Insert(root, a);
    }
    PostOrder(root);
    return 0;
}
