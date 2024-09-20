#include<iostream>
using namespace std;
class Car{
    public:
    string brand_name;
    string model;
    string engine;
    int seat_no;
    Car(string b,string m,string e,int n):brand_name(b),model(m),engine(e),seat_no(n){}
    void displayInfo(){
        cout<<"Brand Name: "<<brand_name<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Engine: "<<engine<<endl;
        cout<<"Number of seats: "<<seat_no<<endl;
    }
};

int main(){
    string brand, model, engine;
    int seats;
    cout << "Enter brand name: ";
    getline(cin, brand);
    cout << "Enter model: ";
    getline(cin, model);
    cout << "Enter engine: ";
    getline(cin, engine);
    cout << "Enter number of seats in the car: ";
    cin >> seats;
    Car hondaCar(brand, model, engine, seats);
    cout << "\nCar Information:\n";
    hondaCar.displayInfo();
}