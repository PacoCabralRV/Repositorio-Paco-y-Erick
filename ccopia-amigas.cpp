/*
Code created by Francisco Cabral and Erick Alan García Muñoz.
Created in the programming class on October 11, 2023

-Copies and friends.
-Destructors.
-Overload.

--Advanced Programming --
--Panamerican University--
*/

#include<bits/stdc++.h>

using namespace std;

// Class Car representing a car
class Car {
private:
    // Private attributes of the car
    string brand;
    string model;
    int year;
    float price;
public:
    // Parameterized constructor
    Car(string m, string mo, int y, float p) {
        this->brand = m;
        this->model = mo;
        this->year = y;
        this->price = p;
    }

    // Constructor with only brand and model
    Car(string m, string mo) {
        this->brand = m;
        this->model = mo;
        this->year = 2023; // Default value
        this->price = 10000.0; // Default value
    }

    // Copy constructor
    Car(const Car& c) {
        this->brand = c.brand;
        this->model = c.model;
        this->year = c.year;
        this->price = c.price;
    }

    // Destructor
    ~Car() {
        cout << "The car " << brand << " " << model << " has been destroyed." << endl;
    }

    // Method to display car data
    void show() {
        cout << "           Car Data:         " << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Price: " << price << endl;
    }

    // Declaration of the class Salesman as a friend
    friend class Salesman;
    // Declaration of the compare function as a friend
    friend bool compare(Car c1, Car c2);
};

// Class Salesman representing a car salesman
class Salesman {
private:
    // Private attributes of the salesman
    string name;
    string phone;
public:
    // Parameterized constructor
    Salesman(string n, string t) {
        this->name = n;
        this->phone = t;
    }

    // Copy constructor
    Salesman(const Salesman& s) {
        this->name = s.name;
        this->phone = s.phone;
    }

    // Destructor
    ~Salesman() {
        cout << "The salesman " << name << " has been deleted." << endl;
    }

    // Method to sell a car
    void sell(Car& c) {
        cout << "The salesman " << name << " has sold the car " << c.brand << " " << c.model << endl; // Access to the private attributes brand and model of the car
        c.price = 0.0; // Modification of the private attribute price of the car
    }
};

// Function to compare two cars based on their year
bool compare(Car c1, Car c2) {
    return c1.year > c2.year; // Access to the private attribute year of the cars
}

// Main function
int main() {
    // Creating two objects of the class Car
    Car c1("Ford", "Fiesta", 2023, 900000);
    Car c2("Toyota", "Corolla", 2022, 788845);

    // Creating an object of the class Car with only brand and model
    Car c3("Nissan", "Versa");

    // Creating an object of the class Car with the copy constructor
    Car c4(c1);

    // Creating an object of the class Salesman
    Salesman s1("Erick", "449-143-11-24");

    // Creating an object of the class Salesman with the copy constructor
    Salesman s2(s1);

    // Displaying the data of the cars
    cout << "Data of the first car:" << endl;
    c1.show();

    cout << "\nData of the second car:" << endl;
    c2.show();

    cout << "\nData of the third car:" << endl;
    c3.show();

    cout << "\nData of the fourth car:" << endl;
    c4.show();

    // Comparing the cars based on their year
    if (compare(c1, c2)) {
        cout << "\nThe first car is newer than the second one." << endl;
    } else {
        cout << "\nThe second car is newer than the first one." << endl;
    }

    // Selling the first car
    s1.sell(c1);
    // Displaying the data of the first car after the sale
    cout << "\nData of the first car after the sale:" << endl;
    c1.show();

    return 0;
}
