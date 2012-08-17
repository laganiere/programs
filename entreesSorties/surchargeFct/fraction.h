#ifndef FRACTION_H
#define FRACTION_H

#include <math.h>

class Fraction {
    int x, y;

public:
    Fraction(int x, int y): x(x), y(y) { }

    Fraction(long l) {
        x = l;
        y = 1;
    }

};

#endif // FRACTION_H
