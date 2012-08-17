
#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    // les itérateurs permettent de définir des intervalles
    // à la construction

    vector<int> v1(5, 3), v(v1.begin(), v1.end());
    vector<int>::iterator itr = v.begin();

    // insertion
    v.insert(itr, v1.size()/2);
    // l'itérateur à v, on insert devant cet élément

    // supression
    v.erase(v.begin()+2, v.end());
    vector<int>(v.begin(), v.end()).swap(v);

    // assignation
    v.assign(v1.begin() + v1.size()/2, v1.end());
    v.clear(); // est équivalent à la ligne précédente

    for (vector<int>::iterator it = v1.begin() + v1.size()/2;
                                            it != v1.end(); it++)
        v.push_back(*it);

}
