
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
        cout << "DÃ©but" << endl;

        Boite b(5);

        b.add(new Forme());
        b.add(new Forme());
        b.add(new Forme());

        cout << "CrÃ©ation de c" << endl;

        Boite c=b;

        cout << "Appel Ã  fct1" << endl;
        fct1(c);

        cout << "Appel Ã  fct2" << endl;

        Boite e(fct2());

        cout << "Appel Ã  fct2" << endl;

        e= fct2();

        e.vide();
        b.vide();

        return 0;

        /*--------------- rÃ©sultat ------------------------*\
         DÃ©but
         constructeur - int
         CrÃ©ation de c
         constructeur - copieur
         Appel Ã  fct1
         constructeur - copieur
         Dans fct1
         Appel Ã  fct2
         Dans fct2
         constructeur - int
         Fin de fct2
         constructeur - copieur
         Appel Ã  fct2
         Dans fct2
         constructeur - int
         Fin de fct2
         constructeur - copieur

        \*-------------------------------------------------*/
}
