#include <iostream>
#include <vector>
#include <string>
using namespace std;

void generateParenthesesHelper(int open, int close, string current, vector<string>& result, int n) {
    if (current.length() == 2 * n) {
        result.push_back(current);
        return;
    }

    if (open < n) {
        generateParenthesesHelper(open + 1, close, current + "(", result, n);
    }

    if (close < open) {
        generateParenthesesHelper(open, close + 1, current + ")", result, n);
    }
}

vector<string> generateParentheses(int n) {
    vector<string> result;
    generateParenthesesHelper(0, 0, "", result, n);
    return result;
}

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<string> combinations = generateParentheses(n);
    cout << "Valid combinations of " << n << " pairs of parentheses:\n";
    for (const string& combination : combinations) {
        cout << combination <<"\t";
    }
    return 0;
}
