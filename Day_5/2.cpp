#include <iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int n = str.length();
    for (int i = 0; i < n/2+1; i++)
    {
        char t=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=t;
    }
    cout << "Reversed string: " << str << endl;
}
