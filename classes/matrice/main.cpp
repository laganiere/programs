
#include "matrice.h"

void fct1(Matrice &m) {
    m.set(2, 2, 4);
}

void fct2(Matrice *p) {
    // on peut utiliser une flèche lorsqu'un pointeur plutôt
    // que l'objet lui-même appelle une fonction.
    p -> set(1, 0, 3);

    // sinon, on doit déréférencer le pointeur à l'aide de
    // parenthèses
    (*p).set(0, 1, 4);
}

int main() {
    Matrice m1; // objet créé avec le constructeur à 0 args
    m1.set(1, 1, 3);

    Matrice m2;
    m2 = m1;

    fct1(m1);
    fct2(&m2);
}
