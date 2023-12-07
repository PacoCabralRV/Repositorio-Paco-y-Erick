/*
Erick Alan Garcia Muñoz y Francisco Cabral.
Código elaborado en el examen 29-11-2023, hecho como examen.


Universidad Panamericana
clase de programación avanzada.

*/

//Archivo Animal.h
#ifndef ANIMAL_H
#define ANIMAL_H


#include <iostream>
#include <string>
using namespace std;

class Animal {
    protected:
        string nombre;
        int edad;
        double peso;
        string color;
    public:
        //Constructor parametrizado
        Animal(string n, int e, double p, string c) {
            this->nombre = n;
            this->edad = e;
            this->peso = p;
            this->color = c;
        }
        //Destructor
        ~Animal() {
            cout << "El animal " << nombre << " ha sido destruido" << endl;
        }
        //Getters y setters
        string getNombre() {
            return nombre;
        }
        void setNombre(string n) {
            nombre = n;
        }
        int getEdad() {
            return edad;
        }
        void setEdad(int e) {
            edad = e;
        }
        double getPeso() {
            return peso;
        }
        void setPeso(double p) {
            peso = p;
        }
        string getColor() {
            return color;
        }
        void setColor(string c) {
            color = c;
        }
        //Métodos propios
        void comer() {
            cout << "El animal " << nombre << " está comiendo" << endl;
        }
        void dormir() {
            cout << "El animal " << nombre << " está durmiendo" << endl;
        }
};

#endif

