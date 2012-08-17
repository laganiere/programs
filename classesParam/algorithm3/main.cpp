
#include "rectangle.h"
#include "carre.h"
#include "triangle.h"
#include "cercle.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void debarasse(Forme* &f) // référence à un pointeur
{
  if ( f->getAire() < 25) {

      cout << f->toString() << " a une aire de moins de 25."
                                                        << endl;
      delete f;
      f= 0;
  }
}

int main()
{
    vector<Forme*> v;
    v.push_back(new Triangle(2, 2, 2));
    v.push_back(new Carre(4, 5, 7));
    v.push_back(new Cercle(5));
    v.push_back(new Rectangle(9, 5));
    v.push_back(new Cercle(4, 6, 2));
    v.push_back(new Triangle(5, 4, 3, 5, 6));

    //Debarasse debarasse;
    vector<Forme*>::iterator it = v.begin();

    cout << "Le vecteur contient : " << endl;
    for (it = v.begin(); it != v.end(); it++) {
        cout << (*it)->toString() << endl;
    }
    cout << endl;

    for_each(v.begin(),v.end(), debarasse);
    v.erase(remove(v.begin(),v.end(),
                            static_cast<Forme *>(0)), v.end() );

    cout << endl;
    cout << "Le vecteur contient maintenant : " << endl;
    for (it = v.begin(); it != v.end(); it++) {
        cout << (*it)->toString() << endl;
    }
    cout << endl;

    /*--------------------- résultat -------------------------*\
        Le vecteur contient :
         Triangle (2x2x2) Ancrée au point (0, 0)
         Carre (7x7) Ancrée au point (4, 5)
         Cercle (5) Ancrée au point (0, 0)
         Rectangle (5x9) Ancrée au point (0, 0)
         Cercle (2) Ancrée au point (4, 6)
         Triangle (3x5x6) Ancrée au point (5, 4)

        Ancrée au point (0, 0) a une aire de moins de 25.
        Ancrée au point (4, 6) a une aire de moins de 25.
        Ancrée au point (5, 4) a une aire de moins de 25.

        Le vecteur contient maintenant :
         Carre (7x7) Ancrée au point (4, 5)
         Cercle (5) Ancrée au point (0, 0)
         Rectangle (5x9) Ancrée au point (0, 0)
    \*-------------------------------------------------------*/

}
