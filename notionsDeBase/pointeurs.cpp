
#include <iostream>

void fct(int *p) {
    *p = 7;
}

int main() {
    int *p; // Déclaration d'un pointeur à une variable int
    int a = 2;
    int x;


    p = &a; // & indique l'adresse d'une variable
    x = 3;
    fct(&x); // x = 7

    std::cout << "*p=" << *p
            << ", adresses p et &a=" << &a
            << ", x=" << x
            << std::endl;

    int b = 3;
    const int c = 2;
    int const *pa; // pointeur à des const int

    pa = &b; // ne peut pas être utilisé pour modifier b

    const int *pb = &b; // pointeur constant à des int


    int const* const pa2 = &a; // pointeur constant à des const int

    int *px; // pointeur à des entiers
    int **ppx; // pointeur à un pointeur

    int y; // entier

    px = &x;
    *px = 8;
    ppx = &px;

    std::cout << "*px=" << *px << ", **ppx=" << **ppx << std::endl;


    *ppx = &y;
    **ppx = 7;

    /*--------------- résultat ------------------------*\
      *p=2, adresses p et &a=0x7fff5fbffa4c, x=7
      *px=8, **ppx=8
    \*-------------------------------------------------*/
}
