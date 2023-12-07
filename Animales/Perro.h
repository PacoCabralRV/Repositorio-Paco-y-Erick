/*
Erick Alan Garcia Muñoz y Francisco Cabral.
Código elaborado en el examen 29-11-2023, hecho como examen.


Universidad Panamericana
clase de programación avanzada.

*/

//Archivo Perro.h
#ifndef PERRO_H
#define PERRO_H

#include "Animal.h"

class Perro: public Animal {
    private:
        string raza;
    public:
        //Constructor parametrizado
        Perro(string n, int e, double p, string c, string r): Animal(n, e, p, c) {
            raza = r;
        }
        //Destructor
        ~Perro() {
            cout << "El perro " << nombre << " ha sido destruido" << endl;
        }
        //Getter y setter
        string getRaza() {
            return raza;
        }
        void setRaza(string r) {
            raza = r;
        }
        //Método propio
        void ladrar() {
            cout << "El perro " << nombre << " está ladrando" << endl;
        }
        void proteger(){
            cout<<"Mi perro "<< nombre<<" esta cuidando mi casa "<<endl;
        }
};

#endif
