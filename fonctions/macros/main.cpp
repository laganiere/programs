
#define PI 3.1416
#define MIN(a, b) (a < b) ? a : b
#include <iostream>

using namespace std;

int main()
{
    int a=3, b = 4;
    int z;
    int c = (a > b) ? 8 : 7; // Si vrai 8, sinon 7

    z = MIN(a*2, b +5);
    cout << "z = " << z << endl;

    z = (a*2 < b+ 5) ? a*2 : b + 5;
    cout << "z = " << z << endl;

    int x = 2, y = 3;
    // z = MIN(x, y) + 7; // NON!
    z = (x < y) ? x : y + 7;
    cout << "z = " << z << endl;

    /*----------------- résultat ----------------------*\
      z = 6
      z = 6
      z = 2
    \*-------------------------------------------------*/

}
