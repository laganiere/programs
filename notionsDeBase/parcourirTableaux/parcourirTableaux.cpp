#include <iostream>

int a[10];
int b[3] = { 1, 2, 3 };

void fct(int *p) {
	*p = 7;
	*(p + 2) = 9;
	p++; // pointe a l'entier suivant
	*p = 8;
}

int main() {
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *p;

	// avec pointeurs
	for (p = a; p < a + 10; p++) {
		*p = 2;
	}

	// avec boucle for reguliere
	for (int i = 0; i< 10; i++) {
		a[i]++;
	}

	std::cout << "Tableaux a: {";
	// avec boucle for indexee
	for (int v : a) { // attention v est une copie
		std::cout << v;
	}
	std::cout << "}" << std::endl;

	std::system("pause");

	/*--------------- resultat ------------------------*\
	Tableaux a: {3333333333}
	\*-------------------------------------------------*/
}