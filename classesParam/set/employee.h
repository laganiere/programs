#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee {

  string prenom;
  string nom;

public:
  Employee(string prenom, string nom) : prenom(prenom), nom(nom) { }
  Employee(string nom) : prenom("X"), nom(nom) { }

  string getPrenom() {
      return prenom;
  }

  string getNom() {
      return nom;
  }

  void setNom(string nom) {
      this->nom= nom;
  }

  void setPrenom(string prenom) {
      this->prenom= prenom;
  }
};

#endif // EMPLOYEE_H
