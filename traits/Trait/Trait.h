
#ifndef TRAIT_H
#define TRAIT_H
#include <math.h>
#include <limits>
#include <ostream>
#include <iostream>
#include "Pile.h"
using namespace std;

template <typename T>
struct est_pointeur{
    static const bool valeur=false;
};

// specialisation
template<>
struct est_pointeur<T*>{
    static const bool valeur = true;
};


template<typename T>
struct trait_reel{
    static inline bool egal(T t1, T t2){
        return t1 == t2;}
    static const bool est_reel = false;
};

template<>
struct trait_reel<double>{
    static const bool est_reel = true;
    typedef double type_reel;
    static inline type_reel epsilon(){ return 0.0001;}
    static inline bool egal(type_reel t1, type_reel t2){
        return fabs(t1-t2)<epsilon();
    }
};

template<typename T>
ostream operator<<(ostream &out, const Pile<T> &p){
    if(trait_reel<T>::est_reel)
        out  << static_cast<int>(p.dessus() + 0.5);
    if(est_pointeur<T>::valeur)
        out  << *(p.dessus());
    else
        out << p.dessus();
};

template<typename T>
bool Pile<T>::operator==(const Pile& p){
    return trait_reel<T>::egal(dessus(), p.dessus());
};

#endif // TRAIT_H
