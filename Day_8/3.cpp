#include<iostream>

std::string concatenateStrings(const std::string &str1,const std::string &str2){
    return str1+" "+str2;
}

int main(){
    std::string s1,s2;
    std::cout<<"Enter: ";
    getline(std::cin,s1);
    std::cout<<"Enter: ";
    getline(std::cin,s1);
    std::cout<<concatenateStrings(s1,s2);
}