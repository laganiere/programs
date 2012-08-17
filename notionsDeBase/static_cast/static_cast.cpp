
#include <iostream>

int main() {
    int *p = new int[5]; // variable
    int a[5]; // constante

    p[2] = 2;

    delete[] p;

    float *pp = new float;
    *pp = 2.1;
    delete pp;
}
