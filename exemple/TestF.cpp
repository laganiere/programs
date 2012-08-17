
#include "Sac.h"
#include "Horloge4.h"
#include <iostream>
#include <stdlib.h>

int main() {

    Sac<int> c;
    Sac<Horloge,8> b1(4), b2;

    c+= 1;
    c+= 2;
    c+= 3;
    c+= 4;
    cout << "a) " << *c << " et " << *c << endl;

    Horloge h1(16,2,4,0);
    Horloge h2(5,22,56,0);
    Horloge h3(7,15,8,0);
    Horloge h4(19,7,14,0);
    Horloge h5(55,9,5,0);
    Horloge h6(1,21,22,0);

    b1+= h1;
    b1+= h2;
    b1+= h3;
    b1+= h4;
    b1+= h5;
    b1+= h6;

    b2 = b1;

    cout << "b) " << b1.getCapacite() << endl;
    cout << "c) " << *b1 << endl;
    cout << "d) " << *b1 << endl;
    cout << "e) " << *b1 << endl;
    cout << "f) " << *b1 << endl;

    cout << "g) " << *b2 << endl;

    cout << "h) " << b1.getTaille() << " et "
                            << b2.getTaille() << endl;

    b1 += b2;

    cout << "i) " << b1.getTaille() << endl;

    system("PAUSE");
    return 0;
}

/*--------------- résultat ---------------*\

a) 3 et 4
b) 8
c) 7jours 15hrs 8min 0sec
d) 19jours 7hrs 14min 0sec
e) 5jours 22hrs 56min 0sec
f) 1jours 21hrs 22min 0sec
g) 16jours 2hrs 4min 0sec
h) 2 et 5
i) 7

\*--------------------------------------*/


