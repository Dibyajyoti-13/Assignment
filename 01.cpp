#include <iostream>
#include <vector>
#include <valarray>
using namespace std;

int naive(const vector<int> a){
    int sum = 0;
    for(auto i : a){
        sum += i;
    }
    return sum;
}

int recur(const vector<int> a, int n){
    if(n == 0) return 0;
    return a[n - 1] + recur(a, n-1);
}

int built_in(const vector<int> a){
    valarray<int> v_arr(a.data(), a.size());
    return v_arr.sum();
}

int main(){
    vector<int> arr;
    int n;
    cout << "Enter array size: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        int value;
        cin >> value;
        arr.push_back(value);
    }

    cout << "Using Naive Approach: Sum = " << naive(arr) << endl;
    cout << "Using Recursive Approach: Sum = " << recur(arr, n) << endl;
    cout << "Using Built-in Function: Sum = " << built_in(arr) << endl;
    cout << "For all the three approaches to find the sum of a given list the time complexity is Big O(n). "
            "Best, Average and Worst Case are the same as all the elements of the array needs to be accessed using a "
            "single loop. Further using recursion call can cause excessive overhead calls leading to increased "
            "time complexity for larger datasets." << endl;
}