#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    fstream file("file.txt", ios::in | ios::out | ios::app);
    if(!file){
        cerr<<"Unable to open file";
        return 1;
    }
    file<<"Name: Dibyajyoti Sarkar"<<endl;
    file<<"Video Games i play: BGMI\tFreeFire\tTeken 8...."<<endl;
    file<<"Currently Pursuing Btech (2nd year)"<<endl;
    file<<"This file stuff looks awesome"<<endl;
    file<<"Bonus Some anime suggestion: Bleach\nThat time i got reincarnated as a slime\nDemon slayer\nFirst Anime: Idaten Jump"<<endl;
    string line;
    file.seekg(0);
    while(getline(file,line)){
        cout<<line<<endl;
    }
    file.close();
}