
#include "point2D.h"
#include "rectangle.h"
#include "carre.h"
#include "triangle.h"
#include "cercle.h"
#include <iostream>

using namespace std;

int main()
{
//    Point2D *p  [8];
//    p[0] = new Rectangle(2.3, 4.5, 5, 6);
//    p[1] = new Rectangle(8.3, 4);
//    p[2] = new Carre(2, 4, 7);
//    p[3] = new Carre(5);
//    p[4] = new Cercle(10, 13.2, 9);
//    p[5] = new Cercle(2);
//    p[6] = new Triangle(2.4, 9.6, 2, 3, 4);
//    p[7] = new Triangle(2, 3, 4);

//    for (int i = 0; i < 8; i++) {
//        cout << p[i]->toString() << endl;
//    }

    Triangle t(3, 4, 5);
    Carre c(4, 5, 7);
    double x1, y1, x2, y2;
    c.getBoundaries(x1, y1, x2, y2);

    cout << "(" << x1 << ", " << y1 << ") (" << x2 << ", " << y2 << ")" << endl;


}
