

#include <iostream>
#include <stdlib.h>
#include "Horloge5.h"

Horloge horloge1(60);

    void
fonction1() {

    cout << "fonction1() débute ici" << endl;

    static Horloge horloges(240);
    Horloge horloge(300);

    cout << "fin de fonction1()" << endl;
}

    Horloge
fonction2(Horloge horloge) {

    cout << "fonction2() débute ici" << endl;

    Horloge horlogel(360);

    cout << "fin de fonction2()" << endl;

    return Horloge(horlogel + 60);
}


    void testE() {

    cout << "testE() débute ici" << endl;

    Horloge horloge2(120);

    cout << "appelle de fonction1()" << endl;
    fonction1();
    cout << "retour à testE()" << endl;
    cout << "appelle de fonction1()" << endl;
    fonction1();
    cout << "retour à testE()" << endl;

    Horloge horloge3(180);

    cout << "appelle de fonction2()" << endl;
    horloge3= fonction2(horloge2);
    cout << "retour à testE()" << endl;

    cout << "fin de testE()" << endl;


}

    int main(){
        testE();

        system("PAUSE");
        return 0;
    }

/*--------------- résultat ---------------*\

-> constructeur de 0jour 0hr 1min 0sec
testE() débute ici
-> constructeur de 0jour 0hr 2min 0sec
appelle de fonction1()
fonction1() débute ici
-> constructeur de 0jour 0hr 4min 0sec
-> constructeur de 0jour 0hr 5min 0sec
fin de fonction1()
-> destructeur de 0jour 0hr 5min 0sec
retour à testE()
appelle de fonction1()
fonction1() débute ici
-> constructeur de 0jour 0hr 5min 0sec
fin de fonction1()
-> destructeur de 0jour 0hr 5min 0sec
retour à testE()
-> constructeur de 0jour 0hr 3min 0sec
appelle de fonction2()
-> constructeur copieur avec 0jour 0hr 2min 0sec
fonction2() débute ici
-> constructeur de 0jour 0hr 6min 0sec
fin de fonction2()
-> constructeur de 0jour 0hr 7min 0sec
-> destructeur de 0jour 0hr 6min 0sec
-> destructeur de 0jour 0hr 2min 0sec
-> destructeur de 0jour 0hr 7min 0sec
retour à testE()
fin de testE()
-> destructeur de 0jour 0hr 7min 0sec
-> destructeur de 0jour 0hr 2min 0sec
-> destructeur de 0jour 0hr 4min 0sec
-> destructeur de 0jour 0hr 1min 0sec

\*--------------------------------------*/

