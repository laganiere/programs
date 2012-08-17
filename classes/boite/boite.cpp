
// boite.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "boite.h"

using namespace std;

void fct1(Boite b) {

        cout << "Dans fct1" << endl;
}

Boite fct2() {

        cout << "Dans fct2" << endl;
        Boite d(5);
        d.add(new Forme);

        cout << "Fin de fct2" << endl;
        return d;
}

int main()
{
        cout << "Début" << endl;

        Boite b(5);

        b.add(new Forme());
        b.add(new Forme());
        b.add(new Forme());

        cout << "Création de c" << endl;

        Boite c=b;

        cout << "Appel à fct1" << endl;
        fct1(c);

        cout << "Appel à fct2" << endl;

        Boite e=fct2();

        e.vide();
        b.vide();

        return 0;

        /*--------------- résultat ------------------------*\
         Début
         constructeur - int
         Création de c
         constructeur - copieur
         Appel à fct1
         constructeur - copieur
         Dans fct1
         Appel à fct2
         Dans fct2
         constructeur - int
         Fin de fct2
        \*-------------------------------------------------*/
}
