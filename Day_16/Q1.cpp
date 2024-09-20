#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int d):data(d),next(nullptr){}
};

void initialz(Node*& head,int data){
    Node* n=new Node(data);
    if(head==nullptr){
        head=n;
        return;
    }
    Node* h=head;
    while(h->next!=nullptr){
        h=h->next;
    }
    h->next=n;
}

void insert(Node*& head,int d){
    Node* n=new Node(d);
    if(head==nullptr || head->data>=d){
        n->next=head;
        head=n;
        return;
    }
    Node* current=head;
    while(current->next!=nullptr && current->next->data<d){
        current=current->next;
    }
    n->next=current->next;
    current->next=n;
}

void display(Node* head){
    Node* current=head;
    while(true){
        cout<<current->data;
        if(current->next!=nullptr){
            cout<<"->";
        }
        else return;
        current=current->next;
    }
}


int main(){
    Node* head=nullptr;
    int n;
    cout<<"Enter length of linked list: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cout<<"Enter value "<<i+1<<": ";
        cin>>a;
        initialz(head,a);
    }
    cout<<"Enter value to add: ";
    cin>>n;
    insert(head,n);
    display(head);
}