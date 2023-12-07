/*
Erick Alan Garcia Muñoz y Francisco Cabral.
Código elaborado en el examen 29-11-2023, hecho como examen.


Universidad Panamericana
clase de programación avanzada.

*/

//Archivo Gato.h
#ifndef GATO_H
#define GATO_H

#include "Animal.h"

class Gato: public Animal {
    private:
        string raza;
    public:
        //Constructor parametrizado
        Gato(string n, int e, double p, string c, string r): Animal(n, e, p, c) {
            raza = r;
        }
        //Destructor
        ~Gato() 
        {
            cout << "El gato " << nombre << " ha sido destruido" << endl;
        }
        //Getter y setter
        string getRaza() 
        {
            return raza;
        }
        void setRaza(string r) 
        {
            raza = r;
        }
        //Método propio
        void maullar() 
        {
            cout << "El gato " << nombre << " está maullando" << endl;
        }
        void ronronear() 
        {
        cout << "El gato " << nombre << " está ronroneando" << endl;
        }
};

#endif
