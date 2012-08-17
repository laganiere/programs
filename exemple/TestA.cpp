
#include <iostream>
#include <stdlib.h>
#include "Horloge1.h"

int main ()
{
        Horloge t1(2,1,45,30);
        Horloge t2(35672);
        Horloge t3;

        cout << t1.toString() << endl;
        cout << t2.toString() << endl;
        cout << t3.toString() << endl;
        cout << t2.hr() << endl;

        system ("pause");
        return 0;
}

/*--------------- résultat ---------------*\

2jours 1hr 45min 30sec
0jour 9hrs 54min 32sec
0jour 0hr 0min 0sec
9

\*--------------------------------------*/


