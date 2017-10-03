#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char* p=new char;
	int pos=127,i,j,f=0;
	char fname[128],cfname[133],copy[5];
	strcpy(copy,"-Copy");
	gets(fname);
	for(i=strlen(fname)+5,j=strlen(fname);i>=0,j>=0;i--,j--) {
		cfname[i]=fname[j];
		if(fname[j]=='.' && f==0){
			for(int k=0;k<5;k++)						
			cfname[i+k-5]=copy[k];
			f=1;i-=5;
		}
	}	
	ifstream target(fname,ios::binary);
	ofstream sink(cfname,ios::binary);
	while(!target.eof()){
	target.read(p,1);
	sink.write(p,1);}
	target.close();
	sink.close();

}
			