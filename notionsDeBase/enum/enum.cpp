
#include <iostream>

int main() {
	enum Couleur { Rouge, Vert, Bleu };
	enum Couleur c;
	c = Rouge; // ne peut prendre que les valeurs enumerees
	std::cout << "Couleur c = " << c << std::endl;

	// en C les enumeration sont en fait des entiers
	if (c == 1)
		std::cout << "C'est vert" << std::endl;
	c = static_cast<Couleur>(6); // legal mais inconsistant

	// nouveaux enum C++11
	// pas de conversion implicite vers int
	enum class Couleur2 { Rouge, Vert, Bleu };

	Couleur2 couleur(Couleur2::Rouge);

	if (couleur == Couleur2::Vert)
		std::cout << "C'est vert" << std::endl;
	else
		std::cout << "Ce n'est pas vert" << std::endl;

    /*--------------- resultat ------------------------*\
     Couleur c = 0
     Ce n'est pas vert
    \*-------------------------------------------------*/
}
