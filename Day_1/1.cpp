#include<iostream>
using namespace std;
int main(){
    string a,b;
    cout<<"Enter the first string: ";
    getline(cin,a);
    cout<<"Enter the second string: ";
    getline(cin,b);
    string c=a+b;
    cout<<"Concatenated string: "<< c;
}