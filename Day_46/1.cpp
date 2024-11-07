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

int left(Node* root){
    if(!root) return -1;
    return 1+left(root->left);
}

int right(Node* root){
    if(!root) return -1;
    return 1+right(root->right);
}

int height(Node* root){
    if(!root) return 0;
    int l=left(root);
    int r=right(root);
    return (l>r)?l:r;
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
    cout<<"No. of inputs: ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        root=Insert(root, a);
    }
    PostOrder(root);
    cout<<endl;
    cout<<"Height of the tree: "<<height(root);
    return 0;
}
