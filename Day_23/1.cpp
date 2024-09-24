#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n,target;
    cout<<"Enter element length: ";
    cin>>n;
    cout<<"Enter target: ";
    cin>>target;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"Yes";
                return 0;
            }
        }
    }
    cout<<"No";
    return 0;
}