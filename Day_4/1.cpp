#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first integer: ";
    cin>>a;
    cout<<"Enter second integer: ";
    cin>>b;
    cout<<"Addition: "<<a+b<<endl;
    cout<<"Substraction: "<<a-b<<endl;
    cout<<"Multiplication: "<<a*b<<endl;
    if (b!=0){
        cout<<"Division: "<<a/b<<endl;
        cout<<"Modulus: "<<a%b<<endl;
    }
    else cout<<"Division by zero not possible."<<endl;
}