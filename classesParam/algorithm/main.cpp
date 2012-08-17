
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool impair(int a) {
    return (a%2 == 1);
}

int main()
{
   vector<int> v;
   v.push_back(7);
   v.push_back(3);
   v.push_back(2);
   v.push_back(5);
   v.push_back(6);

   vector<int>::iterator it, it2;

   it = find_if(v.begin(), v.end(), impair);
   cout << "La première valeur impaire est " << *it << endl;

   it = min_element(v.begin(), v.end());
   cout << "La plus petite valeur est " << *it << endl;

   it = max_element(v.begin(), v.end());
   cout << "La plus grande valeur est " << *it << endl;

   it = partition(v.begin(), v.end(), impair);

   cout << "Les valeurs suivantes sont impaires : ";
   for (it2 = v.begin(); it2 != it; ++it2)
       cout << " " << *it2;
   cout << endl;

   cout << "Les valeurs suivantes sont paires : ";
   for (it2 = it; it2 != v.end(); ++it2)
       cout << " " << *it2;
   cout << endl;


   /*--------------------- résultat -------------------------*\
     La première valeur impaire est 7
     La plus petite valeur est 2
     La plus grande valeur est 7
     Les valeurs suivantes sont impaires :  7 3 5
     Les valeurs suivantes sont paires :  2 6
   \*--------------------------------------------------------*/

}
