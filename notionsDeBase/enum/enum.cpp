
#include <iostream>

int main() {
    enum Couleur {Rouge, Vert, Bleu};
    enum Couleur c;
    c = Rouge; // ne peut prendre que les valeurs énumérées
    std::cout << "Couleur c = " << c << std::endl;

    /*--------------- résultat ------------------------*\
     Couleur c = 0
    \*-------------------------------------------------*/
}
