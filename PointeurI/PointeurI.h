
#ifndef POINTEURI_H
#define POINTEURI_H

template <typename T>
class PointeurI{
    private:
        T* ptr;

    public:
        PointeurI(T* ptr=0): ptr(ptr) {}
        ~PointeurI(){delete ptr;}
        PointeurI(PointeurI& pi){
            ptr = pi.ptr;
            pi.ptr = 0; // un seul proprietaire
        }
        PointeurI& operator=(PointeurI& pi){
            if(this == &pi)
                return *this;
            delete ptr; // on se debarasse de l'objet
            ptr = pi.ptr;
            pi.ptr = 0;
        }
};


#endif // POINTEURI_H
