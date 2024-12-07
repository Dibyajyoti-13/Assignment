#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    set<int> set1;
    cout << "Enter elements: ";
    for (int i = 0; i < n1; ++i) {
        int num;
        cin >> num;
        set1.insert(num);
    }

    cout << "Enter size of the second array: ";
    cin >> n2;
    set<int> set2;
    cout << "Enter elements: ";
    for (int i = 0; i < n2; ++i) {
        int num;
        cin >> num;
        set2.insert(num);
    }

    set<int> unionSet, intersectionSet;
    unionSet.insert(set1.begin(), set1.end());
    unionSet.insert(set2.begin(), set2.end());

    for (auto& el : set1) {
        if (set2.find(el) != set2.end()) {
            intersectionSet.insert(el);
        }
    }

    cout << "Union = {";
    for (auto& el : unionSet) {
        cout << el << ", ";
    }
    cout << "}\n";

    cout << "Intersection = {";
    for (auto& el : intersectionSet) {
        cout << el << ", ";
    }
    cout << "}\n";
    return 0;
}
