
#include <string>
#include <iostream>
#include "monException.h"

using namespace std;

int lireEntierPositif() { 

    cout << "Entrer un nombre : ";
    cin >> nombre;

    if (cin.fail()) {
        MonException erreur("Nombre invalide");
        throw erreur;
	}

    if (nombre < 0)
        throw -1;

    return nombre;
}

int main()
{
    try {

      int nombre; 	
      nombre = lireEntierPositif();

      cout << nombre +1;
	  
    }
    catch(MonException w ) { w.report(); }
    catch(int e) {
        std::cout <<
                "L'exception attrapée est un entier." << std::endl;
        throw(e); // relance l'exception au niveau plus haut
    }
    catch(...) { // attrape n'importe quoi
        cout << "Exécution du programme interrompue" << endl;
        exit(0);
    }
}
