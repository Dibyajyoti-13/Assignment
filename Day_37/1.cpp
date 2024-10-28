#include<iostream>
using namespace std;

class Car{
    private:
    string brand,model;
    int year,speed;
    public:
    Car(string a,string b,int x):brand(a), model(b) ,year(x){
        cout<<"Car object created\n";
    }
    string getBrand(){
        return brand;
    }
    string getModel(){
        return model;
    }
    int getYear(){
        return year;
    }
    int getSpeed(){
        return speed;
    }
    void setSpeed(int x){
        speed=x;
    }
    void increase_speed(int x){
        speed+=x;
    }
    void decrease_speed(int x){
        speed-=x;
        if(speed<0) speed=0;
    }
};

int main(){
    Car mycar("Scorpio","Z4",1996);
    cout<<"It is the "<<mycar.getModel()<<" model of "<<mycar.getBrand()<<" launched in "<<mycar.getYear()<<endl;
    mycar.setSpeed(20);
    cout<<"Currently running on "<<mycar.getSpeed()<<"kmph"<<endl;
    mycar.increase_speed(60);
    cout<<"Increasing speed at highway to "<<mycar.getSpeed()<<"kmph"<<endl;
    mycar.decrease_speed(50);
    cout<<"Approaching crossroads! Speed decreased to "<<mycar.getSpeed()<<"kmph"<<endl;
    mycar.decrease_speed(60);
    cout<<"Destination reached! Current speed is "<<mycar.getSpeed()<<"kmph"<<endl;
}