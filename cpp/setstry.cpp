
// set::size
#include <iostream>
#include <set>
using namespace std;
int main ()
{
  set<int> myints;
  cout << "0. size: " << myints.size() << '\n';

  for (int i=0; i<10; ++i) myints.insert(i);
  std::cout << "1. size: " << myints.size() << '\n';

  myints.insert (1);
  std::cout << "2. size: " << myints.size() << '\n';

  myints.erase(5);
  std::cout << "3. size: " << myints.size() << '\n';

  return 0;
}