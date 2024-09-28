#include<iostream>
using namespace std;
int main(){
    int n,arr[30],result;
    cout<<"Enter array size: ";
    cin>>n;
    if(n%2==0){
        cout<<"Sorry!! But this code won't work"<<endl;
        return 0;
    }
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    result=arr[0];
    for(int i=1;i<n;i++){
        result^=arr[i];
    }
    cout<<"Unique Element that appears once is "<<result<<endl;
}