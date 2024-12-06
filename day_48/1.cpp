#include <iostream>
#include <map>
#include <string>
using namespace std;

map<char, int> getCharacterFrequency(const string& str) {
    map<char, int> freqMap;
    for (char c : str) {
        freqMap[c]++;
    }
    return freqMap;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    map<char, int> result = getCharacterFrequency(input);
    
    for (const auto& pair : result) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
