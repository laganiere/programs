
#include <iostream>

int main() {
    int a(5);
    int &r1= a;
    int &r2(a);
    int * const p(&a); // ressemble a une ref

    // long &b(a); NON! pas de changement de types
    // int &c(5); NON! pas de reference sur une valeur

    const int &d(5); // int tmp(5); const int &d(tmp);
    double e(5.5);

    const int &f = a + e;

    const int &g = e;
    // int &h; NON! doit etre initialise
}
