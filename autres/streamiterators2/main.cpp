
#include<iostream>
#include<list>
#include<vector>
#include<string>
#include<iterator>
#include<fstream>

using namespace std;

int main()
{
    vector<string> v;
    ostream_iterator<string> oo(std::cout);

    for(vector<string>::iterator it = v.begin(); it != v.end(); it++, oo++)
        *oo = *it;

    ifstream is("nom.txt");
    istream_iterator<char> ii(is);
    istream_iterator<char> eof;

    while(ii != eof) {
        //fct(*ii);
        ii++;
    }

}
