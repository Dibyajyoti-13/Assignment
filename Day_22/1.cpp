#include<iostream>
using namespace std;
#define MAX 100
class Stack{
    public:
    int arr[MAX];
    int top;
    Stack():top(-1){}
    void push(int data){
        if(top!=MAX-1){
            arr[++top]=data;
        }
    }
    void pop(){
        if(top!=-1){
            cout<<"Popped Element: "<<arr[top--];
        }
        else cout<<"Underflow!! Stack is empty"<<endl;
    }
    void display(){
        if (top==-1){
            cout<<"Empty Stack";
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
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>value;
        if (value!=0) s.push(value);
    }
    cout<<"Stack elements: ";
    s.display();
}