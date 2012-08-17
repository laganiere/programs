
#include "Horloge4.h"

const Horloge
        operator+(const Horloge &gauche, const Horloge &droit) {
    return Horloge(gauche) += droit;
}

const Horloge
        operator-(const Horloge &gauche, const Horloge &droit) {
    return Horloge(gauche) -= droit;
}

