#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
#include <string>
#define print(x) cout<<#x<<" = "<<x<<'\n';
using namespace std;
int foo(float num1, float num2){        // FORMAL PARAMETERS -- call by VALUE
    return num1+num2;
}
void foobar(float &num1, float& num2){  // FORMAL PARAMETERS -- call by REFERENCE
    print(num1+num2)
}
int main() {

    int x = foo(1,2);           // ACTUAL PARAMETERS
    print(x)
    float ac1=20,ac2=10;
    foobar(ac1,ac2);            // ACTUAL PARAMETERS

}
