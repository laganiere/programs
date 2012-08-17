#ifndef TRAIT1_H
#define TRAIT1_H
#include <math.h>
#include <ostream>
using namespace std;

template <typename T>
        struct Descripteur{
    typedef T type;
    typedef T* pointeur;
};

#endif // TRAIT1_H
