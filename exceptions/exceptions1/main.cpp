
#include <iostream>

using namespace std;

static const int INVALID_NUMBER = 1;
static const int NEGATIVE_NUMBER = -1;
static const int SUCCESS = 0;

int lireEntierPositif() { // retourne le code d'erreur

    int nombre;

    cout << "Entrer un nombre : ";
    cin >> nombre;

    if (cin.fail())
        return INVALID_NUMBER;

    if (nombre < 0)
        return NEGATIVE_NUMBER;
    return SUCCESS;
}

int main() {
    int erreur = lireEntierPositif();

    if (erreur == SUCCESS) {
        // flot normal d'exécution
        cout << "Aucune erreur." << endl;
    }
    else if (erreur == NEGATIVE_NUMBER) {
        // traitement d'une exception
        cout << "Erreur : Nombre négatif" << endl;
    }
    else {
        // traitement d'autres exceptions
        cout << "Code d'erreur : " << erreur << endl;
    }
}
