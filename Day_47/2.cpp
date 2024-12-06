#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateVector(vector<int>& vec, int k) {
    int n = vec.size();
    k = k % n;
    rotate(vec.rbegin(), vec.rbegin() + k, vec.rend());
}

int main() {
    int n, k;
    cout << "Enter vector size: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    cout << "Enter the number of positions to rotate: ";
    cin >> k;

    rotateVector(vec, k);
    cout << "Rotated vector: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
