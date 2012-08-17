
#ifndef AUTOPTR_H
#define AUTOPTR_H

template <class T>
class auto_ptr {

    private:

        T* ptr;
        bool proprietaire;

    public:

        auto_ptr(T* p=0) : ptr(p), proprietaire(true) { }
        auto_ptr(auto_ptr& p) : ptr(p.ptr), proprietaire(true) {
                p.proprietaire= false;
         }
        ~auto_ptr() { if (proprietaire) delete ptr; }

        auto_ptr& operator=(auto_ptr &p);
        auto_ptr& operator=(T *p);
        T* operator->() const { return ptr; }
        T& operator*() const { return *ptr; }
        operator T*() { return ptr; }
};


template <class T>
    auto_ptr<T>& auto_ptr<T>::
operator=(auto_ptr<T> &p) {

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
    auto_ptr<T>& auto_ptr<T>::
operator=(T *p) {

    if (proprietaire)
        delete ptr;

    ptr= p;
    proprietaire= true;

    return *this;
}

#endif // AUTOPTR_H
