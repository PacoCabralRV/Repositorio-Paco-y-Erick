/*
Erick Alan Garcia Muñoz and Francisco Cabral.
Code developed on the exam date 29-11-2023, created as an exam.

Panamerican University
Advanced programming class.
*/

// File Animal.h
#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class Animal {
    protected:
        string name;
        int age;
        double weight;
        string color;
    public:
        // Parameterized constructor
        Animal(string n, int e, double p, string c) {
            this->name = n;
            this->age = e;
            this->weight = p;
            this->color = c;
        }
        // Destructor
        ~Animal() {
            cout << "The animal " << name << " has been destroyed" << endl;
        }
        // Getters and setters
        string getName() {
            return name;
        }
        void setName(string n) {
            name = n;
        }
        int getAge() {
            return age;
        }
        void setAge(int e) {
            age = e;
        }
        double getWeight() {
            return weight;
        }
        void setWeight(double p) {
            weight = p;
        }
        string getColor() {
            return color;
        }
        void setColor(string c) {
            color = c;
        }
        // Own methods
        void eat() {
            cout << "The animal " << name << " is eating" << endl;
        }
        void sleep() {
            cout << "The animal " << name << " is sleeping" << endl;
        }
};

#endif
