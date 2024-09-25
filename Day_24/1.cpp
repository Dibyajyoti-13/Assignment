#include<iostream>
using namespace std;
int main(){
    int n,arr[100],count=0,max=0;
    cout<<"Enter length: ";
    cin>>n;
    cout<<"Enter values: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1) count++;
        if(max<count) max=count;
        if(arr[i]==0) count=0;
    }
    cout<<max;
}