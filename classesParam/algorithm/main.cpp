#include <iostream>
#include <algorithm>
#include <vector>
#include<iterator>

using namespace std;

template < class V >
std::ostream& operator<< (std::ostream &out, std::vector<V> &v) {
  copy(v.begin(), v.end(), ostream_iterator<V>(out, " ") );
  return out;
}


bool impair(int a) {
    return (a%2 == 1);
}

bool multiple3(int a) {
    return (a%3 == 0);
}

int main()
{
   vector<int> v;
   v.push_back(7);
   v.push_back(3);
   v.push_back(2);
   v.push_back(5);
   v.push_back(6);
   v.push_back(11);
   v.push_back(12);

   vector<int>::iterator it, it2;

   it = find_if(v.begin(), v.end(), impair);
   cout << "La premiere valeur impaire est " << *it << endl;

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

   cout << "Les valeurs suivantes sont des multiples de 3 : ";
   it = partition(v.begin(), v.end(), multiple3);
   cout << v << endl;
}

/*--------------------- resultat -------------------------*\
La premiere valeur impaire est 7
La plus petite valeur est 2
La plus grande valeur est 12
Les valeurs suivantes sont impaires :  7 3 11 5
Les valeurs suivantes sont paires :  6 2 12
Les valeurs suivantes sont des multiples de 3 : 12 3 6 5 11 2 7
\*--------------------------------------------------------*/

/* definition recommandee de la fonction std::partition *\

template <class BidirectionalIterator, class UnaryPredicate>
  BidirectionalIterator partition (BidirectionalIterator first,
                                   BidirectionalIterator last, UnaryPredicate pred)
{
  while (first!=last) {
    while (pred(*first)) {
      ++first;
      if (first==last) return first;
    }
    do {
      --last;
      if (first==last) return first;
    } while (!pred(*last));
    swap (*first,*last);
    ++first;
  }
  return first;
}

\*-----------------------------------------------------*/
