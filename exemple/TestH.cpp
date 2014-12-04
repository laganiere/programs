
#include "Horloge5.h"
#include <memory>
#include <vector>
#include <iostream>
#include <stdlib.h>
using namespace std;

    auto_ptr<Horloge>
fonction1() {

    cout << "fonction1() commence ici" << endl;

    auto_ptr<Horloge> p(new Horloge(17723)) ;

    cout << "fin de fonction1()" << endl;

    return p;
}


void fonction2(){
    auto_ptr<Horloge> pt1(new Horloge);
    auto_ptr<Horloge> pt2;
    pt2=pt1;

    // pt1->sec(); erreur! le ptr est null
}

void fonction3(){
    // Transferer la propriete d'un auto_ptr a un autre
    auto_ptr<Horloge> pt1( new Horloge);
    auto_ptr<Horloge> pt2;

    int i;
    i= pt1->hr(); // OK

    pt2 = pt1;  // maintenant le pointeur appartient a pt2
                // et non plus a pt1

    i= pt2->hr(); // OK
    i= pt1->hr(); // nouvel version de auto_ptr... illegal?

    // Utilisation de reset()
    auto_ptr<Horloge> pt3( new Horloge(1) );
    pt3.reset( new Horloge(2) );
    // Supprime la premiere Horloge qui etait allouee
    // avec "new Horloge(1)"

} // quand on sort de la portee, le destructeur de pt2 supprime
  // le pointeur, mais pt1 ne change pas pt3 sort de la portee
  // et la deuxieme Horloge est aussi supprimee

int main() {

    cout << "main() commence ici" << endl;

    cout << "appel de fonction1()" << endl;
    auto_ptr<Horloge> ptr1= fonction1();
    cout << "retour a main()" << endl;

    cout << "a) " << *ptr1 << endl;

    (*ptr1)++;

    cout << "b) " << *ptr1 << endl;

    Horloge* ptr2 = ptr1.release();
    delete ptr2;

    cout << "fin de main()" << endl;

    unique_ptr<Horloge> upt1(new Horloge(3600));

//  erreur! plus de constructeur copieur
//  unique_ptr<Horloge> upt2(upt1);

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

    return 0;
}

/*--------------- resultat ---------------*\
main() commence ici
appel de fonction1()
fonction1() commence ici
-> constructeur de 0jour 4hrs 55mins 23sec
fin de fonction1()
retour a main()
a) 0jour 4hrs 55mins 23sec
-> constructeur copieur avec 0jour 4hrs 55mins 23sec
-> constructeur copieur avec 0jour 4hrs 55mins 23sec
-> destructeur de 0jour 4hrs 55mins 23sec
-> destructeur de 0jour 4hrs 55mins 23sec
b) 0jour 4hrs 55mins 24sec
-> destructeur de 0jour 4hrs 55mins 24sec
fin de main()
-> constructeur de 0jour 1hr 0min 0sec
non
oui
-> destructeur de 0jour 1hr 0min 0sec
\*--------------------------------------*/


