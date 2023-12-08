/*
Erick Alan Garcia Muñoz and Francisco Cabral.
Code developed on the exam date 29-11-2023, created as an exam.

Panamerican University
Advanced programming class.
*/

// File Cat.h
#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat: public Animal {
    private:
        string breed;
    public:
        // Parameterized constructor
        Cat(string n, int e, double p, string c, string b): Animal(n, e, p, c) {
            breed = b;
        }
        // Destructor
        ~Cat() {
            cout << "The cat " << name << " has been destroyed" << endl;
        }
        // Getter and setter
        string getBreed() {
            return breed;
        }
        void setBreed(string b) {
            breed = b;
        }
        // Own method
        void meow() {
            cout << "The cat " << name << " is meowing" << endl;
        }
        void purr() {
            cout << "The cat " << name << " is purring" << endl;
        }
};

#endif
