#include <bits/stdc++.h>
using namespace std;

// datatypes
#define LL long long
#define PII pair<int,int>
#define PIL pair<int,LL>
#define PLI pair<LL,int>
#define VI vector<int>
#define LD long double
// hacks
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) (int)((x).size())
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FI first
#define SE second
#define st FI
#define nd SE
//functions
template<class C> void mini(C& a,C b){(a>b)?a=b;}  // minimize 'a'
template<class C> void maxi(C& a,C b){(a<b)?a=b;} // you guessed it.
template<class TARGET> void _dbg(const char* sdbg,TARGET t){cout<<sdbg<<" = "<<t<<'\n';} // check value of any variable 
template<