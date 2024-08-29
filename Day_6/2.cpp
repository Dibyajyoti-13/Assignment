#include<iostream>
using namespace std;
int main(){
    int arr[100],n,s_odd=0,s_even=0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
        if (arr[i]%2==0){
            s_even+=arr[i];
        }
        else s_odd+=arr[i];
    }
    cout<<"Sum of odd numbers: "<<s_odd<<endl;
    cout<<"Sum of even numbers: "<<s_even<<endl;
}