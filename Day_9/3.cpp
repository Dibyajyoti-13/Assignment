#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter value: ";
    cin>>a;
    int *p=&a;
    int **x=&p;
    cout<<"Using variable: "<<a<<endl;
    cout<<"Using pointer: "<<*p<<endl;
    cout<<"Using pointer to pointer: "<<**x<<endl;
}