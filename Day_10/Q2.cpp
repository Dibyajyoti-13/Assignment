#include<iostream>
#include<string>
#include<ctype.h>
#include<algorithm>
bool isPalindrome(const std::string &str){
    std::string s1;
    for(char c:str){
        if(std::isalnum(c)){
            s1+=tolower(c);
        }
    }
    std::string r_s1=s1;
    std::reverse(r_s1.begin(),r_s1.end());
    return r_s1==s1;
}

int main(){
    std::string s;
    std::cout<<"Enter string: ";
    getline(std::cin,s);
    std::cout<<(isPalindrome(s)?"True":"False");
}