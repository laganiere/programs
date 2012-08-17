
#include "Trait2.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

    est_pointeur<int> a;
    est_pointeur<int*> b;

    est_pointeur<double> c;
    est_pointeur<double*> d;

    cout << "pointeur (a) est un pointeur: " << a.valeur << endl;
    cout << "pointeur (b) est un pointeur: " << b.valeur << endl;
    cout << "pointeur (c) est un pointeur: " << c.valeur << endl;
    cout << "pointeur (d) est un pointeur: " << d.valeur << endl;
    system("PAUSE");
    return 0;
}
