#include <iostream>
using namespace std;
template<typename t>
class X{public:
	t a;
	void operator=(int b){
		a=b;
	}
	
};
void operator<<(ostream &cout){
		cout<<a;
	}
int main(){
	X<int> a;
	a=8;
	cout<<a;
}