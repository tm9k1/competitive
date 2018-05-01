#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

#define print(x) //cout << #x << " = " << x << '\n';
using namespace std;
void rem_node(int parent[100], int p, int r);
int main() {
  int p, i, flag = 0;
  cin >> p;
  int parent[p], leaf = 0;
  for (i = 0; i < p; i++) {
    cin >> parent[i];
  }
  for (i = 0; i < p; i++)
    //cout << " Parent of " << i << " -> " << parent[i] << '\n';
  int r;
  cin >> r;
  rem_node(parent, p, r);
  for (i = 0; i < p; i++)
    //cout << parent[i] << ' ';
  //cout << '\n';
  for (i = 0; i < p; i++) {
      if (parent[i] != -2) {
    flag = 0;
    for (int j = 0; j < p; j++)
        if (i == parent[j])
          flag = 1;
        if (flag == 0) {
          //cout << "at i =" << i << '\n';
          leaf++;
        }
      }
  }
  cout << leaf << '\n';
}

// every removed node will become -2
void rem_node(int parent[100], int p, int r) {
  parent[r] = -2;
  for (int i = 0; i < p; i++) {
    if (parent[i] == r)
      rem_node(parent, p, i);
  }
}