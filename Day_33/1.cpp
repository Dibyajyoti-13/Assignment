#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

string frequencySort(string s) {
    unordered_map<char, int> map;
    for (char c : s) {
        map[c]++;
    }
    vector<pair<int, char>> sortedChars;
    for (auto& entry : map) {
        sortedChars.push_back({entry.second, entry.first});
    }

    sort(sortedChars.rbegin(), sortedChars.rend());

    string result = "";
    for (auto& pair : sortedChars) {
        result += string(pair.first, pair.second);
    }

    return result;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    string result = frequencySort(s);
    cout << "Sorted string based on frequency: " << result << endl;
}
