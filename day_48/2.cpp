#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main() {
    map<string, vector<int>> studentScores;
    string line;
    
    while (true) {
        cout << "Enter student name (or type 'done' to finish): ";
        getline(cin, line);
        if (line == "done") break;
        
        string name = line;
        vector<int> scores;
        
        cout << "Enter scores for " << name << " (space-separated): ";
        getline(cin, line);
        
        stringstream ss(line);
        int score;
        while (ss >> score) {
            scores.push_back(score);
        }
        
        studentScores[name] = scores;
    }

    cout << "\nStudent Scores:\n";
    for (const auto& entry : studentScores) {
        cout << entry.first << ": ";
        int sum = 0 , size = 0;
        for (int sc : entry.second) {
            sum += sc;
            size++;
        }
        cout << sum/size << " ";
        cout << endl;
    }

    return 0;
}
