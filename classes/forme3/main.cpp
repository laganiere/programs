
#include <iostream>
#include "triangle.h"

using namespace std;

int main()
{

   // Triangle x;
   // -> ne fonctionne pas puisqu'il n'y a pas
   // de constructeur par défaut.  Si on cré un
   // constructeur, il n'y a plus de constructeur
   // vide à moins qu'on le crée aussi.

   Triangle x(1, 2, 3);
   Triangle y(4, 5, 7);

   int a = Triangle::getNumberOfTriangles();
   cout << "Il y a " << a << " triangles de définis" << endl;

   int b = x.getNumberOfTriangles();
   cout << "Il y a " << b << " triangles de définis" << endl;

}
