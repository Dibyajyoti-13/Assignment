#include<iostream>
using namespace std;
int main(){
    int n,num[40],arr[40];
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    arr[0]=-1;
    for(int i=1;i<n;i++){
        int next=-1;
        for(int j=0;j<i;j++){
            if(num[i]<num[j]){
                next=num[j];
            }
        }
        arr[i]=next;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}