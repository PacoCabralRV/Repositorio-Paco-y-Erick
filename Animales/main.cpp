/*
Erick Alan Garcia Muñoz and Francisco Cabral.
Code developed on the exam date 29-11-2023, created as an exam.

Panamerican University
Advanced programming class.
*/

// File main.cpp
#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
using namespace std;

// Definition of macros
#define PI 3.1416
#define Gravity 9.81

int main() {
    // Creation of an object of the Animal class
    Animal a("Firulais", 5, 10.5, "Brown");

    // Invocation of methods
    a.eat();
    a.sleep();
    cout << "The weight in Newtons of " << a.getName() << " is: " << a.getWeight() * Gravity << "N" << endl;

    cout << "\n";

    // Creation of an object of the Dog class
    Dog p("Rocky", 3, 8.7, "White", "Bulldog");

    // Invocation of methods
    p.eat();
    p.sleep();
    p.bark();
    p.protect();
    cout << "The dog " << p.getName() << " is a " << p.getBreed() << " and its mass is: " << p.getWeight();
    cout << "\n";

    // Creation of an object of the Cat class
    Cat g("Pirata", 2, 4.5, "Orange", "Persian");
    g.eat();
    g.sleep();
    g.meow();
    g.purr();
    cout << "The mass of " << g.getName() << " is " << g.getWeight() << " and its weight in N is: " << p.getWeight() * Gravity << "N";
    cout << "\n";

    // Using the macro to calculate the area of a circle
    cout << "\n";
    double radius = 2.5;
    double area = PI * radius * radius;
    cout << "The area of a circle where the house of " << g.getName() << " will be built, has a radius of: " << radius << "m, and its area is: " << area << "m" << endl;

    return 0;
}
