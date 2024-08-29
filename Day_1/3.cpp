#include<iostream>
using namespace std;
int sqr(int n){
    return n*n;
}
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"The sqaure of "<<a<<" is: "<<sqr(a)<<endl;
}