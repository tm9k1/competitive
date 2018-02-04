#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
#include <string>
using namespace std;
long long check(string s){
	long long count=0;
	long long chars[26]={}; // init a chars array by 0s
	for(long long i=0;i<s.length();i++){
	if(i>3) chars[s[i-4]-'a']--;
	chars[s[i]-'a']++;
	// for(int j=0;j<26;j++) cout<<chars[j];
	if( chars['c'-'a'] && chars['h'-'a'] && chars['e'-'a'] && chars['f'-'a'] ){
		count++ ;
		// cout<<" -";
	}

	// cout<<'\n';
	}
return count;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin>>s;
		long long count=check(s);
		// for(int i=0;i<s.length();i++) cout<<s[i]-'a'<<'\n';
		if(count) cout<<"lovely "<<count;
		else cout<<"normal";
		cout << "\n";

	}
}
