#include <iostream>
#include <set>
using namespace std;
class node{ public: int n,neigh;vector<int> links;
				node(){ int dest;
  						cout<<"Enter Source : ";
  						cin>>n;
  						cout<<"How many Neighbours ? : "; cin>>neigh;
  						cout<"Enter Neighbours : ";
  						while(neigh--){
  							cin>>dest;
  							links.push(dest);
  					  	}
  					  }
  		};

void dfs(bool visited[]){
	for(int i=0;i<n;i++){

	}


}


















  			addEdge(int src,int dest){
  				if(find(edge_list.begin(),edge_list.end(),src))  find(edge_list.begin(),edge_list.end(),src).push(dest);
  				if(find(edge_list.begin(),edge_list.end(),dest)) find(edge_list.begin(),edge_list.end(),dest).push(src);
  			}};
class graph{int t; 
			vector<node> edge_list();
  			public:

  			};