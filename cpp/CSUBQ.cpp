#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int size,q,lb,ub;
	cin>>size>>q>>lb>>ub;
	vector<int> v(size,0);
	while(q--){
		int mode;
		cin>>mode;
		switch(mode){
			case 1: int x,y;
					cin>>x>>y;
					x--;
					iter_swap(v.begin()+x,&y);
					cout<<(*(v.begin()+x));
		}

	}
}