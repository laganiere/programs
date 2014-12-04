
#include <iostream>
#include <stdlib.h>
using namespace std;

template <typename T>
struct Descripteur{
    typedef T type;
    typedef T* pointeur;
};

int main() {

    Descripteur<int>::type a(3);
    Descripteur<int>::pointeur p;
    p=&a;

    cout << "p: " << p << endl;
    cout << "*p: " << *p << endl;

    typedef Descripteur<int>::pointeur mon_pointeur;

    mon_pointeur pp = &a;

    cout << "*pp: " << *pp << endl;


    system("PAUSE");
    return 0;
}
