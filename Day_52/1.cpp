#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int N;
    cout << "Enter n: ";
    cin >> N;
    vector<int> prices(N);
    cout << "Enter prices: ";
    for(int i = 0; i < N; ++i) {
        cin >> prices[i];
    }

    int P;
    cout << "Enter price to search: ";
    cin >> P;

    if (find(prices.begin(), prices.end(), P) != prices.end()) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    sort(prices.begin(), prices.end());
    for (int i = 0; i < N; ++i) {
        cout << prices[i] << " ";
    }
    cout << endl;

    int totalCost = accumulate(prices.begin(), prices.end(), 0);
    cout << totalCost << endl;

    int maxPrice = prices[N-1];
    int minPrice = prices[0];
    cout << maxPrice << endl;
    cout << minPrice << endl;

    return 0;
}
