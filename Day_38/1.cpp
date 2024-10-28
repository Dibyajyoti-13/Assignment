#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Shape{
    public:
    virtual double area()=0;
    virtual double perimeter()=0;
    virtual ~Shape(){}
};

class Circle:public Shape{
    private:
    double radius;
    public:
    Circle(double r):radius(r){}
    double area(){
        return radius*M_PI*radius;
    }
    double perimeter(){
        return radius*M_PI*2;
    }
};

class Rectangle:public Shape{
    private:
    double length,breadth;
    public:
    Rectangle(double a,double b):length(a),breadth(b){}
    double area(){
        return length*breadth;
    }
    double perimeter(){
        return (length+breadth)*2;
    }
};

int main(){
    double a,b,r;
    cout<<"Enter radius: ";
    cin>>r;
    Circle c1(r);
    cout<<fixed<<setprecision(2);
    cout<<"Area of Circle: "<<c1.area()<<endl;
    cout<<"Circumference of circle: "<<c1.perimeter()<<endl;
    cout<<"\nEnter length and breadth: ";
    cin>>a>>b;
    Rectangle r1(a,b);
    cout<<"Area of Rectangle: "<<r1.area()<<endl;
    cout<<"Perimeter of Rectangle: "<<r1.perimeter()<<endl;
    return 0;
}