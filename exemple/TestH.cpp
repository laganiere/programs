
#include "Horloge5.h"
#include <memory>
#include <vector>
#include <iostream>
#include <stdlib.h>
using namespace std;

    shared_ptr<Horloge>
fonction1() {

    cout << "fonction1() commence ici" << endl;

    shared_ptr<Horloge> p(new Horloge(7205)) ;

    cout << "fin de fonction1()" << endl;

    return p;
}


void fonction2(shared_ptr<Horloge> ph){

    cout << "fonction2() commence ici" << endl;

    cout << ph->hr() << endl;
    cout << "3' Compte: " << ph.use_count() << endl;

    shared_ptr<Horloge> phh;
    phh= ph;

    cout << "3'' Compte: " << ph.use_count() << endl;

    cout << "fin de fonction2()" << endl;
}


int main() {

    cout << "main() commence ici" << endl;

    cout<< endl << "Shared ptr" << endl;

    shared_ptr<Horloge> pt1( new Horloge(18061));
    shared_ptr<Horloge> pt2;

    cout << "1. Compte (pt1): " << pt1.use_count() << endl;
    cout << "   Compte (pt2): " << pt2.use_count() << endl;

    pt2= pt1;

    cout << pt1->hr() << endl;
    cout << pt2->hr() << endl;

    cout << "2. Compte (pt1): " << pt1.use_count() << endl;
    cout << "   Compte (pt2): " << pt2.use_count() << endl;

    cout << "appel de fonction1()" << endl;
    shared_ptr<Horloge> ptr= fonction1();
    cout << "retour a main()" << endl;

    cout << "a) " << *ptr << endl;
    (*ptr)++;
    cout << "b) " << *ptr << endl;

    ptr= pt1;

    cout << "3. Compte (pt1): " << pt1.use_count() << endl;
    cout << "   Compte (pt2): " << pt2.use_count() << endl;

    cout << "appel de fonction2()" << endl;
    fonction2(pt1);
    cout << "retour a main()" << endl;

    cout << "4. Compte (pt1): " << pt1.use_count() << endl;
    cout << "   Compte (pt2): " << pt2.use_count() << endl;

    pt1.reset();

    cout << "5. Compte (pt1): " << pt1.use_count() << endl;
    cout << "   Compte (pt2): " << pt2.use_count() << endl;

    cout<< endl << "Weak ptr" << endl;
    weak_ptr<Horloge> wp(pt2);

    cout << "6. Compte (pt2): " << pt2.use_count() << endl;
    cout << "   Compte (wp): " << wp.use_count() << endl;

//  erreur! pas de -> ou *
//  wp->hr();

    ptr= wp.lock();
    cout << ptr->hr() << endl;

    cout << "7. Compte (pt2): " << pt2.use_count() << endl;
    cout << "   Compte (wp): " << wp.use_count() << endl;
    ptr.reset();
    cout << "8. Compte (pt2): " << pt2.use_count() << endl;
    cout << "   Compte (wp): " << wp.use_count() << endl;
    cout << (wp.expired()?"oui":"non") << endl;

    pt2.reset();
    cout << "9. Compte (pt2): " << pt2.use_count() << endl;
    cout << "   Compte (wp): " << wp.use_count() << endl;
    cout << (wp.expired()?"oui":"non") << endl;

    cout<< endl << "Unique ptr" << endl;
    unique_ptr<Horloge> upt1(new Horloge(3600));

//  erreur! pas de constructeur copieur
//  unique_ptr<Horloge> upt2(upt1);
//  erreur! pas de =
//    unique_ptr<Horloge> upt2;
//    upt2= upt1;

    if (!upt1)
        cout << "oui" << endl;
    else
        cout << "non" << endl;

    //seule la 'move semantic' est permise
    vector<unique_ptr<Horloge>> horloges;
    horloges.push_back(move(upt1));

    if (!upt1)
        cout << "oui" << endl;
    else
        cout << "non" << endl;

    cout << "fin de main()" << endl;

    return 0;
}

/*--------------- resultat ---------------*\
main() commence ici

Shared ptr
-> constructeur de 0jour 5hrs 1min 1sec
1. Compte (pt1): 1
   Compte (pt2): 0
5
5
2. Compte (pt1): 2
   Compte (pt2): 2
appel de fonction1()
fonction1() commence ici
-> constructeur de 0jour 2hrs 0min 5sec
fin de fonction1()
retour a main()
a) 0jour 2hrs 0min 5sec
-> constructeur copieur avec 0jour 2hrs 0min 5sec
-> constructeur copieur avec 0jour 2hrs 0min 5sec
-> destructeur de 0jour 2hrs 0min 5sec
-> destructeur de 0jour 2hrs 0min 5sec
b) 0jour 2hrs 0min 6sec
-> destructeur de 0jour 2hrs 0min 6sec
3. Compte (pt1): 3
   Compte (pt2): 3
appel de fonction2()
fonction2() commence ici
5
3' Compte: 4
3'' Compte: 5
fin de fonction2()
retour a main()
4. Compte (pt1): 3
   Compte (pt2): 3
5. Compte (pt1): 0
   Compte (pt2): 2

Weak ptr
6. Compte (pt2): 2
   Compte (wp): 2
5
7. Compte (pt2): 2
   Compte (wp): 2
8. Compte (pt2): 1
   Compte (wp): 1
non
-> destructeur de 0jour 5hrs 1min 1sec
9. Compte (pt2): 0
   Compte (wp): 0
oui

Unique ptr
-> constructeur de 0jour 1hr 0min 0sec
non
oui
fin de main()
-> destructeur de 0jour 1hr 0min 0sec
\*--------------------------------------*/


