
#include <iostream>
#include "fonction.h"

int a(5);

int main() {
    int x = monEspace::fct(3);

    int a(7);
    a++; // a = 8
    std::cout << "a=" << a << std::endl;

    monEspace::a++;	// a = 2
    std::cout << "a=" << monEspace::a << std::endl;

    ::a++; // a = 6
    std::cout << "a=" << ::a << std::endl;

   /*--------------- résultat ------------------------*\
    a=8
    a=2
    a=6
   \*-------------------------------------------------*/
}
