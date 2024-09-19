#include<iostream>
#include<random>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int newData, Node* nextNOde=nullptr):data(newData),next(nextNOde){}
};

int main(){
    random_device rd;
    default_random_engine eng(rd()); 
    uniform_int_distribution<int> d(1, 100);
    int* arr=new int[6];
    for(int i=0;i<6;i++){
        arr[i]=d(eng);
    }
    Node* head=new Node(12);
    string* s1=new string("OK. It can be done this way as well.");
    for(int i=0;i<6;i++){
        cout<<*(arr+i)<<endl;
    }
    cout<<"Node Data: "<<head->data<<endl;
    cout<<*s1<<endl;
}