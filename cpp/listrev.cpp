#include <iostream>
using namespace std;
int a=0;
struct ListNode {
     int val;
     ListNode *next;
     ListNode(){val=a++;next=NULL;cout<<val<<endl;}
}* head;

ListNode* revlist(ListNode* A){			// 4--3--2--1--0--NULL
	ListNode* newhead=A;
	while(newhead->next!=NULL) newhead=newhead->next;
	ListNode* cur=A->next;
	ListNode* prev=A;
	ListNode* next;
	while(cur!=NULL){
		// cur=prev->next;
		next=cur->next;
		cur->next=prev;
		prev=cur;
		cur=next;
	}
	A->next=NULL;
	return newhead;
} 





int main(){
	head=new ListNode;
	ListNode* c;
	head->next=new ListNode;     // 1
	c=head->next;
	c->next=new ListNode;        // 2
	c=c->next;
	c->next=new ListNode;        // 3
	c=c->next;
	c->next=new ListNode;				//	4
								// 0--1--2--3--4--NULL
cout<<"REVLIST\n";	
c=revlist(head);
while(c!=NULL){
	 cout<<c->val<<endl;
	 c=c->next;
	}
}