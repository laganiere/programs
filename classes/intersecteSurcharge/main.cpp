
#include <iostream>
#include "rectangle.h"
#include "carre.h"
#include "triangle.h"

using namespace std;

int main()
{
    Rectangle r(3, 4, 4, 4);
    Carre c(4, 4, 3);
    Triangle t(2, 2, 2, 2, 2);
    Rectangle r2(10, 10, 2, 2);


    r.intersecte(c);
    r.intersecte(r2);
    t.intersecte(r);
}

