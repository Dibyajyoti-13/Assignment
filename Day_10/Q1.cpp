#include<iostream>
using namespace std;
int  findMax(const int arr[], int size){
    int max=arr[0];
    for(int i=1;i<size;i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n,arr[100];
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter values for array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Max Element: "<<findMax(arr,n);
}