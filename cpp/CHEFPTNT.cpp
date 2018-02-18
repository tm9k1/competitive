#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
#include <string>
using namespace std;
bool solve(int patents,int months, int maxwrkrs, int totwrkrs, string s){
		if(patents>totwrkrs) return false;
		if(patents>months*maxwrkrs) return false;
		int ewrk=0,owrk=0;
		for(int i=0;i<s.length();i++) if(s[i]=='E') ewrk++; else owrk++;
		// cout<<ewrk<<' '<<owrk;
		int ewrkmonths=ewrk/maxwrkrs, owrkmonths=owrk/maxwrkrs; // work in FULL SWING months
		int omnths=ceil(months/2.0),emnths=months/2;			// Even and Odd months
		if(ewrkmonths>emnths) ewrkmonths=emnths;				// Limit the months to deadline
		if(owrkmonths>omnths) owrkmonths=omnths;
		patents-=ewrkmonths*maxwrkrs;							// Finish work of FULL SWING months
		patents-=owrkmonths*maxwrkrs; 
		if(patents<=0) return true;								// return if Work is Done
		omnths-=owrkmonths;emnths-=ewrkmonths;ewrk%=maxwrkrs;owrk%=maxwrkrs;	
		if(emnths) patents-=ewrk;
		if(omnths) patents-=owrk;
		if(patents<=0) return true;
		return false;
		}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int patents,months,maxwrkrs,totwrkrs;
		cin>>patents>>months>>maxwrkrs>>totwrkrs;
		string s;
		cin>>s;
		if(solve(patents,months,maxwrkrs,totwrkrs,s)) cout<<"yes";
		else cout<<"no";
		cout << "\n";

	}
}
