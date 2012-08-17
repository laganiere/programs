
#include "Horloge5.h"
#include "PointeurIntelligent.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

    PointeurIntelligent<Horloge>
fonction() {

    cout << "fonction() commence ici" << endl;

    PointeurIntelligent<Horloge> p ;

    p= new Horloge(17723);

    cout << "fin de fonction()" << endl;

    return p;
}

    //Source et drain
    PointeurIntelligent<Horloge> Source(){
        static long temps = 1000;
        return PointeurIntelligent<Horloge>(new Horloge(temps++));
    }

    void Drain(PointeurIntelligent<Horloge> h){
        cout << "drain de : " << h << endl;
    }

    int main() {

    cout << "testG() commence ici" << endl;

    cout << "appelle de fonction()" << endl;
    PointeurIntelligent<Horloge> ptr1= fonction();
    cout << "retour à testG()" << endl;

    cout << "a) " << *ptr1 << endl;

//    (*ptr1)++;

//    cout << "b) " << *ptr1 << endl;

    cout << "source et drain" << endl;

    PointeurIntelligent<Horloge> ptr2 = Source();

    PointeurIntelligent<Horloge> ptr3 = Source();
    *ptr2 = *ptr3;
    system("PAUSE");
    return 0;
    Drain(ptr3);
    cout << *ptr2 << endl;

    cout << "fin de testG()" << endl;

    system("PAUSE");
    return 0;
}

/*--------------- résultat ---------------*\

testG() commence ici
appelle de fonction()
fonction() commence ici
-> constructeur de 0jour 4hrs 55min 23sec
fin de fonction()
retour à testG()
a) 0jour 4hrs 55min 23sec
fin de testG()
-> destructeur de 0jour 4hrs 55min 23sec

\*--------------------------------------*/

