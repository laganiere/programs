#include <iostream>

int* trouverLesMeilleurs(int a[], int dim, int n) {

    // n < dim !
    int *meilleur= new int[n];
    int *index= new int[n];

    // on cherche les n meilleurs
    for (int i = 0; i < n; i++) {

        meilleur[i]= INT_MIN;

        // pour chaque element
        for (int j = 0; j < dim; j++) {

            // est-ce que l'element courant
            // a deja ete selectionne?
            bool select(false);
            for (int k=0; !select && k<n; k++) {
                if (j == index[k])
                    select= true;
            }
            // si oui on passe au suivant
            if (select)
                continue;

            // est-ce un meilleur element?
            if (a[j] > meilleur[i]) {

                meilleur[i] = a[j];
                index[i] = j;
            }
        }
    }

    delete[] index;
    return meilleur;
}

int main() {
    int a[10] = {8, 9, 4, 1, 3, 7, 12, 14, 2, 0};
    int *p = trouverLesMeilleurs(a, 10, 3);

    std::cout << "p[0]=" << p[0]
            << ", p[1]=" << p[1]
            << ", p[2]=" << p[2]
            << std::endl;


    delete[] p; // attention aux risques de fuites de memoire
    // il est preferable de donner la responsabilite de l'allocation
    // et de la de-allocation a la meme fonction/classe.

    return 0;

    /*--------------- resultat ------------------------*\
      p[0]=14, p[1]=12, p[2]=9
    \*-------------------------------------------------*/
}
