#include<iostream>
using namespace std;
void insertion_sort(int a[],int n){
    for (int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    cout<<"Sorted array: ";
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[100],n;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion_sort(arr,n);
}