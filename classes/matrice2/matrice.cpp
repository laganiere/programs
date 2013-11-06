
#include "matrice.h"

Matrice::Matrice() { 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            m[i][j] =  0;
        }
}
Matrice::Matrice(int x) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            m[i][j] = x;
        }
}

Matrice::Matrice(const Matrice &m2) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            m[i][j] =  m2.get(i, j);
        }
    }
}

void Matrice::set(int i, int j, int val) { m[i][j] = val; }
int Matrice::get(int i, int j) const { return m[i][j]; }
