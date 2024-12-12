#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node (int data) : data(data), left(nullptr), right(nullptr){}
};

void insertion(Node*& root, int data){
    Node* newNode = new Node(data);
    if(root == NULL){
        root = newNode;
        return;
    }
    if(data < root->data){
        insertion(root->left, data);
    } 
    else if(data > root->data){
        insertion(root->right, data);
    }
}

void inorder(Node* root) {
    if (root == NULL) return;
    
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void search(Node* root, int target){
    if(root == NULL){
        cout << "Empty Tree!" << endl;
        return;
    }
    if (root->left == NULL && root->right == NULL) {
        cout << "Only one node in the tree: " << root->data << endl;
        return;
    }
    Node* curr = root;
    int up = curr->data, low = curr->data;
    while(curr){
        if(curr->data == target){
            cout << "Value found: " << curr->data;
            return;
        }

        if(curr->data > target){
            up = curr->data;
            curr = curr->left;
        }
        else if(curr->data < target){
            low = curr->data;
            curr = curr->right;
        }
    }
    if((target - low) == (up - target)){
        cout << "Closest values: " << up << " and " << low << endl;
        return;
    }
    int dis = abs(target - low) > abs(up - target)? up : low;
    cout << "Closest value: " << dis << endl;
    return;
}

int main(){
    Node* root = NULL;
    int n;
    cout << "Enter number of values: ";
    cin >> n;
    cout << "Enter values: ";
    for(int i = 0; i < n; i++){
        int data;
        cin >> data;
        insertion(root, data);
    }
    inorder(root);
    cout << endl;
    int target;
    cout << "Enter target: ";
    cin >> target;
    search(root, target);
    return 0;
}