#include <iostream>
#include "tree"
#include <queue>
using namespace std;
Tree_node* createTree(){
	cout<<"Enter Rot and Number of Children\n";
	int root_data,root_child;
	cin>>root_data>>root_child;
	Tree_node * root=new Tree_node(root_data,root_child);
	queue<Tree_node*> q;
	q.push(root);
	while(q.empty()==false){
		Tree_node *cur_parent =q.front();
		q.pop();
		int n=cur_parent->n_child;
		for(int i=0;i<n;i++){
			cout<<"data and n_children\n";
			int d,nchild;
			cin>>d>>nchild;
			Tree_node *tmp=new Tree_node(d,nchild);
			cur_parent->children[i]=tmp;
			q.push(tmp);
		}
	}
}
// void printTree(Tree_node* root){}
int main(){
	createTree();
}
