
#include <iostream>
#include <stdlib.h>
#include "Horloge3.h"

int main() {

        Horloge t1(2,1,45,30);
        Horloge t2;
        Horloge t3;

        t2= 43482;
        cout << t1 <<  " et " << t2 << endl;

        t1+= t2;
        cout << "a) " << t1 << endl;

        t3= t1 + t2;
        cout << "b) " << t3 << endl;

        t3= t2 - 25; // 25 est interpreté comme des secondes
        cout << "c) " << t3 << endl;

        // fonctionne seulement parce que l'opérateur
        // est défini à l'aide d'une fonction
        t3= 10 + t1;
        cout << "d) " << t3 << endl;

        t1= ++t3 + 60;
        cout << "e) " << t1 << endl;

        t3= t1++;
        cout << "f) " << t3 << endl;
        cout << "g) " << t1 << endl;

        cout << "h) " << ~t2 << endl;

        system("PAUSE");
        return 0;
}

/*--------------- résultat ---------------*\

2jours 1hr 45min 30sec et 0jour 12hrs 4min 42sec
a) 2jours 13hrs 50min 12sec
b) 3jours 1hr 54min 54sec
c) 0jour 12hrs 4min 17sec
d) 2jours 13hrs 50min 22sec
e) 2jours 13hrs 51min 23sec
f) 2jours 13hrs 51min 23sec
g) 2jours 13hrs 51min 24sec
h) 0jour 12hrs 5min 0sec

\*--------------------------------------*/


