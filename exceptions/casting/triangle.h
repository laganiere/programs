
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "forme.h"

class Triangle: public Forme {
private:
    int a, b, c;

public:
    int getPerimetre() { return a+b+c; }

    Triangle(): Forme(), a(0), b(0), c(0) {}

    Triangle(int cote): Forme(1, 1), a(cote), b(cote), c(cote) {}

    Triangle (const Triangle &t): Forme(t) {
        a = t.a; b = t.b; c = t.c;
    }

};

#endif // TRIANGLE_H
