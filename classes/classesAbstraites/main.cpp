
#include "forme.h"
#include "rectangle.h"
#include "cercle.h"

int main()
{
   Forme *p[2];
   int nf = 2;

   p[0] = new Cercle(2);
   p[1] = new Rectangle(4, 5);

   for (int i = 0; i < nf; i++) {
        cout << "Périmètre : " << p[i]->getPerimetre();
        cout << " / Aire : " << p[i]->getAire() << endl;
    }

   /*--------------- résultat ------------------------*\
    Périmètre : 12.5664 / Aire : 12.5664
    Périmètre : 18 / Aire : 20
   \*-------------------------------------------------*/

}
