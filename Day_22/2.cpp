#include<iostream>
using namespace std;
#define MAX 30
class Stack{
    public:
    int arr[MAX];
    int top;
    Stack():top(-1){}
    void push(int data){
        if(top==MAX-1){
            cout<<"Overflow!! Stack is full"<<endl;
            return;
        }
        arr[++top]=data;
    }
    int pop(){
        if(top==-1){
            cout<<"Underflow!! Stack is empty";
            return -1;
        }
        return arr[top--];
    }
    void display(){
        if(top==-1){
            cout<<"Stack is empty";
            return;
        }
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Stack s;
    int n,value;
    cout<<"Enter length: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>value;
        s.push(value);
    }
    for(int i=0;i<n;i++){
        cout<<s.pop()<<" ";
    }
}