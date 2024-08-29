#include<iostream>
using namespace std;
int main(){
    int arr[100],n,s=0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
        s+=arr[i];
    }
    cout<<"Sum of the array: "<<s;
}