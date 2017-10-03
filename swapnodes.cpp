#include <iostream>
using namespace std;
int a=0;
struct node {
     int val;
     node *next;
    	node(){val=a++;next=NULL;cout<<val<<endl;}
}* head;



node* swap(node* head,int x,int y){
	node *xpos=NULL,*xprev=NULL,*ypos=NULL,*yprev=NULL,*some_node=head,*temp;
	int xfound=0,yfound=0;
	int spcase=0;
	if(head->val==x || head->val==y){xpos=head;spcase++;xfound++;}
	while(some_node!=NULL){
		if((some_node->val==x) || (some_node->val==y)){
			if(xfound==0)
				{xpos=some_node;xfound++;}
			else
				{ypos=some_node;yfound++;}
		}
	temp=some_node->next;
	some_node=temp;
	}
	some_node=head;
	while(some_node!=NULL){
		if(some_node->next==xpos)
			xprev=some_node;
		else if(some_node->next==ypos)
			yprev=some_node;
	temp=some_node->next;
	some_node=temp;
	}
	if(xfound==1 && yfound==1 && spcase==0){
		xpos=xprev->next;
		ypos=yprev->next;
		xprev->next=ypos;
		temp=ypos->next;
		ypos->next=xpos->next;
		yprev->next=xpos;
		xpos->next=temp;
	}
	else if(spcase){
		ypos=yprev->next;
		head=ypos;
		yprev->next=xpos;
		temp=xpos->next;
		xpos->next=ypos->next;
		ypos->next=temp;
	}
return head;
}
int main(){
	head=new node;
	node* c;
	head->next=new node;     // 1
	c=head->next;
	c->next=new node;        // 2
	c=c->next;
	c->next=new node;        // 3
	c=c->next;
	c->next=new node; 		 //	4
	int x,y;				 // 0--1--2--3--4--NULL
	cin>>x>>y;
	head=swap(head,x,y);
	if(head!=NULL){
	cout<<"SWAPPING "<<x<<" AND "<<y<<"\n";		
	while(head!=NULL){
		 cout<<head->val<<endl;
		 head=head->next;
		}
}