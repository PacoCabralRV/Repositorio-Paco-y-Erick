/*

Código creado por Francisco Cabral y Erick Alan García Muñoz.
Creado en la clase de programación el día 13 de Octubre del 2023


-Copias
-Amigas
-Herencia


--Programación Avanzada --
--Universidad Panamericana--

*/
#include<bits/stdc++.h>


using namespace std;

#include <iostream>
using namespace std;

// Clase base Medico
class Medico {
protected:
  // Atributos de Medico
  string nombre;
  int edad;
  string especialidad;
public:
  // Constructor de Medico
  Medico(string n, int e, string esp) {
    this->nombre = n;
    this->edad = e;
    this->especialidad = esp;
    cout << "Constructor de Medico" << endl;
  }
  // Método trabajar de Medico
  void trabajar() {
    cout << "Estoy ejerciendo mi profesion."<<endl;
  }
  // Destructor de Medico
  virtual ~Medico() {
    cout << "Destructor de Medico" << endl;
  }
};

// Clase base Ingeniero
class Ingeniero {
protected:
  // Atributos de Ingeniero
  string nombre;
  int edad;
  string especialidad;
public:
  // Constructor de Ingeniero
  Ingeniero(string n, int e, string esp) {
    this->nombre = n;
    this->edad = e;
    this->especialidad = esp;
    cout << "Constructor de Ingeniero" << endl;
  }
  // Método trabajar de Ingeniero
  void trabajar() {
    cout << "Actualmente soy una persona profesionista y me encanta aprender."<<endl;
  }
  // Destructor de Ingeniero
  virtual ~Ingeniero() {
    cout << "Destructor de Ingeniero" << endl;
  }
};

// Clase derivada Cirujano
class Cirujano: public Medico, public Ingeniero {
public:
  // Constructor de Cirujano
  Cirujano(string n, int e, string esp):Medico(n, e, esp), Ingeniero(n, e, esp) {
    cout << "Constructor de Cirujano" << endl;
  }
  // Método operar de Cirujano
  void operar() {
    // Llamando a los métodos trabajar de las clases base
    Medico::trabajar();
   
    Ingeniero::trabajar();
    // Mostrando un mensaje propio
    
    cout << "Especializado en cirujia, ahora ire a operar." << endl;
  }
  // Destructor de Cirujano
  ~Cirujano() {
    cout << "Destructor de Cirujano" << endl;
  }
};

// Clase derivada Programador
class Programador: public Medico, public Ingeniero {
public:
  // Constructor de Programador
  Programador(string n, int e, string esp):Medico(n, e, esp), Ingeniero(n, e, esp) {
    cout << "Constructor de Programador" << endl;
  }
  // Método trabajar de Programador
  void trabajar() {
    // Llamando a los métodos trabajar de las clases base con distintos nombres
    Medico::trabajar();
   
    Ingeniero::trabajar();
    
    // Mostrando un mensaje propio
    cout << "Trabajar como programador, en el lenguaje c++" << endl;
  }
  // Destructor de Programador
  ~Programador() {
    cout << "Destructor de Programador" << endl;
  }
};

int main() {
  // Creando un objeto de la clase Cirujano
  Cirujano c("Carlos", 35, "Cardiologia");
  
   // Llamando al método operar de la clase Cirujano
   cout<<"-Medico: ";
   c.operar();
   cout<<"\n\n";

   cout<<"\n\n";
   cout<<"\n\n";
  
   // Creando un objeto de la clase Programador
  
   Programador p("Pedro", 25, "Informatica");
  
   // Llamando al método trabajar de la clase Programador
   
   cout<<"\n\n";
   cout<<"-Programador: ";
   p.trabajar();
   cout<<"\n\n";
  
   return 0;
}
