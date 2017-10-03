#include <iostream>
using namespace std;
void moveDisk(int fromPole,int toPole,int diskno){
	cout<<"MOVING DISK "<<diskno<<" FROM POLE "<<fromPole<<" TO "<<toPole<<'\n';
}
void moveTower(int height,int fromPole,int toPole,int withPole,int diskno){
	if (height>=1) {
		moveTower(height-1,fromPole,withPole,toPole,height-1); // transfer a tower of height=h-1 to intermediate pole
		moveDisk(fromPole,toPole,diskno);
		moveTower(height-1,withPole,toPole,fromPole,height-1); // transfer the tower from intermediate pole to target pole
	}
}
int main(){
	int n;
	cin>>n;
	moveTower(n,1,3,2,n); // poles are number 1,2 and 3
}