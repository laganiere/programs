
#include "matrice.h"

// passage par valeur
// constructeur copieur implicitement appelé
Matrice fct1(Matrice m) {
    Matrice a; // appel au constructeur vide
    a.set(1, 1, m.get(1, 1));

    // retour par valeur
    // création d'un objet temporaire avec constructeur copieur
    return a;

} // destruction de m

// passage par référence
// aucun constructeur n'est appelé
Matrice fct2(const Matrice &m) {
    Matrice a;
    a.set(1, 1, m.get(1, 1));
    return a;
}

int main() {
    Matrice a;
    Matrice b;
    Matrice c;
    //Matrice b=1, c(3), e(3);
    //Matrice d[3] = {3, 4, 5};

    // affectation champ à champ
    // copie seulement le pointeur et pas les éléments
    c = fct1(b);

} // tous les destructeurs sont appelés
