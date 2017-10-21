#include <iostream>
#include <map>
#include <cstring>
#include <cstdio>
using namespace std;
int main(){
	map<string,string> phbook;
	pair<string,string> p;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		getline(cin,p.first,' ');
		getline(cin,p.second);
		phbook.insert(p);
	}
	// string name;
	// getline(cin,name);
	// cout<<endl;
	// map<string,string>::iterator it=phbook.find(name);
	// if(it!=phbook.end())
	// cout<<it->second; 
	// else
	// 	cout<<"Mazaak Kar Raha Hai ? XD\n";
	map<string,string>::iterator it=phbook.begin();
	while(it!=phbook.end())
		{cout<<it->first<<" : "<<it->second<<endl;
		it++;}
}
