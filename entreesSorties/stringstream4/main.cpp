
#include<iostream.h>
#include<fstream.h>

const char* filename("exemple.txt");

int main()
{
    char * buffer;

    long size;

    ifstream file (filename, ios::in|ios::binary|ios::ate);

    size = file.tellg();

    file.seekg(0, ios::beg);

    // next line throws a bad_alloc exception
    buffer = new char[size];

    file.read(buffer, size);

    file.close();
    cout << "Le fichier complet est dans le buffer." << endl;
    delete[] buffer;
    return 0;
}
