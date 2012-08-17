#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee {

  string prenom;
  string nom;

public:
  Employee(string prenom, string nom) : prenom(prenom), nom(nom) { }

  string getPrenom() {
      return prenom;
  }

  string getNom() {
      return nom;
  }

};

#endif // EMPLOYEE_H
