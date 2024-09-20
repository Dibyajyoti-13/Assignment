#include<iostream>
using namespace std;
class Student{
    public:
    int rollno;
    string name;
    Student(int n,string s):rollno(n),name(s){}
    void display(){
        cout<<"Student Details: \n";
        cout<<"Name: "<<this->name<<endl;
        cout<<"Roll No.: "<<this->rollno<<endl;
    }
};

int main(){
    int r;
    string n;
    cout<<"Enter Details: "<<"\nName: ";
    getline(cin,n);
    cout<<"Roll No.: ";
    cin>>r;
    Student s1(r,n);
    s1.display();
}