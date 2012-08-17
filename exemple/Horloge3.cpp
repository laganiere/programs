
#include "Horloge3.h"

const Horloge operator+(const Horloge &gauche, const Horloge &droit)
{
    // retourne une référence anonyme
    return Horloge(gauche) += droit;
    // déclaration de variable anonyme avec Horloge(gauche)
}

const Horloge operator-(const Horloge &gauche, const Horloge &droit)
{

    return Horloge(gauche) -= droit;
}


