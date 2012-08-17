
#include "Trait1.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

    Descripteur<int>::type a(3);
    Descripteur<int>::pointeur p;
    p=&a;

    cout << "p: " << p << endl;
    cout << "*p: " << *p << endl;

    typedef Descripteur<int>::pointeur mon_pointeur;

    mon_pointeur pp = &a;

    cout << "pp: " << pp << endl;
    cout << "*pp: " << *pp << endl;


    system("PAUSE");
    return 0;
}
