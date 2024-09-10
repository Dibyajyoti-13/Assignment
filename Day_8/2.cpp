#include<iostream>

int countCharacter(const std::string &str, char ch){
    int count=0;
    for(char c:str){
        if (c==ch){
            count++;
        }
    }
    return count;
}

int main(){
    std::string s;
    char ch;
    std::cout<<"Enter string: ";
    getline(std::cin,s);
    std::cout<<"Enter character: ";
    std::cin>>ch;
    std::cout<<countCharacter(s,ch)<<std::endl;
}