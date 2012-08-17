// using stringstream constructors.
#include <iostream>
#include <sstream>
using namespace std;

int main () {

  int val;
  stringstream ss (stringstream::in | stringstream::out);

  ss << "120 42 377 6 5 2000";

  // double la valeur de chaque int
  for (int n=0; n<6; n++)
  {
    ss >> val;
    cout << val*2 << endl;
  }

  return 0;

  /*--------------------- résultat -------------------------*\
    240
    84
    754
    12
    10
    4000
  \*--------------------------------------------------------*/
}

