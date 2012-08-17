
#include "lireEntier.h"

int main()
{
    int z;

    try {
        z = LireEntier();
        cout << "L'entier est " << z << endl;
    } catch (string s) {cout << "Erreur " << s << endl; }
    catch (...) { cout << "Autre erreur" << endl;}
}
