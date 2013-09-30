
#include <iostream>

int main() {
    int a(5);
    int &r1= a;
    int &r2(a);
    int * const p(&a); // equivalent a une ref

    // long &b(a); NON!
    // int &c(5); NON!

    const int &d(5); // int tmp(5); const int &d(tmp);
    double e(5.5);

    const int &f = a + e;

    const int &g = e;
    // int &h; NON!
}
