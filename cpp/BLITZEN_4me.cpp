#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main() {
	string a;
	getline(cin, a);
	long long b = 0, s = 0, c = 0, nb, ns, nc, pb, ps, pc, ham = 0;
	long long bd=0;
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == 'B') b++;
		else if (a[i] == 'S') s++;
		else c++;
	}
	cin >> nb >> ns >> nc >> pb ;
	cin >> ps >> pc >> bd;
	int x=min(nb/b,min(ns/s,nc/c));
	ham+=x;
	nb-=x*b;
	ns-=x*s;
	nc-=x*c;
	float scost=b*pb+s*ps+c*pc;
	while (1){
		if(nb==0 && ns ==0 && nc ==0){ ham+=bd/scost;bd/=scost;break;}
		if(nb<b){
			bd-=pb*(b-nb);
		}
		if(ns<s){
			bd-=ps*(s-ns);
		}
		if(nc<c){
			bd-=pc*(c-nc);
		}
		nb-=b; ns-=s; nc-=c; 
		if(bd >= 0)ham++;
		else break;
	}
	cout << ham;
}