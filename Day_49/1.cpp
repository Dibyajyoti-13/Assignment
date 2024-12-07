#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main() {
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    unordered_map<int, int> freq;
    for (int num : vec) {
        freq[num]++;
    }

    vector<pair<int, int>> freqVec(freq.begin(), freq.end());
    sort(freqVec.begin(), freqVec.end(), compare);

    cout << "Sorted vector: ";
    for (auto& p : freqVec) {
        for (int i = 0; i < p.second; ++i) {
            cout << p.first << " ";
        }
    }
    cout << endl;

    return 0;
}
