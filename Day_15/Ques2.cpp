#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr){}
};

void del_value(Node*& head,int d){
    if (head == nullptr) {
        cout << "Value does not exist" << endl;
        return;
    }
    if (head->data == d) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* current = head;
    while (current->next != nullptr) {
        if (current->next->data == d) {
            Node* temp = current->next;
            current->next = current->next->next; 
            delete temp;
            return;
        }
        current = current->next;
    }
    cout << "Value does not exist" << endl;
}

void display(Node* head){
    Node* current=head;
    if(current==nullptr){
        cout<<"Empty linked list.";
        return;
    }
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
    Node* current;
    cout<<"Enter number of values: ";
    int n,d;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cout<<"Enter Value "<<i+1<<": ";
        cin>>a;
        Node* n=new Node(a);
        if(head==NULL){
            head=n;
            current=n;
        }
        else{
            current->next=n;
            current=n;
        }
    }
    cout<<"Enter value to delete: ";
    cin>>d;
    del_value(head,d);
    display(head);
}