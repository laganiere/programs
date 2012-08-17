
#include <iostream>
#include "fonction.h"

int main () {

    int x = 1; // équivalent a int x(1);
    int y;

    y = fct(x);
    std::cout << "Après fct : y = " << y << std::endl;

    y = fct2(x);
    std::cout << "Après fct2 : y = " << y << std::endl;

    /*--------------- résultat ------------------------*\
      Après fct : y = 2
      Après fct2 : y = 4
    \*-------------------------------------------------*/
}
