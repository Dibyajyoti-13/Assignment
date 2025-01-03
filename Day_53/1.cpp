#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    set<int> id;
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter IDs: ";
    for(int i = 0; i < n; i++){
        int a; 
        cin >> a;
        id.insert(a);
    }
    cout << "List of unique Ids: ";
    for(auto i : id){
        cout << i <<" ";
    }
    cout << endl;
    int search;
    cout << "Enter id to search: ";
    cin >> search;
    auto it = find(id.begin(), id.end(), search);
    if(it != id.end()) cout << "Available" << endl;
    else cout << "Not Available" << endl;
    cout << "Total elements: " << id.size() << endl;
    return 0;
}