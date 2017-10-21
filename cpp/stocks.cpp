/* introduced FRIEND concept
   intoduced OPERATOR OVERLOADING concept
   introduced THIS pointer of class
   */



#include <algorithm>
#include <iostream>
#include <vector>
using namespace std; 
class student{
	int rollno,cmarks;
	public:
		student(){
			cin>>rollno>>cmarks;}
		student(int r,int m){
			rollno=r;cmarks=m;}
		student add(student &s){
			student x(this->rollno,cmarks+s.cmarks);
			return x;}	
		friend bool operator<(student &a,student &b);		
		void show(){
			cout<<"rollno : "<<rollno<<"\nmarks : "<<cmarks;}
		// void operator<<(ostream &c){
		// 		this->show();}
		friend ostream& operator<<(ostream &c,student &s);	
	};
ostream& operator<<(ostream &c,student &s) {
	c<<"rollno : "<<s.rollno<<"\nmarks : "<<s.cmarks<<endl;
return c;
}
bool operator<(student &a,student &b){
			return(a.cmarks<b.cmarks);
			}
int main(){
	//clrscr();
	// student leader(10,20);
	// student teammate(20,30);	
	// student team=leader.add(teammate);
	// team.show();
	//if(leader>teammate)
	//	leader.show();
	// else
	// 	teammate.show();
	// //leader<<cout;
	// cout<<endl<<endl;
	// cout<<leader<<teammate;
	vector<student> ss;
	int i=0;
	student* s;
	for(i=0;i<10;i++){
		s=new student;
		ss.push_back(*s);
	}

	sort(ss.begin(),ss.end());
	for(i=0;i<10;i++)
		cout<<ss[i];
}
