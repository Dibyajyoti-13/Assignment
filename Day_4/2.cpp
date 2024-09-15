#include <iostream>
using namespace std;

class Complex {
    public:
    int real, imag;
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex operator+(const Complex &x) const {
        return Complex(real + x.real, imag + x.imag);
    }

    Complex operator-(const Complex &x) const {
        return Complex(real - x.real, imag - x.imag);
    }

    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);  
    Complex c2(1, 2);  
    Complex sum = c1 + c2;
    Complex difference = c1 - c2;

    cout << "Complex Number 1: ";
    c1.display();
    
    cout << "Complex Number 2: ";
    c2.display();

    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    difference.display();

    return 0;
}
