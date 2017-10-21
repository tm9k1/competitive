// lower_bound/upper_bound example
#include <iostream>     // std::cout
#include <algorithm>    // std::lower_bound, std::upper_bound, std::sort
#include <vector>       // std::vector

int main () {
  int myints[] = {1,3,4,6,5,7,8,3};
  std::vector<int> v(myints,myints+8);           // 10 20 30 30 20 10 10 20

  std::sort (v.begin(), v.end());                // 1 3 3  4 5 6 7 8 

	  std::vector<int>::iterator low,up;
	  low=std::lower_bound (v.begin(), v.end(), 4); //          ^
  up= std::upper_bound (v.begin(), v.end(), 4); //                   ^

  std::cout << "lower_bound at position " << (low- v.begin()) << '\n';
  std::cout << "upper_bound at position " << (up - v.begin()) << '\n';

  return 0;
}