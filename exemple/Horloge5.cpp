
#include "Horloge5.h"

    Horloge::
Horloge(long sec) : secondes(sec) {

    cout << "-> constructeur de " << *this << endl;
}

    Horloge::
Horloge(int j, int hrs, int min, long sec) {

    secondes= sec + min*60 + hrs*3600 + j*86400;
}

    Horloge::
Horloge(const Horloge &t) : secondes(t.secondes) {

    cout << "-> constructeur copieur avec " << t << endl;
}

    Horloge::
~Horloge() {

    cout << "-> destructeur de " << *this << endl;
}

    const Horloge
operator+(const Horloge &gauche, const Horloge &droit) {

    return Horloge(gauche) += droit;
}

    const Horloge
operator-(const Horloge &gauche, const Horloge &droit) {

    return Horloge(gauche) -= droit;
}


