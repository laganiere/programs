
#ifndef ITERATEURSAC_H
#define ITERATEURSAC_H

#include <stdlib.h>
#include "Sac.h"

template<class T>
class IterateurSac{

private:

    int index;
    Sac<T>& leSac;

public:

    IterateurSac(Sac<T> &leSac): leSac(leSac), index(0) {}
    bool operator!() const {return index < leSac.getTaille();}
    IterateurSac& operator++() {index++; return *this;}
    T operator*() {return leSac.sac[index];}
};

#endif // ITERATEURSAC_H
