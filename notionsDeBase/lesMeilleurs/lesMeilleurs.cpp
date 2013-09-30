
#include <iostream>

int* trouverLesMeilleurs(int a[], int dim, int n) {

    // n < dim !
    int *meilleur= new int[n];

    for (int i = 1; i < n; i++) {
        meilleur[i] = INT_MIN;
    meilleur[0] = a[0];

    for (int i = 1; i < dim; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i] > meilleur[j]) {
                    for (int k = n-1; k < j; k--) {
                        meilleur[k] = meilleur[k-1];
                    }
                    meilleur[j] = a[i];
                 }
             }
        }
    }

    return meilleur;
}

int main() {
    int a[10] = {8, 7, 4, 1, 3, 9, 12, 14, 2, 0};
    int *m = new int[3];
    int *p = trouverLesMeilleurs(a, 10, 3, m);

    // p[0] = 14, p[1] = 14, p[2] = 14
    std::cout << "p[0]=" << p[0]
            << ", p[1]=" << p[1]
            << ", p[2]=" << p[2]
            << std::endl;

    delete[] p;
    return 1;

    /*--------------- résultat ------------------------*\
      p[0]=14, p[1]=14, p[2]=14
    \*-------------------------------------------------*/
}
