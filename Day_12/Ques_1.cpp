#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};

void insert(Node** head,int newData){
    Node* current=*head;
    Node* n=new Node();
    n->data=newData;
    n->next=nullptr;
    if(*head==NULL){
        *head=n;
        return;
    }
    while(current->next!=nullptr){
        current=current->next;
    }
    current->next=n;
}

void printLinkedList(Node* head){
    while(head!=nullptr){
        cout<<head->data<< " ";
        head=head->next;
    }
}

int main(){
    Node* head=NULL;
    int n;
    cout<<"Enter value or -1 to stop: ";
    while(true){
        cin>>n;
        if(n==-1) break;
        insert(&head,n);
    }
    printLinkedList(head);
}