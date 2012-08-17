
#include <iostream>
#include <list>
using namespace std;

// Simple example uses type int

main()
{
   list<int> L;
   L.push_back(0);
   // Insérer un élément à la fin

   L.push_front(0);
   // Insérer un élément au début

   L.insert(++L.begin(),2);
   // Insérer "2" avant la position du premier argument
   // (Placer avant le second argument)

   L.push_back(5);
   L.push_back(6);

   list<int>::iterator i;

   for(i=L.begin(); i != L.end(); ++i) cout << *i << " ";
   cout << endl;
   return 0;


   /*------------------ résultat ------------------------*\
     0 2 0 5 6
   \*----------------------------------------------------*/

}
