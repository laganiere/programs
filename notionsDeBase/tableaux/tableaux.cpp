
#include <iostream>

int a[10];
int b[3] = {1, 2, 3};

void fct(int *p) {
    *p = 7;
    *(p+2) = 9;
    p++; // pointe a l'entier suivant
    *p = 8;
}

int main() {
    int a[10];
    fct(&(a[2]));
    // a[2] = 7, a[3] = 8, a[4] = 9

    std::cout << "a[2]=" << a[2]
            << ", a[3]=" << a[3]
            << ", a[4]=" << a[4]
            << std::endl;

    /*--------------- résultat ------------------------*\
      a[2]=7, a[3]=8, a[4]=9

    \*-------------------------------------------------*/
}
