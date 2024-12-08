#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the map: ";
    cin >> n;
    map<string, int> myMap;
    cout << "Enter the name and value pairs:\n";
    for (int i = 0; i < n; ++i) {
        string name;
        int value;
        cin >> name >> value;
        myMap[name] = value;
    }

    vector<pair<string, int>> sortedVec(myMap.begin(), myMap.end());
    sort(sortedVec.begin(), sortedVec.end(), [](pair<string, int>& a, pair<string, int>& b) {
        return a.second > b.second;
    });

    cout << "Sorted map in descending order of values:\n";
    for (auto& p : sortedVec) {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;

    return 0;
}
