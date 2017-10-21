#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int t; cin>>t;
    while(t--){         //running all test cases
        int B, g, b;
        cin>>B>>g>>b;
        multiset<int, greater<int> > SG, SB;   
        // parsing element of green army
        while(g--){   
        	int x; cin>>x;
        	SG.insert(x);
        }
        // parsing element of blue army
        while(b--){
        	int x; cin>>x;
        	SB.insert(x);
        }
        //here battle begins until one of the multiset becomes empty
        while(!SG.empty() && !SB.empty()){
        	int BG=1;   // battle ground 
        	// vector<int> GR, BL;  // vectors to store lemmings if left from battle
            while(BG<=B && BG<=SG.size() && BG<=SB.size()){     //loop so that a round of battle will not run 
            	int power_left = *(SG.begin()) - *(SB.begin()) ;  //if size of any army is less than 
            	if( power_left > 0 )  SG.insert(power_left);//battle grounds or if all battle
            	if( power_left < 0 )  SB.insert(-power_left);// grounds are alloted by their
            	SG.erase(SG.begin());                                        //armies
            	SB.erase(SB.begin());
            	BG++;
            }
        }
        if(SG.empty() && SB.empty()) cout<<"green and blue died\n";
        else if(SG.empty()){
        	cout<<"blue wins\n";
        	for(auto i : SB) cout<<i<<'\n';
        }
        else if(SB.empty()){
        	cout<<"green wins\n";
        	for(auto i : SG) cout<<i<<'\n';
        }
    	if(t) cout<<'\n';
    }
	return 0;
}