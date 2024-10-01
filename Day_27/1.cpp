#include<stack>
#include<iostream>
using namespace std;
int precedence(char c){
    if(c=='^') return 3;
    else if(c=='*' || c=='/') return 2;
    else if(c=='+' || c=='-') return 1;
    else return -1;
}

string converter(string s){
    string exp="";
    stack <char> x;
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i])){
            exp+=s[i];
        } 
        else if(s[i]=='('){
            x.push(s[i]);
        }
        else if(s[i]==')'){
            while(!x.empty() && x.top()!='('){
                exp+=x.top();
                x.pop();
            }
            x.pop();
        }
        else{
            while(!x.empty() && precedence(s[i])<=precedence(x.top())){
                if(s[i]=='^' && x.top()=='^') break;
                exp+=x.top();
                x.pop();
            }
            x.push(s[i]);
        }
    }
    while(!x.empty()){
        exp+=x.top();
        x.pop();
    }
    return exp;
}

int main(){
    string infix,postfix;
    cout<<"Enter infix expression: ";
    getline(cin,infix);
    postfix=converter(infix);
    cout<<"Postfix Expression: "<<postfix;
    return 0;
}