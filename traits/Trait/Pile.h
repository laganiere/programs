
#ifndef PILE_H
#define PILE_H

template<typename T>
class Pile
{
public:
   Pile(int s): taille(s),courant(-1),pilePtr(new T[taille]){}

   ~Pile()
   {
      delete [] pilePtr;
   }

    bool pousser(const T &valeurPousser)
    {
       if (!estPlein())
       {
          pilePtr[++courant] = valeurPousser;
          return true;
       }

       return false;
    }

    bool tirer(T &valeurTirer)
    {
       if (!estVide())
       {
          valeurTirer = pilePtr[courant--];
          return true;
       }

       return false;
    }

    T dessus(){
        return pilePtr[courant];
    }

    bool estVide() const
    {
       return courant == -1;
    }

    bool estPlein() const
    {
       return courant == taille - 1;
    }

    bool operator==(const Pile& p);

    private:
       int taille;
       int courant;
       T *pilePtr;
};

#endif // PILE_H
