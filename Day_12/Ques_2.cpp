#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void printLinkedList(Node* head){
    while(head!=nullptr){
        cout<<head->data<< " ";
        head=head->next;
    }
}

void insertAtEnd(Node*& head, int data){
    Node* n = new Node(data);
    if (head == nullptr) {
        head = n;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = n;
}
int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    int data;
    cout<<"Enter value: ";
    cin>>data;
    insertAtEnd(head,data);
    printLinkedList(head);
}

