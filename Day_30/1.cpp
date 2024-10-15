#include<iostream>
using namespace std;

void sub_array_max_sum(int a[],int n){
    int max_sum=INT32_MIN;
    int first=0,last=0,sum=0,f=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(max_sum<=sum){
            max_sum=sum;
            first=f;
            last=i;
        }
        if(sum<0){
            sum=0;
            f=i+1;
        }
    }
    cout<<"The Sub-array [ ";
    for(int i=first;i<=last;i++){
        cout<<a[i]<<" ";
    }
    cout<<"] has the largest sum "<<max_sum<<endl;
}

int main(){
    int n, arr[100];
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sub_array_max_sum(arr,n);
}
