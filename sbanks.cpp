#include <map>
#include <iostream>
using namespace std;

struct account{public:
	int cd,code, owner[4];
	void input(){
		cin>>cd>>code>>owner[0]>>owner[1]>>owner[2]>>owner[3];
	}
	void output() const {
		printf("%.2d %.8d %.4d %.4d %.4d %.4d %d",cd,code,owner[0],owner[1],owner[2],owner[3]);
	}
	bool operator==(account &b){
		return ((b.cd==(*this).cd) && (b.code==(*this).code) && (b.owner[0]==(*this).owner[0]) && (b.owner[1]==(*this).owner[1]) && (b.owner[2]==(*this).owner[2]) && (b.owner[3]==(*this).owner[3])); 
	}
};

class myCompare{
	public:
	bool operator()(const account& a1,const account& a2){
		if(a1.cd==a2.cd){
			if(a1.code==a2.code){
				if(a1.owner[0]==a2.owner[0]){
					if(a1.owner[1]==a2.owner[1]){
						if(a1.owner[2]==a2.owner[2]){
							return a1.owner[3] < a2.owner[3];
						}
						else return a1.owner[2] < a2.owner[2];
					}
					else return a1.owner[1] < a2.owner[1];
				}
				else return a1.owner[0] < a2.owner[0];
			}
			else return a1.code < a2.code;
		}
		else return a1.cd<a2.cd;
	}
};
int sol(){
	int n;
	cin >> n;
	map<account,int,myCompare> m;
	for(int i=0;i<n;i++){
		account temp;
		temp.input();
		if(m.find(temp) !=m.end()){
			//acc exsts
			++m[temp];
		}
		else {
			//pair<account,int> p(temp,1);
			//m.insert(p);
			m[temp]=1;
			//m.insert(make_pair(temp,1));
	}
	}
	for(map<account,int,myCompare>::iterator it=m.begin();it!=m.end();++it){
		(it->first).output();
		cout<<it->second<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		sol();
		cout<<endl;
	}
}