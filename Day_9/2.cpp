#include<iostream>
using namespace std;
int main(){
    int arr[]={12,2,1,2,312,32,1,3};
    int *p=arr;
    for(int i=0;i<=7;i++){
        cout<<*(p+i)<<" ";
    }
}