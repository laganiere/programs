
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string s;
    float x;

    ostringstream convertisseur;

    x = 3.14;

    convertisseur << x;
    s = convertisseur.str();

    cout << "s = " << s << endl;

    stringstream strm(stringstream::out | stringstream::in);

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
