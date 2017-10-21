#include <fstream>
#include <iostream>
using namespace std;
int main(){
	ifstream x("test.txt",ios::app);
	char c[10];
	while(!x.eof()){
		x>>c;
		cout<<c<<' ';
		if(c[0]=='!') cout<<endl;}
	x.close();
}