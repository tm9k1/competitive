#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;
struct emp{char name[50];char id[10];int sal;};
int main(){
	int n;
	emp* emps;
	cout<<"NUMBER OF EMPLOYEES : ";
	cin>>n;
	emps=new emp[n];
	for(int i=0;i<n;i++){
		char filename[55];fflush(stdin);
		cout<<"EMPLOYEE NAME : ";gets(filename);
		strcpy(emps[i].name,filename);
		cout<<"I D : ";cin>>emps[i].id;
		emps[i].sal=80000;
		strcpy(filename,emps[i].name);
		strcat(filename,".txt");		
		ofstream x(filename,ios::app);
		x<<"EMPLOYEE NAME : "<<emps[i].name;
		x<<"\nI D : "<<emps[i].id;
		x<<"\nSALARY : "<<emps[i].sal;
		x.close();
	}
}
			