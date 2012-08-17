#ifndef FORME_H
#define FORME_H

#include <iostream>

using namespace std;

class Forme {
        int x, y;
public:
        Forme(int x, int y): x(x), y(y) {}
        int getX() { return x;}
        int getY() { return y;}

        // Les sous-classes héritent de la table virtuelle.
        // Le contenu de la table virtuelle est déterminé
        // lors de l'exécution.
        virtual void dessine() {}
        virtual void anime() {}
 } ;

#endif // FORME_H
