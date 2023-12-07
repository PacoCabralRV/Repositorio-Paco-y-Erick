/*

Código creado por Francisco Cabral y Erick Alan García Muñoz.
Creado en la clase de programación el día 11 de Octubre del 2023


-Copia y amigas.
-Destructores.
-Sobrecarga.

--Programación Avanzada --
--Universidad Panamericana--

*/

#include<bits/stdc++.h>


using namespace std;

// Clase Coche que representa un coche
class Coche {
    private:
        // Atributos privados del coche
        string marca;
        string modelo;
        int anio;
        float precio;
    public:

        // Constructor parametrizado
        Coche(string m, string mo, int a, float p) {
            this->marca = m;
            this->modelo = mo;
            this->anio = a;
            this->precio = p;
        }



        // Constructor con solo marca y modelo
        Coche(string m, string mo) {
            this->marca = m;
            this->modelo = mo;
            this->anio = 2023; // Valor por defecto
            this->precio = 10000.0; // Valor por defecto
        }

        // Constructor copia
        Coche(const Coche& c) {
            this->marca = c.marca;
            this->modelo = c.modelo;
            this->anio = c.anio;
            this->precio = c.precio;
        }


        // Destructor
        ~Coche() {
            cout << "El coche " << marca << " " << modelo << " ha sido destruido." << endl;
        }
        // Método para mostrar los datos del coche
        void mostrar() {
            cout<<"           Datos del coche:         "<<endl;
            cout << "Marca: " << marca << endl;
            cout << "Modelo: " << modelo << endl;
            cout << "Año: " << anio << endl;
            cout << "Precio: " << precio << endl;
        }

        // Declaración de la clase Vendedor como amiga
        friend class Vendedor;
        // Declaración de la función comparar como amiga
        friend bool comparar(Coche c1, Coche c2);
};

// Clase Vendedor que representa un vendedor de coches
class Vendedor {
    private:
        // Atributos privados del vendedor
        string nombre;
        string telefono;
    public:
        // Constructor parametrizado
        Vendedor(string n, string t) {
            this->nombre = n;
            this->telefono = t;
        }
        
        // Constructor copia
        Vendedor(const Vendedor& v) {
            this->nombre = v.nombre;
            this->telefono = v.telefono;
        }

        // Destructor
        ~Vendedor() {
            cout << "El vendedor " << nombre << " ha sido eliminado." << endl;
        }

        // Método para vender un coche
        void vender(Coche& c) {
            cout << "El vendedor " << nombre << " ha vendido el coche " << c.marca << " " << c.modelo << endl; // Acceso al atributo privado marca y modelo del coche
            c.precio = 0.0; // Modificación del atributo privado precio del coche
        }
};

// Función para comparar dos coches según su año
bool comparar(Coche c1, Coche c2) {
    return c1.anio > c2.anio; // Acceso al atributo privado anio de los coches
}





// Función principal
int main() {
    // Creación de dos objetos de la clase Coche
    Coche c1("Ford", "Fiesta", 2023, 900000);
    Coche c2("Toyota", "Corolla", 2022, 788845);

    // Creación de un objeto de la clase Coche con solo marca y modelo
    Coche c3("Nissan", "Versa");

    // Creación de un objeto de la clase Coche con el constructor copia
    Coche c4(c1);

    // Creación de un objeto de la clase Vendedor
    Vendedor v1("Erick", "449-143-11-24");

    // Creación de un objeto de la clase Vendedor con el constructor copia
    Vendedor v2(v1);

    // Mostrar los datos de los coches
    cout << "Datos del primer coche:" << endl;
    c1.mostrar();


    cout << "\nDatos del segundo coche:" << endl;
    c2.mostrar();

    cout << "\nDatos del tercer coche:" << endl;
    c3.mostrar();

    cout << "\nDatos del cuarto coche:" << endl;
    c4.mostrar();


    // Comparar los coches según su año
    if (comparar(c1, c2)) {
        cout << "\nEl primer coche es más nuevo que el segundo." << endl;
    } else {
        cout << "\nEl segundo coche es más nuevo que el primero." << endl;
    }

    
    // Vender el primer coche
    v1.vender(c1);
    // Mostrar los datos del primer coche después de la venta
    cout << "\nDatos del primer coche después de la venta:" << endl;
    c1.mostrar();
    
    return 0;
}
