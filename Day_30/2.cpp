#include<iostream>
using namespace std;
int main(){
    int n1,n2,num1[40],num2[40],arr[40];
    cout<<"Enter size of both arrays: ";
    cin>>n1>>n2;
    cout<<"Enter 1st array: ";
    for(int i=0;i<n1;i++){
        cin>>num1[i];
    }
    cout<<"Enter 2nd array: ";
    for(int i=0;i<n2;i++){
        cin>>num2[i];
    }

    for(int i=0;i<n1;i++){
        int j=0;
        for(;j<n2;j++){
            if(num1[i]==num2[j]){
                break;
            }
        }
        int next=-1;
        j++;
        for(;j<n2;j++){
            if(num1[i]<num2[j]){
                next=num2[j];
                break;
            }
        }
        arr[i]=next;
    }

    for(int i=0;i<n1;i++){
        cout<<arr[i]<<" ";
    }
}