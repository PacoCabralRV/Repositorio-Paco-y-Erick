// Erick Alan García Muñoz, November 3rd.

/*

Manipulators in C++, width, fill, setw.

Exceptions in C++, a class taught by Prof. Emmanuel Rodríguez.

*/

#include <iostream>
#include <stdexcept>

using namespace std;

// Class representing division between two integers
class Calculator {
private:
    int n1; // Dividend
    int n2; // Divisor
public:
    // Constructor that receives two numbers and verifies that the divisor is not zero
    Calculator(int n1, int n2) {
        this->n1 = n1;
        this->n2 = n2;

        if (n2 == 0) {
            throw runtime_error("Division by zero"); // Comes with the <stdexcept> library
        }
    }

    // Method that returns the result of the division
    int divide() {
        return n1 / n2;
    }
};

int main() {
    try {
        // Example of valid division
        cout << "\n     Division #1    \n";
        Calculator d1(10, 2);
        cout << "10 / 2 = " << d1.divide() << "\n";
        // Example of invalid division
        cout << "\n     Division #2    \n";
        Calculator d2(10, 0);
        cout << "10 / 0 = " << d2.divide() << "\n";
    }
    catch (const runtime_error &e) {
        // Catch the exception and display the error message.
        cerr << "Error, my friend: " << e.what() << "\n";
    }

    return 0;
}
