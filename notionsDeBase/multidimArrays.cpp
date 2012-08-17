//// Cours : CSI2772
//// Passage des paramètres


#include <iostream>

//Passage par valeur:
int fct(int a) {
    a += 2;
    return 2*a;


}

//Passage par adresse:
int fct2(int *a) {
*a = (*a)*2;
return *a;


}

//Retour d'adresse:
int *fct3(int *a) {
*a = (*a)*2;
return a;


}

// **À ne jamais faire!!**
// On ne retourne jamais l'adresse d'une variable locale!!
 int *fct4(int *a) {
 int b;
 b = (*a)*2;
 return &b;


}

// Passage par référence:
int fct5(int &a) {
a = a*2;
return a;


}

// **À ne jamais faire!!**
// On ne retourne jamais une référence à une variable locale!!
 int fct6(int a) {
 a = a*2;
 return a;


}

// Retour de pointeur
int &fct7(int *a) {
*a = (*a)*2;
return *a;


}

int main() {
    int x = 2, y;

    y = fct(x); // x = 2; y = 8
    std::cout << "1: x= " << x << ", y= " << y << std::endl;

    y = fct2(&x); // x = 4, y = 4;
    std::cout << "2: x= " << x << ", y= " << y << std::endl;

    int *p;
    p = fct3(&x); // x = 8, *p = 8, p = &x
    std::cout << "3: x= " << x << ", *p= " << *p  << ", p= " << p <<  std::endl;

    y = fct5(x); // x = 16, y = 16
    std::cout << "4: x= " << x << ", y= " << y << std::endl;

    int &c = fct7(&x); // x = 32, c = 32
    std::cout << "5: x= " << x << ", c= " << c << std::endl;

    int d = fct(fct7(&x)); // d = 128, x = 64
    std::cout << "6: d= " << d << ", x= " << x << std::endl;

    int e = fct2(&fct7(&x)); // e = 256, x = 256
    std::cout << "7: e= " << e << ", x= " << x << std::endl;


}


