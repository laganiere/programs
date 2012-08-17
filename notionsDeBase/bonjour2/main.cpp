
#include <iostream>

using namespace std;

int main()
{
   char name[100];

   cout << "Entrez votre nom: ";
   cin.getline(name, 100);
   cout << "Bonjour " << name << "!" << endl;
}
