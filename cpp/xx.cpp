#include<iostream>
#include<cstdio>
#include<cmath>
#include <string>
using namespace std;

int main()
{
    string str;
    int flag = 1, f=0;
    while (getline(cin, str))
    {         
      for (int i = 0; i < str.length(); i++) 
      {
      if(flag && str[i]=='\"'){
          cout<<"``";
          flag=0;
      }else if(flag==0 && str[i]=='\"'){
        cout<<"\'\'";
        flag=1;
      }
      else
        cout<<str[i];
    }
    cout<<"\n";
  }

}