#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	bool cgl[10], ogl[10]; int i,k = 0, l = 0, ogc = 0, cgc = 0; char b;
	for (i = 0; i < 20; i++) {
		scanf("%c", &b);								//ogl- opponent goals 
		b -= '0';										//cgl- chef goals
		if (i % 2)	{									//cgc=5 goals
			ogl[k] = b;									//ogc=5 goals
			if (ogl[k] && i < 10) ogc++;
			k++;
		}
		else	{
			cgl[l] = b;
			if (cgl[l] && i < 10) cgc++;
			l++;
			if(i<10)
			if((cgc-ogc)>(5-(i/2+1))){if((cgc-ogc)>0) flag='c'; else flag='o'; break;}
		}
	}
	if(flag=='c'){printf("TEAM-A %d",i);

	}
	if(cgc==ogc){
		//sudden death
	}
}