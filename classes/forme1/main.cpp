
#include "forme.h"
#include "rectangle.h"
#include "cercle.h"

int main()
{
   Rectangle *r = new Rectangle(3, 2, 6, 7);
   Cercle *c = new Cercle(4, 3, 5);

   Forme *f[2];
   int nf = 2;

   f[0] = r;
   f[1] = c;

   double pr = r->getPerimetre();
   // pointe à la classe Rectangle
   cout << "Perimètre du rectangle : " << pr << endl;

   double pc = c->getPerimetre(); // pointe à la classe Cercle
   cout << "Perimètre du cercle : " << pc << endl;

   for (int i = 0; i < nf; i++) {
       cout << "Perimètre de la forme : ";
       cout << f[i]->getPerimetre() << endl;
       // pointe à la classe Forme
    }

   /*--------------- résultat ------------------------*\
    Perimètre du rectangle : 26
    Perimètre du cercle : 31.4159
    Perimètre de la forme : 0
    Perimètre de la forme : 0
   \*-------------------------------------------------*/

}
