
#ifndef POINTEURINTELLIGENT_H
#define POINTEURINTELLIGENT_H

template <class T>
class PointeurIntelligent {

    private:

        T* ptr;
        bool proprietaire;

    public:

        PointeurIntelligent(T* p=0) : ptr(p), proprietaire(true) { }
        PointeurIntelligent(PointeurIntelligent& p) :
                ptr(p.ptr), proprietaire(true) {p.proprietaire= false; }
        ~PointeurIntelligent() { if (proprietaire) delete ptr; }

        PointeurIntelligent& operator=(PointeurIntelligent &p);
        PointeurIntelligent& operator=(T *p);
        T* operator->() const { return ptr; }
        T& operator*() const { return *ptr; }
        operator T*() { return ptr; }
};


template <class T>
    PointeurIntelligent<T>& PointeurIntelligent<T>::
operator=(PointeurIntelligent<T> &p) {

    if (this!=&p) {

        if (proprietaire)
            delete ptr;

        ptr= p.ptr;
        proprietaire= true;
        p.proprietaire= false;
    }

    return *this;
}


template <class T>
    PointeurIntelligent<T>& PointeurIntelligent<T>::
operator=(T *p) {

    if (proprietaire)
        delete ptr;

    ptr= p;
    proprietaire= true;

    return *this;
}

#endif // POINTEURINTELLIGENT_H
