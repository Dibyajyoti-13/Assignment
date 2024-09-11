#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter value: ";
    cin>>a;
    int *p=&a;
    cout<<"Using variable: "<<a<<endl;
    cout<<"Using pointer: "<<*p<<endl;
}