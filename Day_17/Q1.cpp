#include<iostream>
using namespace std;
int main(){
    int row,column,arr[100][100],key,c=0;
    cout<<"Enter row and column:";
    cin>>row>>column;
    cout<<"Enter 2-D Array: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter Key: ";
    cin>>key;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if (arr[i][j]==key){
                c=1;
                break;
            }
        }
    }
    if(c) cout<<"Yes";
    else cout<<"No";
}