#include <iostream>
#include <string>
#include <tuple>
using namespace std;
class Person {
public:
    string firstName;
    string lastName;
    int age;
    Person(const string& fName, const string& lName, int age)
        : firstName(fName), lastName(lName), age(age) {}
    string getFullName() const {
        return firstName + " " + lastName;
    }
    tuple<string, string, int> getDetails() const {
        return make_tuple(firstName, lastName, age);
    }
};

int main() {
    Person person("William", "Davidson", 30);
    cout << "Full Name: " << person.getFullName() << endl;

    auto [name,last, a] = person.getDetails();
    cout << "First Name: " << name << endl;
    cout << "Last Name: " << last << endl;
    cout << "Age: " << a << endl;

    return 0;
}
