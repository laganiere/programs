
#ifndef MONEXCEPTION_H
#define MONEXCEPTION_H

#include <iostream>
#include <string>

using namespace std;

class MonException
{
private:
    string msg;
public:
    MonException(string m) : msg(m) { }
    void setMessage(string m) { msg = m; }
    string getMessage() { return msg; }
    void report() {
        std::cout << "Mon exception : " << msg << std::endl;
    }
};

#endif // MONEXCEPTION_H
