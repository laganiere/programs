
#include "forme.h"
#include "rectangle.h"
#include "cercle.h"
#include "triangle.h"
#include "carre.h"

int main()
{
   Rectangle *r = new Rectangle(3, 2, 6, 7);
   Cercle *cle = new Cercle(4, 3, 5);
   Triangle *t = new Triangle(2, 2, 4, 6, 3);
   Carre *car = new Carre(5, 4, 9);

   Forme *f[4];
   int nf = 4;

   f[0] = r;
   f[1] = cle;
   f[2] = t;
   f[3] = car;

   double pr = r->getPerimetre(); // pointe à la classe Rectangle
   cout << "Perimètre du rectangle : " << pr << endl;

   double pcle = cle->getPerimetre(); // pointe à la classe Cercle
   cout << "Perimètre du cercle : " << pcle << endl;

   double pt = t->getPerimetre(); // pointe à la classe Cercle
   cout << "Perimètre du cercle : " << pt << endl;

   double pcar = car->getPerimetre(); // pointe à la classe Cercle
   cout << "Perimètre du cercle : " << pcar << endl;

   for (int i = 0; i < nf; i++) {
       cout << "Perimètre de la forme : ";
       cout << f[i]->getPerimetre() << endl;
       // pointe à la classe Point2D
    }

   /*--------------- résultat ------------------------*\
    Perimètre du rectangle : 26
    Perimètre du cercle : 31.4159
    Perimètre du cercle : 13
    Perimètre du cercle : 36
    Perimètre de la forme : 26
    Perimètre de la forme : 31.4159
    Perimètre de la forme : 13
    Perimètre de la forme : 36
   \*-------------------------------------------------*/

}
