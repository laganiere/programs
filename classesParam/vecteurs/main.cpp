
#include <vector>
#include "triangle.h"
#include "triangle.cpp"
#include <iterator>
#include <iostream>

using namespace std;

int main()
{
    // déclaration de vecteurs
    vector<int> a;
    vector<Triangle*> t;
    vector<int> b(50); // initialement de 50 éléments
    vector<int> v(10, 2); // les 10 éléments sont initialisés à 2

    cout <<  "grandeur du vecteur : " << v.size() << ", "
            << "capacité du vecteur : " << v.capacity() << endl;
    v.push_back(30);
    v[100] = 10;  // comportement non defini (hors limite)
    cout << v[100] << endl;
    cout <<  "grandeur du vecteur : " << v.size() << ", "
            << "capacité du vecteur : " << v.capacity() << endl;

    // itérateurs réguliers
    vector<int> c(10, -1);
    cout << "Après l'itération, c = {";
    for (vector<int>::iterator it = c.begin();
                                        it != c.end(); it++) {
        *it += 3;

        if (it == c.begin()) cout << *it;
        else cout << ", " << *it;
    }
    cout << "}" << endl;


    // itérateurs renversés
    cout << "Après l'itération, y = {";
    vector<int> y(7, 10);
    vector<int>::reverse_iterator it2;
    it2 = y.rbegin();
    while (it2 != y.rend()) {
        *it2+=3;

        if (it2 == y.rbegin()) cout << *it2;
        else cout << ", " << *it2;


        it2++;
    }
    cout << "}" << endl << endl;

    /*--------------------- résultat -------------------------*\
      grandeur du vecteur : 10, capacité du vecteur : 10
      grandeur du vecteur : 10, capacité du vecteur : 10
      Après l'itération, c = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2}
      Après l'itération, y = {13, 13, 13, 13, 13, 13, 13}
    \*--------------------------------------------------------*/

}
