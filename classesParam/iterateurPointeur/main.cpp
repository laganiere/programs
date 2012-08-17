
#include<vector>
#include<iostream>

using namespace std;

int main()
{
    vector<int> v;
    int a[10] = {1, 1, 2, 3, 4, 7, 7, 7, 8, 9};
    v.assign(a+2, a+5);
    v.size() == 3;

    cout << "{";
    for (int i = 0; i< v.size(); i++) {
        if (i == 0) cout << v[i];
        else cout << ", " << v[i];
    }
    cout << "}" << endl;

    /*--------------------- résultat -------------------------*\
      {2, 3, 4}
    \*--------------------------------------------------------*/
}
