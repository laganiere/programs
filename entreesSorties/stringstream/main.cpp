
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string s;
    float x;

    // output string stream
    // tres pratique pour convertir des types numeriques
    // en chaines de caracteres
    ostringstream convertisseur;

    x = 3.14;

    convertisseur << x;
    s = convertisseur.str();

    cout << "s = " << s << endl;

    // par defaut les strinstream sont en entree ou en sortie
    // mais on peut en faire la declaration explicite (in et/ou out)
    stringstream strm(stringstream::out | stringstream::in);

    // en entree
    strm << "120 44 z";
    int val;

    cout << "Les entiers lus par strm sont : " << endl;
    for (int i = 0; i < 3; i++) {
        // le prochain "token" dans strm est emmagasiné dans val
        strm >> val;
        if (strm.fail())
            cout << "Erreur: valeur n'est pas un entier." << endl;
        else
            cout << val << endl;
    }

    /*----------------- résultat ----------------------*\
    s = 3.14
    Les entiers lus par strm sont :
    120
    44
    Erreur: valeur n'est pas un entier.
    \*-------------------------------------------------*/

}
