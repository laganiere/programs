

#include "Trait.h"
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

    trait_reel<int> e;
    cout << "trait_reel (e) est reel: " << e.est_reel << endl;

    double v1 = 1.00001;
    double v2 = 0.99999;

    cout << v1 << " et " << v2 << " sont égales pour le trait_reel "
            << "(e): " << e.egal(v1, v2) << endl;

    trait_reel<double> f;
    cout << "trait_reel (f) est réel: " << f.est_reel << endl;

    cout << v1 << " et " << v2 << " sont égales pour le trait_reel "
            << "(f): " << f.egal(v1, v2) << endl;

    system("PAUSE");
    return 0;
}

