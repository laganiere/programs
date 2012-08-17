
#include <iostream>
#include "forme.h"
#include "rectangle.h"
#include "cercle.h"
#include "carre.h"


int main()
{
   Rectangle *r1 = new Rectangle(1, 1, 6, 7);
   Rectangle *r2 = new Rectangle(9, 6);
   Cercle *cle1 = new Cercle(20, 20, 8);
   Cercle *cle2 = new Cercle(6);
   Carre *car1 = new Carre(5, 4, 9);
   Carre *car2 = new Carre(4);

   // la méthode intersecte dans forme appelle
   // la méthode virtuelle getLimites des types de
   // formes qui lui sont passés.
   cout << r1->toString() << r1->intersecte(*cle1)
                            << cle1->toString() << endl;
   cout << r1->toString() << r1->intersecte(*car1)
                            << car1->toString() << endl;
   cout << cle1->toString() << cle1->intersecte(*car1)
                            << car1->toString() << endl;
   cout << r2->toString() << r1->intersecte(*cle1)
                            << cle1->toString() << endl;
   cout << r2->toString() << r1->intersecte(*car1)
                            << car1->toString() << endl;
   cout << cle2->toString() << cle1->intersecte(*car2)
                            << car2->toString() << endl;


   /*--------------- résultat ------------------------*\
    Rectangle (7x6) Ancrée au point (1, 1)
        n'intersecte pas avec
    Cercle (8) Ancrée au point (20, 20)

    Rectangle (7x6) Ancrée au point (1, 1)
        intersecte avec
    Carre (9x9) Ancrée au point (5, 4)

    Cercle (8) Ancrée au point (20, 20)
        intersecte avec
    Carre (9x9) Ancrée au point (5, 4)

    Rectangle (6x9) Ancrée au point (0, 0)
        n'intersecte pas avec
    Cercle (8) Ancrée au point (20, 20)

    Rectangle (6x9) Ancrée au point (0, 0)
        intersecte avec
    Carre (9x9) Ancrée au point (5, 4)

    Cercle (6) Ancrée au point (0, 0)
        n'intersecte pas avec
    Carre (4x4) Ancrée au point (0, 0)
   \*-------------------------------------------------*/

}
