

// Erick Alan García Muñoz, 3 de Noviembre.

/*

Manipuladores en C++, width, fill, setw.

Excepciones en C++, clase impartida por el prof. Emmanuel Rodríguez.

*/

#include <iostream>
#include <stdexcept>

using namespace std;

// Clase que representa una división entre dos números enteros
class Calculadora {
private:
    int n1; // Dividendo
    int n2; // Divisor
public:
    // Constructor que recibe los dos números y verifica que el divisor no sea cero
    Calculadora(int n1, int n2) {
        this->n1 = n1;
        this->n2 = n2;

        if (n2 == 0) {
            throw runtime_error("División por cero"); // Viene con la librería <stdexcept>
        }
    }

    // Método que devuelve el resultado de la división
    int div() {
        return n1 / n2;
    }
};

int main() {
    try {
        // Ejemplo de división válida
        cout << "\n     División #1    \n";
        Calculadora d1(10, 2);
        cout << "10 / 2 = " << d1.div() << "\n";
        // Ejemplo de división inválida
        cout << "\n     División #2    \n";
        Calculadora d2(10, 0);
        cout << "10 / 0 = " << d2.div() << "\n";
    }
    catch (const runtime_error &e) {
        // Capturar la excepción y mostrar el mensaje de error.
        cerr << "Error Amigo: " << e.what() << "\n";
    }

    return 0;
}
