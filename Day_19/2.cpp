#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream file;
    file.open("file.txt");
    if(!file){
        cerr<<"Unable to open file";
        return 1;
    }
    string line;
    while(getline(file,line)){
        cout<<line<<endl;
    }
    file.close();
}