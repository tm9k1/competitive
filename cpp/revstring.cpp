#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;
void shw(string &s,int loc){
		string temp,b;
	if(loc<s.size())
		{do{ 
			// b=s[loc];
			temp+= s[loc];
			++loc;
		  }while(loc < s.size() && (s[loc]!=' ' ||s[loc]!='\n'));
		 
		 shw(s,loc);
		 cout<<temp<<' ';}
	} 
int main(){
	string a;
	getline(cin,a);
	int x=0;
	shw(a,x);
return 0;
}