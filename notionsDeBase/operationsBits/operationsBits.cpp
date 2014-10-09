
#include <iostream>

int main()
{
    char a = 0x75;
    char b = 0x0F;
    int x(5); // 101
    int n(2); 
    int y(1);

    if ((x >> n) & 0x1) {
        std::cout << "Vrai car le bit n de x est à 1."
                << std::endl;
    }
    else {
        std::cout << "Faux car le bit n de x n'est pas 1."
                << std::endl;
    }

    // Attention, l'ordre d'évaluation est garantie seulement
    // pour les opérateurs && et ||

    // if ((x=a+i) < x*x -100)
    // NON! Résultat indéterminé

    return 0;

    /*--------------- résultat ------------------------*\
      Vrai car le bit n de x est à 1.
    \*-------------------------------------------------*/
}
