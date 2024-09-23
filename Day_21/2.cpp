#include<iostream>
#include<vector>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int d):data(d),next(nullptr){}
};

bool hasCycle(Node *head) {
    if (head == nullptr) return false;

    Node *slow = head;
    Node *fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next; 
        if (slow == fast) { 
            return true;
        }
    }
    return false;                      
}

Node* insert(vector<int> data,int pos){
    if(data.empty()) return nullptr;
    Node* head=new Node(data[0]);
    Node* current=head;
    Node* cycle=nullptr;
    for(int i=1;i<data.size();i++){
        Node* n=new Node(data[i]);
        current->next=n;
        current=n;
        if(i==pos){
            cycle=n;
        }
    }
        if (cycle){
            current->next=cycle;
        }
        else if(pos==0) current->next=head;
    return head;
}

int main(){
    Node* head=nullptr;
    vector<int> values;
    int n,d,p;
    cout<<"Enter length of the linked list: ";
    cin>>n;
    cout<<"Enter: ";
    for(int i=0;i<n;i++){
        cin>>d;
        values.push_back(d);
    }
    cout<<"Enter position: ";
    cin>>p;
    head=insert(values,p);
    cout<<(hasCycle(head)?"True":"False");
}