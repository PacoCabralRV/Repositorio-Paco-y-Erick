/*
Erick Alan Garcia Muñoz and Francisco Cabral.
Code developed on the exam date 29-11-2023, created as an exam.

Panamerican University
Advanced programming class.
*/

// File Dog.h
#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
private:
    string breed;

public:
    // Parameterized constructor
    Dog(string n, int e, double p, string c, string r) : Animal(n, e, p, c) {
        breed = r;
    }

    // Destructor
    ~Dog() {
        cout << "The dog " << name << " has been destroyed" << endl;
    }

    // Getter and setter
    string getBreed() {
        return breed;
    }

    void setBreed(string r) {
        breed = r;
    }

    // Own method
    void bark() {
        cout << "The dog " << name << " is barking" << endl;
    }

    void protect() {
        cout << "My dog " << name << " is guarding my house" << endl;
    }
};

#endif
