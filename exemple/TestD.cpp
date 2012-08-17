
#include <iostream>
#include <stdlib.h>
#include "Horloge4.h"

    int main() {

        Horloge t1(2,1,45,30);
        Horloge t2(516473);
        Horloge t3;

        cout << "a) " << t1 << endl;
        cout << "b) " << t2 << endl;

        t3= t1 + t2;
        cout << "c) " << t3 << endl;

        // opérateur int 516473- 25
        //si on enlève "explicit" ceci devient ambigu
        t3= t2 - 25;
        // t3.operator=(operator-(operator int(t2), 25))
        cout << "d) " << t3 << endl;

        // conversion explicite reste permise
        t3+= static_cast<Horloge>(25);
        cout << "e) " << t3 << endl;

        int t;
        // (operator-(t2,t1).operator int)
        t= t2 - t1;
        cout << "f) " << t << endl;

        system("PAUSE");
        return 0;
}

/*--------------- résultat ---------------*\

a) 2jours 1hr 45min 30sec
b) 5jours 23hrs 27min 53sec
c) 8jours 1hr 13min 23sec
d) 5jours 23hrs 27min 28sec
e) 5jours 23hrs 27min 53sec
f) 337343

\*--------------------------------------*/


