
#include <iostream>

int a[10];
int b[3] = {1, 2, 3};

void fct(int *p) {
    *p = 7;
    *(p+2) = 9;
    p++; // pointe a l'entier suivant
    *p = 8;
}

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p;



    for (p = a; p < a+10; p++) {
        *p = 2;
    }

    std::cout << "Tableaux a: {";
    for (int i = 0; i< 10; i++) {
        std::cout << a[i];
    }
    std::cout << "}" << std::endl;

    /*--------------- résultat ------------------------*\
      Tableaux a: {2222222222}
    \*-------------------------------------------------*/
}
