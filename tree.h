#ifndef TREE_NODE_H
#define TREE_NODE_H
#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* left,*right;
node(){cin>>data;left=NULL;right=NULL;} 
};
#endif