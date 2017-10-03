#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		long n,q;
		int i,j;
		cin>>n>>q;
		vector<long> snake(n);
		vector<long> final(n);
		for(i=0;i<n;i++){ 
			cin>>snake[i];
		}
		sort(snake.begin(),snake.end());
		
		for(i=0;i<n;i++) final[i]=snake[i]+upper_bound (snake.begin(), snake.end(),snake[i])-snake.begin()-1;
		for(i=0;i<n;i++)
			cout<<snake[i]<<' ';
		cout<<'\n';
		for(i=0;i<n;i++)
			cout<<final[i]<<' ';
		cout<<"\n\n\n";
		for(i=0;i<q;i++){
			int query;
			cin>>query;
			vector<long>::iterator up;
  			up=upper_bound (final.begin(), final.end(), query);
			cout<<up-final.begin()<<'\n';
			}

	}
}