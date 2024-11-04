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

void print(Node* root){
    if(!root) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int size=q.size();
        while(size>0){
            Node* curr = q.front();
            q.pop();
            cout<<curr->data<<" ";
            
            if (curr->left != nullptr)
                q.push(curr->left);
        
            if (curr->right != nullptr)
                q.push(curr->right);
            size--;
        }
        cout<<endl;
        if(!q.empty()) cout<<"/\\"<<endl;
    }
}

int main(){
    Node* root=nullptr;
    for(int i=1;i<=5;i++){
        root=InsertNode(root, i);
    }
    print(root);
    return 0;
}
