#include <iostream>
#include <vector>
#include <boost/regex.hpp>
using namespace std;
#define dbg(x) cout<< #x << " = " << x << '\n'


// #define Error(x) cout << #x << " = " << x << endl
float solve(float a,char op,float b){
	switch(op){
		case '+':return a+b;
		case '-':return a-b;
		case 'x':
		case 'X':return a*b;
		case '/':return a/b;
		// case '%':return a%b;
	}
}
float expr(){
	float a,b;char op;
	scanf("%g%c%g",&a,&op,&b);
	printf("%g  %c  %g\n",a,op,b);

	if(a<=1.4013e-04) return 0;

	if(b<=1.4013e-04)
		return solve(a,op,expr());

	return solve(a,op,b);
}













int main(){
string expression;
int i=0;
float a;
char op,b;
getline(cin,expression);
stringstream e(expression);
e>> a >> op >> b;
cout<<a<<" "<<op<<' '<<b; 
//expr()
}
