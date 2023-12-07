/*
Erick Alan Garcia Muñoz y Francisco Cabral.
Código elaborado en el examen 29-11-2023, hecho como examen.


Universidad Panamericana
clase de programación avanzada.

*/



//Archivo main.cpp
#include <iostream>
#include "Animal.h"
#include "Perro.h"
#include "Gato.h"
using namespace std;

//Definición de un macro
#define PI 3.1416
#define Gravedad 9.81

int main() {
    //Creación de un objeto de la clase Animal
    Animal a("Firulais", 5, 10.5, "Marrón");
   
    //Invocación de los métodos
    a.comer();
    a.dormir();
    cout<< "El peso en Newtons de "<< a.getNombre() <<" es de : "<< a.getPeso()* Gravedad<<"N"<<endl;

    cout<<"\n";

    //Creación de un objeto de la clase Perro
    Perro p("Rocky", 3, 8.7, "Blanco", "Bulldog");
 
    //Invocación de los métodos
    p.comer();
    p.dormir();
    p.ladrar();
    p.proteger();
    cout<<"El perro "<< p.getNombre() <<" es un "<< p.getRaza()<< " y su masa es de: "<<p.getPeso();
    cout<<"\n";

    //Creación de un objeto de la clase Gato
    Gato g("Pirata", 2, 4.5, "Naranja", "Persa");
    g.comer();
    g.dormir();
    g.maullar();
    g.ronronear();
    cout<<"La masa de "<< g.getNombre() <<" es de "<< g.getPeso()<< " y su peso en N es de: "<<p.getPeso()*Gravedad<<"N";
    cout<<"\n";

    //Uso del macro para calcular el área de un círculo
    cout<<"\n";
    double radio = 2.5;
    double area = PI * radio * radio;
    cout << "El área de un círculo de radio donde se elaborara la casa de " <<g.getNombre() <<", tiene un radio de: "<< radio << "m, y su area es: " << area <<"m"<< endl;

  

    return 0;
}
