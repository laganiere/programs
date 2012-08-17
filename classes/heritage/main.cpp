
#include "forme.h"
#include "triangle.h"


int main() {
    Triangle t(5, 3, 3);
    Forme f;
    Forme *p;

    p = &f;
    p = &t;

    Point2D p2d(1, 2);
    t.setAncrage(p2d);
    // p->getPermietre(); // NON!

    Forme &ff(t);
    // Triangle &tt(f); // NON!
    Triangle *pt;
    // pt = &p; // NON!
    pt = reinterpret_cast<Triangle*>(p);
}
