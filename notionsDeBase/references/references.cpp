
#include <iostream>

int main() {
    int a(5);

    // long &b(a); NON!

    // int &c(5); NON!
    const int &d(5);
    double e(5.5);

    const int &f = a + e;

    const int &g = e;
    // int &h; NON!
}
