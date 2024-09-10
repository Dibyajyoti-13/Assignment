#include<iostream>
int stringLength(const std::string &str){
    int count=0;
    for (char c:str){
        count++;
    }
    return count;
}

int main(){
    std::string s;
    std::cout << "Enter: "<< std::endl;
    getline(std::cin,s);
    std::cout << stringLength(s);
}