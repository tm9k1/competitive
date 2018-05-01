#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
#include <string>
#define print(x) cout<<#x<<" = "<<x<<'\n';
using namespace std;
struct product {
    string name; 
    int weight;
    double price;
    product(){
        cout<<"ENTER DETAILS FOR PRODUCT - name (english), weight (kg), price (Rupees).\n";
        cin>>name>>weight>>price;
    }
    void display(){cout<<"THE PRODUCT IS A "<<name<<" WEIGHING "<<weight<<" kg AND COSTS Rs. "<<price<<'\n';}
} ;
int main() {
    cout<<"Dec- PRODUCT\n";
    product apple;
    cout<<"\nDisp DETAILS USING MEMBER FUNCTION\n";
    apple.display();
    cout<<"\n\nDec- ARRAY[products]\n";
    product fruits[3];    
    for (int i=0;i<3;i++){
        cout<<"Product (Index-> "<<i<<")\n";
        fruits[i].display();
    }
}
