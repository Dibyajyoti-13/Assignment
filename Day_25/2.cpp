//stack using linked list
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int n):data(n),next(nullptr){}
}

void push(Node*& head,int data){
    Node* n=new Node(data);
    if(head==nullptr){
        head=n;
        return;
    }
    n->next=head;
    head=n;
}


int main(){

}