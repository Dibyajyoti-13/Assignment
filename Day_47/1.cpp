#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findFirstOccurrence(vector<int>& vec, int target) {
    auto it = find(vec.begin(), vec.end(), target);
    if (it != vec.end()) {
        return distance(vec.begin(), it);
    }
    return -1;
}

int main() {
    int n, target;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    cout << "Enter the target value: ";
    cin >> target;
    cout << "Index of " << target << " is: " << findFirstOccurrence(vec, target) << endl;
    return 0;
}
