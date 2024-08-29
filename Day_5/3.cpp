#include<iostream>
using namespace std;
int main(){
    string s;
    int v=0,c=0;
    cout<<"Enter a string: ";
    getline(cin,s);
    for (char i:s){
        if (i=='a'||i=='e'||i=='i'||i=='o'||i=='u'){
            v+=1;
        }
        else if (i==' ') continue;
        else c+=1;
    }
    cout<<"Number of vowels: "<<v<<endl;
    cout<<"Number of consonants: "<<c<<endl;
}