
#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    // le cas erase-remove
    vector<int> v2(5, 1);
    v2[1] = v2[3] = 99;
    vector<int>::iterator p;
    p = remove(v2.begin(), v2.end(), 99);
    // déplace les éléments *q du conteneur de façon
    // à ce que [v.begin(), p[, on ne trouve que des
    // éléments tels que !(*q == valeur)

    v2.erase(remove(v2.begin(), v2.end(), 99), v2.end());

    list<int> li(5, 1);
    li.remove(99);
}
