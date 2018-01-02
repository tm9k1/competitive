#include<iostream>
#include<cstdio>
#include<cmath>
#include <string>
using namespace std;

int main()
{
    string str;
    int flag = 1, t = 0;
    while (getline(cin, str))
    {  
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '\"' && flag)
            {
                cout << "``";
                flag = 0;
            }
            else if (str[i] == '\"' && flag == 0)
            {
                cout << "\'\'";
                flag = 1;
            }
            else cout << str[i];
        }
        cout<<'\n';
    }
}