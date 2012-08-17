#include <iostream>
#include <fstream>

using namespace std;

// argc - # d'arguments spécifiés
// char* - chaine de caractères
// argv - tableau de chain de caractères

int main(int argc, char **argv)
{
   cout << "Bonjour";

   for (int i = 1; i < argc; i++)
           cout << " " << argv[i];

   cout << "!" << endl;
}
