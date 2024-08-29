#include<iostream>
using namespace std;
void bubble_sort(int a[],int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if (a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Sorted Array: ";
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
    bubble_sort(arr,n);
}