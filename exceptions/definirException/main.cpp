
#include <string>
#include <iostream>
#include "monException.h"

using namespace std;

int main()
{


    try {
        int i;
        std::cout
            << "Entrez un nombre entre 0 et 10 : " << std::endl;
        std::cin >> i;

        if (i > 10) {
            MonException testing("Nombre invalide");
            throw(testing);
        }
        else if (i < 0) {
            throw(3);
        }
        else {
            cout << "Vous avez entré " << i << endl;
        }
    }
    catch(MonException w ) { w.report(); }
    catch(int e) {
        std::cout <<
                "L'exception attrapée est un entier." << std::endl;
        throw(e); // relance l'exception au niveau plus haut
    }
    catch(...) { // attrape n'importe quoi
        cout << "Exécution du programme interrompue" << endl;
        exit(4);
    }
}
