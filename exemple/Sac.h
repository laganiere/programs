
#ifndef SAC_H
#define SAC_H

#include <stdlib>
#include <iostream>
#include <stdexcept>
using namespace std;

template <class T, int capInitial=64>
class Sac {

private:

    T* sac;
    int taille;
    int capacite;

    void augmenterCapacite(int cap);
    void copier(const Sac &b);

public:

    Sac() : taille(0), capacite(capInitial) {
        sac= new T[capacite];
    }
    explicit Sac(int cap) : taille(0), capacite(cap) {
        if (capacite<=0) capacite=capInitial;
        sac= new T[capacite];
    }
    Sac(const Sac& b) : sac(0) { copier(b); }
    ~Sac() { delete[] sac; }

    Sac& operator=(const Sac &b);
    Sac& operator+=(const T &element);
    Sac& operator+=(Sac &b);
    T operator*();

    int getTaille() const { return taille; }
    int getCapacite() const { return capacite; }
};


template <class T, int capInitial>
Sac<T,capInitial>& Sac<T,capInitial>::
        operator=(const Sac<T,capInitial> &b) {

    if (this != &b) {

        copier(b);
    }

    return *this;
}

template <class T, int capInitial>
Sac<T,capInitial>& Sac<T,capInitial>::
        operator+=(const T &element) {

    if (taille==capacite)
        augmenterCapacite(2*capacite);

    sac[taille++]= element;

    return *this;
}

template <class T, int capInitial>
Sac<T,capInitial>& Sac<T,capInitial>::
        operator+=(Sac &b) {

    for(int i=0; i<b.getTaille(); i++){
        *this += b.sac[i];
    }

    return *this;
}

template <class T, int capInitial>
T Sac<T,capInitial>::
        operator*() {

    if (taille==0){
        throw invalid_argument("Le sac est vide");
        return T();
    }

    int index= rand() %taille;
    T tmp(sac[index]);

    sac[index]= sac[--taille];

    return tmp;
}


template <class T, int capInitial>
void Sac<T,capInitial>::
        copier(const Sac &b) {

    delete[] sac;

    capacite= b.capacite;
    taille= b.taille;

    sac= new T[capacite];

    for (int i=0; i<taille; i++)
        sac[i]= b.sac[i];


}


template <class T, int capInitial>
void Sac<T,capInitial>::
        augmenterCapacite(int cap) {

    capacite= cap;
    T *tmp= new T[capacite];

    for (int i=0; i<taille; i++)
        tmp[i]= sac[i];

    delete[] sac;

    sac= tmp;
}


#endif // SAC_H
