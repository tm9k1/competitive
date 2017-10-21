#include <iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node(){cin>>data;
			next=0;}
}* head;

void delevenode(Node* &head)
{
	while((head->data)%2) head=head->next;
	Node* cur,* prev;
	cur=head->next;prev=head;
	while(cur!=0)
	{
		if(cur->data%2){
			prev->next=cur->next;
			cur=cur->next;
		}
		else{
			prev=prev->next;
			cur=cur->next;
		}
	}
}
int main(){
	head=new Node;				//		head->1
	head->next=new Node;		//		head->1-->2
	head->next->next=new Node;	//		head->1-->2-->3
	head->next->next->next=new Node;//	head-->1->2-->3-->4
	delevenode(head);
	while(head!=0){
		cout<<(head->data)<<endl;
		head=head->next;
	}
	Node* temp;
	while(head){temp=head->next;delete head;head=temp;}
}