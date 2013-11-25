
#ifndef POINTEURINTELLIGENT_H
#define POINTEURINTELLIGENT_H

template <class T>
class PointeurIntelligent {

    private:

        T* ptr;
        mutable bool proprietaire;

    public:

        PointeurIntelligent(T* p=0) : ptr(p),
                                    proprietaire(true) {
            cout << "PointeurIntelligent::constructeur-ptr" << endl;
        }

        PointeurIntelligent(const PointeurIntelligent& p) :
                ptr(p.ptr), proprietaire(true) {
                p.proprietaire= false;
                cout << "PointeurIntelligent::constructeur-copieur(): changement de proprio" << endl;

         }

        ~PointeurIntelligent() {

            cout << "PointeurIntelligent::destructeur: ";
            if (proprietaire) {
                delete ptr;
            }
            cout << endl;
        }

        PointeurIntelligent& operator=(const PointeurIntelligent &p);
        PointeurIntelligent& operator=(T *p);
        T* operator->() const { return ptr; }
        T& operator*() const { return *ptr; }
        operator T*() {
            cout << "conversion en ptr" << endl;
            return ptr; }
};

template <class T>
    PointeurIntelligent<T>& PointeurIntelligent<T>::
operator=(const PointeurIntelligent<T> &p) {

    if (this!=&p) {

        if (proprietaire)
            delete ptr;

        ptr= p.ptr;
        proprietaire= true;
        p.proprietaire= false;

        cout << "op=(): changement de proprio" << endl;
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

    cout << "op=(T*): prise de possession" << endl;

    return *this;
}

#endif // POINTEURINTELLIGENT_H
