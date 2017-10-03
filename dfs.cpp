#include <iostream>
#include <vector>
using namespace std;
/*													0
									1								2
							3				4				5				6
						7		8		9		10		11		12		13		14		*/

int n=1;
class treeNode{
  	public:
  		int val;
		treeNode *lt,*rt;
	
		treeNode(){val=n++;lt=NULL;rt=NULL;}
		// treeNode(int a){val=a;lt=NULL;rt=NULL;}
		 grow_lt(){this->lt=new treeNode;}
		 grow_rt(){this->rt=new treeNode;}
		// my_value(){return (this->val);}
		// leftnode(){return lt;}
		// rightnode(){return rt;}
	};
int grow(treeNode *node,int level){
	if(level==0){return 0;}
	node->grow_lt();
	grow(node->lt,level-1);
	node->grow_rt();
	grow(node->rt,level-1);
}
int gaze_upon_tree(treeNode *root,int level){
	if(level!=0) if(root->val>99)cout<<" --->> ";
				 else if(root->val>9)cout<<" ---->> ";
				 else cout<<" ----->> ";
	cout<<root->val;
	 if(root->lt!=NULL) gaze_upon_tree(root->lt,level+1);
	 if(root->rt!=NULL) gaze_upon_tree(root->rt,level+1);
	 cout<<"\n ";
	 for(int i=1;i<level;i++) cout<<"          ";
	// if((root->lt==NULL && root->rt==NULL) || flag) cout<<'\n';
}
int main(){
	int level;
	cin>>level;
	treeNode *tree=new treeNode;
	grow(tree,level);
	gaze_upon_tree(tree,0);
}