/*
Code created by Francisco Cabral and Erick Alan García Muñoz.
Created in the programming class on October 13, 2023

-Copies
-Friends
-Inheritance

--Advanced Programming --
--Panamerican University--
*/
#include<bits/stdc++.h>
using namespace std;

#include <iostream>
using namespace std;

// Base class Doctor
class Doctor {
protected:
  // Doctor attributes
  string name;
  int age;
  string specialty;
public:
  // Doctor constructor
  Doctor(string n, int e, string spec) {
    this->name = n;
    this->age = e;
    this->specialty = spec;
    cout << "Doctor Constructor" << endl;
  }
  // Doctor work method
  void work() {
    cout << "I am practicing my profession." << endl;
  }
  // Doctor destructor
  virtual ~Doctor() {
    cout << "Doctor Destructor" << endl;
  }
};

// Base class Engineer
class Engineer {
protected:
  // Engineer attributes
  string name;
  int age;
  string specialty;
public:
  // Engineer constructor
  Engineer(string n, int e, string spec) {
    this->name = n;
    this->age = e;
    this->specialty = spec;
    cout << "Engineer Constructor" << endl;
  }
  // Engineer work method
  void work() {
    cout << "I am currently a professional and I love learning." << endl;
  }
  // Engineer destructor
  virtual ~Engineer() {
    cout << "Engineer Destructor" << endl;
  }
};

// Derived class Surgeon
class Surgeon: public Doctor, public Engineer {
public:
  // Surgeon constructor
  Surgeon(string n, int e, string spec): Doctor(n, e, spec), Engineer(n, e, spec) {
    cout << "Surgeon Constructor" << endl;
  }
  // Surgeon operate method
  void operate() {
    // Calling work methods from base classes
    Doctor::work();
    Engineer::work();
    // Showing a specific message
    cout << "Specialized in surgery, now I will go to operate." << endl;
  }
  // Surgeon destructor
  ~Surgeon() {
    cout << "Surgeon Destructor" << endl;
  }
};

// Derived class Programmer
class Programmer: public Doctor, public Engineer {
public:
  // Programmer constructor
  Programmer(string n, int e, string spec): Doctor(n, e, spec), Engineer(n, e, spec) {
    cout << "Programmer Constructor" << endl;
  }
  // Programmer work method
  void work() {
    // Calling work methods from base classes with different names
    Doctor::work();
    Engineer::work();
    // Showing a specific message
    cout << "Working as a programmer, in the C++ language." << endl;
  }
  // Programmer destructor
  ~Programmer() {
    cout << "Programmer Destructor" << endl;
  }
};

int main() {
  // Creating an object of the Surgeon class
  Surgeon c("Carlos", 35, "Cardiology");

  // Calling the operate method of the Surgeon class
  cout << "-Doctor: ";
  c.operate();
  cout << "\n\n";

  cout << "\n\n";
  cout << "\n\n";

  // Creating an object of the Programmer class
  Programmer p("Pedro", 25, "Informatics");

  // Calling the work method of the Programmer class
  cout << "\n\n";
  cout << "-Programmer: ";
  p.work();
  cout << "\n\n";

  return 0;
}
