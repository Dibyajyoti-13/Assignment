#include<iostream>
using namespace std;
void find(int a[],int target,int size){
    for(int i=0;i<size;i++){
        if (a[i]==target){
            cout<<i+1;
            return;
        }
    }
    cout<<-1;
    return;
}
int main(){
    int n,arr[100],target;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter Target: ";
    cin>>target;
    find(arr,target,n);
}