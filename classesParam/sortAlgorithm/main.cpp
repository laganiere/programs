
// sort algorithm example
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool fonction(int i,int j) { return (i<j); }

struct maClasse {
  bool operator() (int i,int j) { return (i<j);}
} monObjet;

int main () {
  int ints[] = {32,71,12,45,26,80,53,33};
  vector<int> monVecteur (ints, ints+8);
  // 32 71 12 45 26 80 53 33
  vector<int>::iterator it;

  // using default comparison (operator <):
  sort (monVecteur.begin(), monVecteur.begin()+4);
  //(12 32 45 71)26 80 53 33

  // using function as comp
  sort (monVecteur.begin()+4, monVecteur.end(), fonction);
  // 12 32 45 71(26 33 53 80)

  // using object as comp
  sort (monVecteur.begin(), monVecteur.end(), monObjet);
  //(12 26 32 33 45 53 71 80)

  // print out content:
  cout << "monVecteur contient:";
  for (it=monVecteur.begin(); it!=monVecteur.end(); ++it)
    cout << " " << *it;

  cout << endl;

  return 0;

  /*--------------------- résultat -------------------------*\
      monVecteur contient: 12 26 32 33 45 53 71 80
  \*--------------------------------------------------------*/
}
