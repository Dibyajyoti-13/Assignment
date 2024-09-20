#include <iostream>
using namespace std;
class Rectangle{
public:
    int length, breadth;
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    Rectangle(Rectangle &x)
    {
        length = x.length;
        breadth = x.breadth;
    }
    void display() const
    {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
    }
};

int main(){
    Rectangle rect1(10, 5);
    Rectangle rect2 = rect1;
    
    cout << "Rectangle 1:" << endl;
    rect1.display();

    cout << "Rectangle 2:" << endl;
    rect2.display();
}