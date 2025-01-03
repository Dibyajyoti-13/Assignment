#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int N, Y;
    cin >> N;
    vector<int> numbers(N);
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }
    cin >> Y;

    int evenCount = 0, oddCount = 0;
    for (int num : numbers) {
        if (num % 2 == 0) {
            ++evenCount;
        } else {
            ++oddCount;
        }
    }

    int cumulativeProduct = 1;
    for (int num : numbers) {
        cumulativeProduct *= num;
    }

    auto it = find(numbers.begin(), numbers.end(), Y);
    string found = (it != numbers.end()) ? "Found" : "Not Found";
    sort(numbers.rbegin(), numbers.rend());

    cout << "Even numbers count: " << evenCount << endl;
    cout << "Odd numbers count: " << oddCount << endl;
    cout << "Cumulative Product: " << cumulativeProduct << endl;
    cout << "Number " << found << endl;
    cout << "Sorted list: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
