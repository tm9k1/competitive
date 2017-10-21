#include <iostream>
#include "tree"
using namespace std;
int height(node* root){
	if(root==0) return 0;
	int leftheight=height(root->left);
	int rightheight=height(root->right);
	return 1+max(leftheight,rightheight);
}

int sumTree(node* root){
	if(root==0) return 0;
	return sumTree(root->left)+sumTree(root->right)+root->data;
}
bool checksum(node* root,int sum){
	if(root==0) return false;
	int treesum;
	bool leftAns=checksum(root->left,sum);
	if(leftAns==true) return true;
	bool rightAns=checksum(root->right,sum);
	if(rightAns==true) return true;
	if(!leftAns && !rightAns) treesum=sumTree(root->left)+root->data+sumTree(root->right); 
	if(treesum == sum) return true;
	return false;
}
int main(){
	node* root=new node;
	root->left=new node;
	root->right=new node;
	(root->left)->left=new node;
	int sum;
	cin>>sum;
	cout<<height(root)<<endl;
	cout<<checksum(root,sum);
}