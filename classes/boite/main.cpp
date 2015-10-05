
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

        // attention ici, il y aura RVO
        // (return by value optimization)
        return d;
}

int main()
{
        cout << "Debut" << endl;

        Boite b(5);

        b.add(new Forme());
        b.add(new Forme());
        b.add(new Forme());

        cout << "Creation de c" << endl;

        Boite c=b;

        cout << "Appel a fct1" << endl;
        fct1(c);

        cout << "Appel a fct2" << endl;

        // sans RVO on aurait:
        // copie-construction de la variable anonyme a partir de la valeur retournee
        // destruction de la variable locale de la fct2
        // copie-construction de e
        // destruction de la variable anonyme
        Boite e(fct2());

        cout << "Appel a fct2" << endl;

        e= fct2(); // la variable anonyme creee par le retour de fonction
                   // sera liberee a la fin de cet enonce

        cout << "Appel a vide" << endl;

        e.vide();
        b.vide();

        return 0;

/*--------------- resultat ------------------------*\
Debut
constructeur - int
Creation de c
constructeur - copieur
Appel a fct1
constructeur - copieur
Dans fct1
destructeur
Appel a fct2
Dans fct2
constructeur - int
Fin de fct2
Appel a fct2
Dans fct2
constructeur - int
Fin de fct2
destructeur
Appel a vide
destructeur
destructeur
destructeur

\*-------------------------------------------------*/
}
