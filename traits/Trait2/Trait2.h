
#ifndef TRAIT2_H
#define TRAIT2_H
#include <math.h>
#include <ostream>
#include <iostream>
using namespace std;

template <typename T>
        class Pile{
    T dessus();
};

template <typename T>
        ostream operator<<(ostream &out, const Pile<T> &p){
    return out << p.dessus();
}

template <class T>
        struct est_pointeur{
    static const bool valeur=false;
};

template<class T>
struct est_pointeur<T*>{
    static const bool valeur = true;
};

#endif // TRAIT2_H
