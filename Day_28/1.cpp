#include<iostream>
using namespace std;
class Vehicle{
    public:
    string make;
    int year;
    float fuel;
    Vehicle(string m,int y,float f):make(m),year(y),fuel(f){}
    void refuel(float amount){
        fuel+=amount;
        cout<<"Refueled by "<<amount<<endl;
    }
    virtual void display(){
        cout<<"Vehicle details: \n";
        cout<<"Manufacturer: "<<make<<endl;
        cout<<"Year of Manufacture: "<<year<<endl;
        cout<<"Fuel Left: "<<fuel<<" litres"<<endl;
    }
};

class Car:public Vehicle{
    public:
    int doors;
    Car(string s,int y, float f, int d):Vehicle(s,y,f),doors(d){}
    void display() override{
        Vehicle::display();
        cout<<"Number of doors: "<<doors<<endl;
    }
    void openDoors(){
        cout<<"Doors are opened."<<endl;
    }
};

class Bike:public Vehicle{
    public:
    bool hasCarrier;
    Bike(string m, int y, float f, bool c) : Vehicle(m, y, f), hasCarrier(c) {}
    void display() override{
        Vehicle::display();
        cout<<"Carrier: "<<hasCarrier<<endl;
    }
    void kickStart(){
        cout<<"Bike kick-started."<<endl;
    }
};

int main(){
    Car myCar("BWM", 1990, 60.0, 2);
    myCar.display();
    myCar.refuel(10.0);
    myCar.openDoors();
    cout<<endl;
    Bike myBike("Bullet", 2004, 40.0, true);
    myBike.display();
    myBike.refuel(25.0);
    myBike.kickStart();
    return 0;
}