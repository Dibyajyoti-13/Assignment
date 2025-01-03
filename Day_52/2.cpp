#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    vector<int>scores;
    cout << "Enter scores: ";
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        scores.push_back(a);
    }
    int search, occ = 0;
    cout << "Enter value to search occurrence of: ";
    cin >> search;
    auto it = find(scores.begin(), scores.end(), search);
    while(it != scores.end()){
        it = find(it + 1, scores.end(), search);
        occ++;
    }
    cout << "Occurrence: " << occ << endl;
    sort(scores.begin(), scores.end(), greater<int>());
    int sum = accumulate(scores.begin(), scores.end(), 0);
    cout << "Average: " << sum/n << endl;
    cout << "Highest score: " << scores[0] << endl;
    cout << "Lowest score: " << scores[n-1] << endl;
    return 0;
}