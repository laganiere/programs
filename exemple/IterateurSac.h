
#ifndef ITERATEURSAC_H
#define ITERATEURSAC_H

#include <stdlib.h>
#include "Sac.h"

template<class T, int capInitial=64>
class IterateurSac{

private:

    int index;
    Sac<T, capInitial>& leSac;

public:

    IterateurSac(Sac<T, capInitial> &leSac): leSac(leSac), index(0) {}
    bool operator!() const {return index < leSac.getTaille();}
    IterateurSac& operator++() {index++; return *this;}
    T operator*() {return leSac.sac[index];}
};
/*
int main() {

    Sac<Horloge,8> sac(4);


    Horloge h1(16,2,4,0);
    Horloge h2(5,22,56,0);
    Horloge h3(7,15,8,0);
    Horloge h4(19,7,14,0);
    Horloge h5(55,9,5,0);
    Horloge h6(1,21,22,0);

    sac+= h1;
    sac+= h2;
    sac+= h3;
    sac+= h4;
    sac+= h5;
    sac+= h6;

    IterateurSac<Horloge, 8> it(sac);

    while (!it) {
        std::cout << *it << std::endl;
        ++it;
    }


    system("PAUSE");
    return 0;
}
 */
#endif // ITERATEURSAC_H
