#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
struct coord{long long x,y;
int operator<(coord &b){
    if(x<b.x) return true;
    return false;
    }
};
int main(){
    int n,p,q,r;
    cin>>n;
    unsigned long long k;
    cin>>k;
    k/=2;
    // get all co-ordinates
    vector<coord> a(n);
    for(p=0;p<n;p++) cin>>a[p].x>>a[p].y;
    // sort them (ainvayi)
    sort(a.begin(),a.end());
    long long best=0,area;
    coord a1,a2; // consider 3rd to be (0,0)
    for(p=0;p<n;p++){
        for(q=p+1;q<n;q++){
            a1.x=a[q].x-a[p].x;
            a1.y=a[q].y-a[p].y;
            for(r=q+1;r<n;r++){
                a2.x=a[r].x-a[p].x;
                a2.y=a[r].y-a[p].y;
                area=((long long)(a1.x*a2.y-a1.y*a2.x))/2;
                if(area<0) area*=-1;
                if(area>best && area<k) best=area;
                    
            }    
        }
    }
    if(best==0) cout<<-1;
    else cout<<best*2<<" = "<<best*2;
}