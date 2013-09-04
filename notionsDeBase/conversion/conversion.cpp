
#include <iostream>

int main()
{
    char c = 'b';
    float x = 3.2 ;
    int y = 8 ;

    y = x ;
    std::cout << "float assigne a un int : y=" << y << std::endl;

    x = y ;
    std::cout << "int assigne a un float : x=" << x << std::endl;

    short z ;
    z = y ;	// resultat indetermine si y plus grand que short
    std::cout << "int assigne a un short : z=" << z << std::endl;

    y += c;
    std::cout << "int + char : y=" << y << std::endl;

    z = y/x;
    std::cout << "int/float assigne aun short : z="
            << z << std::endl;

    x = y/x;
    std::cout << "int/float assigne a un float : x="
            << x << std::endl;

    unsigned int w(10);
    y = w + z; // L'entier non-signe est converti en signe.
    // Attention, le resultat est possiblement indetermine.

    std::cout << "unsigned float + short assigne a un int : y="
            << y << std::endl;

    return 1;

    /*--------------- resultat ------------------------*\
      float assigne aun int : y=3
      int assigne a un float : x=3
      int assigne a un short : z=3
      int + char : y=101
      int/float assigne a un short : z=33
      int/float assigne a un float : x=33.6667
      unsigned float + short assigne a un int : y=43
    \*-------------------------------------------------*/

}
