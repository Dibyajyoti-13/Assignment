#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node*prev;
    Node(int d):data(d),next(nullptr),prev(nullptr){}
};

void insert(Node** head,int data){
    Node* n=new Node(data);
    if(*head==nullptr){
        *head=n;
        return;
    }
    Node* current=*head;
    while(current->next!=nullptr){
        current=current->next;
    }
    current->next=n;
    n->prev=current;
    return;
}

void insertatposition(Node*& head, int pos, int data){
    Node* n=new Node(data);
    if (head==nullptr){
        head=n;
        return;
    }
    Node* current=head;
    for(int i=0;i<pos && current->next!=nullptr;i++){
        current=current->next;
    }
    if(current->next!=nullptr){
        current->next->prev=n;
    }
    n->next=current->next;
    n->prev=current;
    current->next=n;
    return;
}

void display(Node* head){
    while(head!=nullptr){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"nullptr"<<endl;
}

void deleteList(Node** head) {
    Node* current = *head;
    Node* nextNode;
    
    while (current != nullptr) {
        nextNode = current->next; // Store the next node
        delete current;           // Delete the current node
        current = nextNode;       // Move to the next node
    }
    
    *head = nullptr; // Set head to nullptr after deletion
}

int main(){
    Node* head=nullptr;
    int n,d,p;
    cout<<"Enter the length of linked list: ";
    cin>>n;
    cout<<"Enter values: ";
    for(int i=0;i<n;i++){
        cin>>d;
        insert(&head,d);
    }
    display(head);
    cout<<"Enter position: ";
    cin>>p;
    cout<<"Enter value: ";
    cin>>d;
    if(p>=0){
        insertatposition(head,p,d);
    }
    else cout<<"Invalid position."<<endl;
    display(head);
    deleteList(&head);
    display(head);
}
