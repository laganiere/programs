
#ifndef POINTEURICOMPTEUR_H
#define POINTEURICOMPTEUR_H

template <class T> PointeurI{
    class RefCompteur{
        unsigned int d_pCompte;
    public:
        RefCompteur(): d_pCompte(1){}
        void clone(){ ++d_Compte; return;}
        bool liberer(){
            if(!--d_pCompte)    return true;
            return false;
        }
    };

    T* d_pointee;
    RefCompteur* d_compteur;
public:
    // constructeur - null non-permis
    explicit PointeurI(T* _pointee) : d_pointee(_pointee),
                                d_compteur(new RefCompteur()){
        if(d_pointee == 0){
            delete d_compteur;
            throw std::runtime_error("PointeurI == null");
        }
    }
    // constructeur copieur du pointeur intelligent
    PointeurI(PointeurI& _src) : d_pointee(_src.d_pointee),
                                d_compteur(_src.d_compteur){
        d_compteur->clone(); // augmente le compteur
    }
    // Supprimer le pointeur intelligent
    ~PointeurI(){
        // decrémenter le compteur et vérifier si
        // dernière référence
        if(d_compteur->liberer()){
            delete d_pointee; // supprime l'objet
            delete d_compteur; // supprime le compteur
        }
    }
    PointeurI& operator=(PointeurI& src){
        if(this != &src){
            if(d_compteur->liberer()){
                delete d_pointee;
                delete d_compteur;
            }
            d_pointee = src.d_pointee;
            d_compteur = src.d_compteur;
            d_compteur->clone();
        }
        return *this;
    }


};

#endif // POINTEURICOMPTEUR_H
