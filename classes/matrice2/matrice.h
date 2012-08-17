
#ifndef MATRICE_H
#define MATRICE_H

class Matrice {
    private:
        int m[3][3];

    public:
        Matrice(); // constructeur par défaut
        Matrice(int); // constructeur à un argument
        Matrice(const Matrice&); // constructeur copieur

        void set(int i, int j, int val);
        int get(int i, int j) const;
};

#endif // MATRICE_H
