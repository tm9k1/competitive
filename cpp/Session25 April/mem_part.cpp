#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
#include <string>
#define print(x) cout<<#x<<" = "<<x<<'\n';
using namespace std;
//INITIALIZED DATA SEGMENTS
    const int ci=32;         // INITIALIZED READ-ONLY AREA 
    int ii=11;               // INITIALIZED READ-WRITE AREA 

//UN-INITIALIZED DATA SEGMENTS (BSS Segments)
//  const int c1;            //WRONG !!!   // UN-INITIALIZED READ-ONLY AREA -> compiler error (uninititalized const) 
    int ui;                  // UN-INITIALIZED READ-WRITE AREA

int main() {
	int x;
    static int si;           // UN-INITIALIZED READ-WRITE AREA
	cout<<"GLOBAL VARIABLES STORED IN DATA SEGMENT !!! \nconst int ci = 32; \nint ii = 11; \nint ui;        // UN-INITIALIZED\n";
    cout<<"VARIABLES IN int main()\n static int s1;\n\n";
    
    
    cout<<"Displaying all values now\n";
	print(ci)	             // kernel initializes GLOBAL VARIABLES to ZERO implicitly
    print(ii)
    print(ui)
    print(ii)
    print(si)
    
}
