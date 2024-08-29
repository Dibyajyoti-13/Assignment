#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the score: ";
    cin >> a;
    if (a >= 90 && a<=100) {
        cout << "Grade: A";
    } else if (a >= 80) {
        cout << "Grade: B";
    } else if (a >= 70) {
        cout << "Grade: C";
    } else if (a >= 60) {
        cout << "Grade: D";
    } else {
        cout << "Grade: F";
    }
}
