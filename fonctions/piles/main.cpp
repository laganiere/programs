
#include "Pile.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

    Pile<int> pile(5);

    cout << "La pile est vide: " << pile.estVide() << endl;

    pile.pousser(1);
    cout << "Pousser: 1" << endl;

    pile.pousser(2);
    cout << "Pousser: 2" << endl;

    pile.pousser(3);
    cout << "Pousser: 3" << endl;

    pile.pousser(4);
    cout << "Pousser: 4" << endl;

    pile.pousser(5);
    cout << "Pousser: 5" << endl;

    cout << "La pile est vide: " << pile.estVide() << endl;
    cout << "La pile est pleine: " << pile.estPlein() << endl;

    cout << "Tirer: " << pile.tirer() << endl;
    cout << "Tirer: " << pile.tirer() << endl;
    cout << "Tirer: " << pile.tirer() << endl;

    cout << "La pile est vide: " << pile.estVide() << endl;
    cout << "La pile est pleine: " << pile.estPlein() << endl;
    cout << "L'objet au dessus de la pile est: " << pile.dessus()
            << endl;

    cout << "Tirer: " << pile.tirer() << endl;
    cout << "Tirer: " << pile.tirer() << endl;

    cout << "La pile est vide: " << pile.estVide() << endl;
    cout << "La pile est pleine: " << pile.estPlein() << endl;

    system("PAUSE");
    return 0;
}
