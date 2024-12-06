#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main(){
    set<int> a1, a2, a3;
    int a, b, ele;
    cout << "Enter size of set(set1, set2): ";
    cin >> a >> b;
    cout << "Enter set1: ";
    for(int i = 0; i < a; i++){
        cin >> ele;
        a1.insert(ele);
    }
    cout << "Enter set2: ";
    for(int i = 0; i < b; i++){
        cin >> ele;
        a2.insert(ele);
    }
    merge(a1.begin(), a1.end(), a2.begin(), a2.end(), inserter(a3, a3.begin()));
    for(int a : a3){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}