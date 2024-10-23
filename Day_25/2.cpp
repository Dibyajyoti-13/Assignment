//stack using linked list
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int n):data(n),next(nullptr){};
};

void push(Node*& head,int data){
    Node* n=new Node(data);
    if(head==nullptr){
        head=n;
        return;
    }
    n->next=head;
    head=n;
}

void pop(Node*& head){
    if(head==nullptr){
        cout<<"Empty Stack! Underflow.";
        return;
    }
    cout<<head->data<<endl;
    head=head->next;
}
void peek(Node* head){
    if(head==nullptr){
        cout<<"Empty Stack!";
        return;
    }
    cout<<head->data<<endl;

}

void display(Node* head){
    Node* current=head;
    while(current!=nullptr){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}

int main(){
    Node* head=nullptr;
    int n;
    do{
        cout<<"Enter number or -1 to exit: ";
        cin>>n;
        if(n==-1) break;
        push(head,n);

    }while(n!=-1);
    pop(head);
    peek(head);
    display(head);
}