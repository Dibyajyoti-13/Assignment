#include<iostream>
using namespace std;
int fact(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
        fac=fac*i;
    }
    return fac;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is: "<< fact(n);
}