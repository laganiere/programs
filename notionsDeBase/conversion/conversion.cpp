
#include <iostream>

int main()
{
    char c = 'b';
    float x = 3.2 ;
    int y = 8 ;

    y = x ;
    std::cout << "float assignÃ© Ã  un int : y=" << y << std::endl;

    x = y ;
    std::cout << "int assignÃ© Ã  un float : x=" << x << std::endl;

    short z ;
    z = y ;	// rÃ©sultat indÃ©terminÃ© si y plus grand que short
    std::cout << "int assignÃ© Ã  un short : z=" << z << std::endl;

    y += c;
    std::cout << "int + char : y=" << y << std::endl;

    z = y/x;
    std::cout << "int/float assignÃ© Ã  un short : z="
            << z << std::endl;

    x = y/x;
    std::cout << "int/float assignÃ© Ã  un float : x="
            << x << std::endl;

    unsigned int w(10);
    y = w + z; // L'entier non-signÃ© est converti en signÃ©.
    // Attention, le rÃ©sultat est possiblement indÃ©terminÃ©.

    std::cout << "unsigned float + short assignÃ©e Ã  un int : y="
            << y << std::endl;

    return 1;

    /*--------------- rÃ©sultat ------------------------*\
      float assignÃ© Ã  un int : y=3
      int assignÃ© Ã  un float : x=3
      int assignÃ© Ã  un short : z=3
      int + char : y=101
      int/float assignÃ© Ã  un short : z=33
      int/float assignÃ© Ã  un float : x=33.6667
      unsigned float + short assignÃ©e Ã  un int : y=43
    \*-------------------------------------------------*/

}
