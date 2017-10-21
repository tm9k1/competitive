#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <cctype>
using namespace std;
bool palcheck(char target[]){
	int a,b,flag;
	flag=0;
	a=0;
	b=strlen(target)-1;
	while(a>=b){
		if(isalpha(target[a]) && isalpha(target[b]))
				if(target[a]!=target[b]){
					flag=1;
					break;
					++a;--b;}
		if (isalpha(target[b])==0)
			--b;
		if (isalpha(target[a])==0)
			++a;
	}
	if(flag==1)
		return false;
	else 
		return true;
}
int main(){
	char* target;
	target=new char[100];
	gets(target);
	if(palcheck(target))
		cout<<"\nPalindrome !!!!";
	else
		cout<<"\nNot a Palindrome !!!!!";
}