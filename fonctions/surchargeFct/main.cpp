
#include <iostream>
#include "fraction.h"

using namespace std;

void fct(char) {
    cout << "fct(char) appelée" << endl;
}

void fct(double) {
    cout << "fct(double) appelée" << endl;
}

void fct(int, float) {
    cout << "fct(int, float) appelée" << endl;
}

void fct(int, double) {
    cout << "fct(int, double) appelée" << endl;
}

void add(Fraction &f, long l) {
    cout << "add(Fraction &f, long l) appelée" << endl;
}

void add(long l, Fraction &f) {
    cout << "add(long l, Fraction &f) appelée" << endl;
}

void add(Fraction &f1, Fraction &f2) {
    cout << "add(Fraction &f1, Fraction &f2) appelée" << endl;
}

int main()
{
    //fct(1);
    // -> erreur de compilation:
    // ambiguité entre fct(double) et fct(char)

    double d = 2.0;
    char x = 2;

    fct(x, d);
    // arg1 -> fct(int, float) ou fct(int, double)
    // arg2 -> fct(int, double)
    // fct(int, double) est l'intersection entre les deux

    //fct(x, x);
    // arg1 -> fct(int, float) ou fct(int, double)
    // arg2 -> fct(int, float) ou fct(int, double)
    // -> erreur de compilation: ambiguité

    // Note: Pour les prochaines conversions, une
    // conversion est définie de long à Fraction

    Fraction f(2, 3);
    add(f, 23);
    // arg1 -> add(Fraction, long) ou add(Fraction, Fraction)
    // arg2 -> add(Fraction, long)
    // add(Fraction, long) est l'intersection entre les deux

    //add(21, 23);
    // arg1 -> add(long, Fraction)
    // arg2 -> add(Fraction, long)
    // -> erreur de compilation: aucun match trouvé


    /*----------------- résultat ----------------------*\
    fct(int, double) appelée
    add(Fraction &f, long l) appelée
    \*-------------------------------------------------*/

}
