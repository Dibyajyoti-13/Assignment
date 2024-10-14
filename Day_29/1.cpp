#include<iostream>
using namespace std;
class instrument{
    public:
    virtual void playSound()=0;
    virtual void display(){
    }
    virtual ~instrument(){}
};

class Piano:public instrument{
    public:
    void playSound() override{
        cout<<"Playing a melodious piano tune."<<endl;
    }
    void display() override{
        cout<<"This is a Piano."<<endl;
    }
};

class Violin:public instrument{
    public:
    void playSound() override{
        cout<<"Playing a classical violin tune."<<endl;
    }
    void display() override{
        cout<<"This is a Violin."<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    instrument** obj=new instrument*[n];
    for (int i = 0; i < n; ++i) {
        int choice;
        cout << "Enter 1 for Piano, 2 for Violin: ";
        cin >> choice;

        if (choice == 1) {
            obj[i] = new Piano();
        } else if (choice == 2) {
            obj[i] = new Violin();
        } 
        else {
            cout<<"Sorry wrong choice! Try Again!!"<<endl;
            --i;
        }
    }

    for (int i = 0; i < n; ++i) {
        obj[i]->display();
        obj[i]->playSound();
    }
    for (int i = 0; i < n; ++i) {
        delete obj[i];
    }
    delete[] obj;
}