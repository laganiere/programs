#include <iostream>
#include <map>
using namespace std;

int main ()
{
  map<char,int> maMap;
  map<char,int>::iterator it;

  maMap['a']=50;
  maMap['b']=100;
  maMap['c']=150;
  maMap['d']=200;

  it=maMap.find('b');
  maMap.erase (it);
  maMap.erase (maMap.find('d'));

  // imprime le contenu:
  cout << "éléments dans maMap :" << endl;
  cout << "a => " << maMap.find('a')->second << endl;
  cout << "c => " << maMap.find('c')->second << endl;

  return 0;

  /*--------------------- résultat -------------------------*\
    éléments dans maMap :
    a => 50
    c => 150
  \*--------------------------------------------------------*/
}
