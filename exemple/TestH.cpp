
#include "Horloge5.h"
#include "auto_ptr.h"
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
    // Transférer la propriété d'un auto_ptr ‡ un autre
    auto_ptr<Horloge> pt1( new Horloge);
    auto_ptr<Horloge> pt2;

    //pt1->DoSomething(); // OK

    pt2 = pt1;  // maintenant le pointeur appartient à pt2
                // et non plus à pt1

    //pt2->DoSomething(); // OK

    // Utilisation de reset()
    auto_ptr<Horloge> pt3( new Horloge(1) );
    pt3.reset( new Horloge(2) );
    // Supprime la première Horloge qui était allouée
    // avec "new Horloge(1)"

} // quand on sort de la portée, le destructeur de pt2 supprime
  // le pointeur, mais pt1 ne change pas pt3 sort de la portÈe
  // et la deuxième Horloge est aussi supprimÈe



    int main() {

    cout << "testH() commence ici" << endl;

    cout << "appel de fonction1()" << endl;
    auto_ptr<Horloge> ptr1= fonction1();
    cout << "retour à testG()" << endl;

    cout << "a) " << *ptr1 << endl;

    (*ptr1)++;

    cout << "b) " << *ptr1 << endl;

    Horloge* ptr2 = ptr1.release();
    delete ptr2;

    cout << "fin de testG()" << endl;

    system("PAUSE");
    return 0;

//    auto_ptr<Horloge> pt2( pt1 ); -> illégal
//    auto_ptr<Horloge> pt3;
//    pt3 = pt1;                    -> illégal
//    pt1.release();                -> illégal
//    pt1.reset( new Horloge );     -> illégal

}

    /*--------------- résultat ---------------*\

    testH() commence ici
    appelle de fonction1()
    fonction1() commence ici
    -> constructeur de 0jour 4hrs 55min 23sec
    fin de fonction1()
    retour à testG()
    a) 0jour 4hrs 55min 23sec
    fin de testH()
    -> destructeur de 0jour 4hrs 55min 23sec

    \*--------------------------------------*/


