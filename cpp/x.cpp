#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

#define print(x) //cout << #x << " = " << x << '\n';
using namespace std;

int main()
{
  string a;
  getline(cin, a);
  string str2 = "  " ;
  int found = a.find(str2);
  if (found != string::npos) cout << "first '  ' found at: " << found << '\n';
}
