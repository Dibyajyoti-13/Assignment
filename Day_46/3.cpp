#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node* right;
    Node* left;
    Node(int n):data(n), right(nullptr), left(nullptr){}
};

Node* Insert(Node* root,int n){
    Node* node=new Node(n);
    if(!root){
        return node;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        if(curr->left) q.push(curr->left);
        else{
            curr->left=node;
            return root;
        }
        if(curr->right) q.push(curr->right);
        else{
            curr->right=node;
            return root;
        }
    }
}

int findMax(Node* root) { 
    if (root == nullptr) return INT16_MIN; 
    int res = root->data; 
    int lres = findMax(root->left); 
    int rres = findMax(root->right); 
    return max(res, max(lres, rres)); 
}

int main(){
    Node* root=nullptr;
    cout<<"Enter Elements or -1 to stop: ";
    int n;
    cin>>n;
    while(n!=-1){
        root=Insert(root, n);
        cin>>n;
    }
    cout<<"Maximum value: "<<findMax(root)<<endl;
    return 0;
}