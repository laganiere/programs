
// il faut abuser des paranthèses pour obtenir des
// macros sécuritaires
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define ARRONDIR(x) (static_cast<int>((x) + 0.5))
#include <iostream>

using namespace std;

int main()
{
    int x = 2, y = 3;
    int z = MIN(x, y) + 7;
    cout << "z = " << z << endl;

    double a = 5.4;
    cout << "a = " << ARRONDIR(a) << endl;

    double b = 5.6;
    cout << "b = " << ARRONDIR(b) << endl;

    /*----------------- résultat ----------------------*\
      z = 9
      a = 5
      b = 6
    \*-------------------------------------------------*/
}
