#include<iostream>
using namespace std;
int main(){
    int arr[100],n,c_odd=0,c_even=0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
        if (arr[i]%2==0){
            c_even+=1;
        }
        else c_odd+=1;
    }
    cout<<"Number of odd numbers: "<<c_odd<<endl;
    cout<<"Number of even numbers: "<<c_even<<endl;
}