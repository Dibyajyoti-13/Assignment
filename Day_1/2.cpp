#include<iostream>
using namespace std;
int main(){
    int sum=0,a;
    for (int i=1;i<=5;i++){
        cout<<"Enter grade "<<i<<": ";
        cin>>a;
        sum+=a;
    }
    cout<<"The average grade is: "<<sum/5;
}