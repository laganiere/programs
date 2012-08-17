
#ifndef POINTEURI_H
#define POINTEURI_H

template <typename T>
class PointeurI{
    private:
        PointeurI ptr;

    public:
        PointeurI(T* ptr=0): ptr(ptr) {}
        ~PointeurI(){delete ptr;}
        PointeurI(PointeurI& pi){
            ptr = pi.ptr;
            pi.ptr = 0; // un seul propriétaire
        }
        PointeurI& operator=(PointeurI& pi){
            if(this == &pi)
                return *this;
            delete ptr; // on se débarasse de l'objet
            ptr = pi.ptr;
            pi.ptr = 0;
        }
};


#endif // POINTEURI_H
