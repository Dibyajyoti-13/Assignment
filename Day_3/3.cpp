#include<iostream>
using namespace std;
void mul(int n){
    cout<<"The multiplication table of "<<n<<": "<<endl;
    for (int i=1;i<=10;i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
}
int main(){
    int n,s=0;
    cout<<"Enter a number: ";
    cin>>n;
    mul(n);
}