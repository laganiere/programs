
#include <iostream>

#include "forme.h"
#include "triangle.h"

int main()
{
    Forme *s1;
    Triangle *t1;

    // En cas d'erreur, s1 = 0
    s1 = dynamic_cast<Forme*>(t1);

    // En cas d'erreur, un bad_cast_exception est lancé
    Forme &s2 = dynamic_cast<Forme&>(*t1);
}
