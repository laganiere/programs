#include "Horloge5.h"
#include "PointeurIntelligent.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

    PointeurIntelligent<Horloge>
fonction() {

    cout << "fonction() commence ici" << endl;

    PointeurIntelligent<Horloge> p ;

    p= new Horloge(3601);

    cout << "fin de fonction()" << endl;

    return p;
}

    // Source
    PointeurIntelligent<Horloge> Source(){
        static long temps = 60;
        return PointeurIntelligent<Horloge>(
                                    new Horloge(temps++));
    }

    // Drain
    void Drain(PointeurIntelligent<Horloge> h){
        cout << "drain de : " << *h << endl;
    }

int main() {

    cout << "appel de fonction()" << endl;

    PointeurIntelligent<Horloge> ptr1= fonction();
    cout << "retour a main()" << endl;

    cout << "a) " << ++(*ptr1) << endl;

    cout << "source et drain" << endl;

    PointeurIntelligent<Horloge> ptr2 = Source();

    PointeurIntelligent<Horloge> ptr3 = Source();

    // ptr3 perd la propriete de son objet
    cout << "affectation" << endl;
    ptr2 = ptr3;

    cout << "b)" << *ptr2 << endl;
    cout << "c)" << *ptr3 << endl;

    cout << "appel a la fonction Drain()" << endl;
    Drain(ptr2);
    // l'objet de ptr2 a ete detruit!

    // Pour cette raison, il ne faut pas utiliser ces pointeurs
    // dans la STL...
    // Par exemple le tri d'un vector de pointeurs pourrait
    // drainer des objets (par exemple, les pivots)

    cout << "fin de main()" << endl;

    return 0;
}

/*--------------- resultat ---------------*\
appel de fonction()
fonction() commence ici
PointeurIntelligent::constructeur-ptr
-> constructeur de 0jour 1hr 0min 1sec
op=(T*): prise de possession
fin de fonction()
PointeurIntelligent::constructeur-copieur(): changement de proprio
PointeurIntelligent::destructeur:
retour a main()
a) 0jour 1hr 0min 2sec
source et drain
-> constructeur de 0jour 0hr 1min 0sec
PointeurIntelligent::constructeur-ptr
-> constructeur de 0jour 0hr 1min 1sec
PointeurIntelligent::constructeur-ptr
affectation
-> destructeur de 0jour 0hr 1min 0sec
op=(): changement de proprio
b)0jour 0hr 1min 1sec
c)0jour 0hr 1min 1sec
appel a la fonction Drain()
PointeurIntelligent::constructeur-copieur(): changement de proprio
drain de : 0jour 0hr 1min 1sec
PointeurIntelligent::destructeur: -> destructeur de 0jour 0hr 1min 1sec

fin de main()
PointeurIntelligent::destructeur:
PointeurIntelligent::destructeur:
PointeurIntelligent::destructeur: -> destructeur de 0jour 1hr 0min 2sec
\*--------------------------------------*/

