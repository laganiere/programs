
#include "Sac.h"
#include "Horloge4.h"
#include "IterateurSac.h"
#include <iostream>
#include <stdlib.h>

int main() {

    Sac<int> s;
    Sac<Horloge> b1(4);

    s+= 4;
    s+= 6;
    s+= 9;
    s+= 8;

    IterateurSac<int> it(s);
    int somme;

    cout << "Itérateur de sac avec un sac de int" << endl;

    for(somme=0; !it; ++it){
        somme += *it;
        cout << "Élément: " << *it << endl;
    }

    cout << "la somme de tous les éléments est: " << somme << endl << endl;

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

    cout << "Itérateur de sac avec un sac d'horloge" << endl;

    IterateurSac<Horloge> it2(b1);
    for(; !it2; ++it2){
        cout << "Horloge: " << *it2 << endl;
    }

    system("PAUSE");
    return 0;
}

/*--------------- résultat ---------------*\
Itérateur de sac avec un sac de int
Élément: 4
Élément: 6
Élément: 9
Élément: 8
la somme de tous les éléments est: 27

Itérateur de sac avec un sac d'horloge
Horloge: 16jours 2hrs 4mins 0sec
Horloge: 5jours 22hrs 56mins 0sec
Horloge: 7jours 15hrs 8mins 0sec
Horloge: 19jours 7hrs 14mins 0sec
Horloge: 55jours 9hrs 5mins 0sec
Horloge: 1jour 21hrs 22mins 0sec
\*--------------------------------------*/
