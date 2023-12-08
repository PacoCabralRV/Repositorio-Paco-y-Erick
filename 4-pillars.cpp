/*

Code created by Francisco Cabral and Erick Alan García Muñoz.
Created in the programming class on October 4, 2023

-Panamerican University.
-Advanced Programming.

4 pillars of OOP ----

--Advanced Programming --
--Panamerican University--




*/

#include<bits/stdc++.h>


using namespace std;

// Abstract Class
class AbstractAutomobile{
    virtual void getInfo() = 0; // Virtual function, must be implemented by whoever wants to use it.
};


// Child classes-----------------------------------------------------------------------------

class SUVs: public AbstractAutomobile{  // SUVs inherits from AbstractAutomobile and is also a parent class of other classes.
protected:
    string Name;  // Name made protected so that its child classes can access it.
    string Company;
    string Address;
    string Contact;
    int Price;

public:
    // Method
    void present(){
        cout<<"Presentation: "<<endl;

        cout << "\n Name: " << Name << endl;
        cout << "\n Company: " << Company << endl;
    }


    // Second method
    void promotion(){
        cout<< Company <<", Contact us at: "<< Contact <<", or visit us at: "<<Address<<endl;
    }



    SUVs(string name, string company, string address, string contact, int price){
        this->Name = name;
        this->Company = company;
        this->Address = address;
        this->Contact =  contact;
        this->Price = price;

    }

    // Getters and Setters
    void setName(string name){
       this-> Name = name;
    }

    string getName(){
        return Name;
    }

    void setCompany(string company){
        this->Company = company;
    }

    string getCompany(){
        return Company;
    }

    void setAddress(string address){
        this->Address = address;
    }

    string getAddress(){
        return Address;
    }

    void setContact(string contact){
        this->Contact = contact;
    }

    string getContact(){
        return Contact;
    }

    void setPrice(int price){
        this->Price = price;
    }

    int getPrice(){
        return Price;
    }

    // Implementation of the method from the abstract class
    void getInfo(){
            cout << "The information will be sent to your email.";
    }

    virtual void Contract(){ // Making it virtual forces the child classes to implement the Contract() method for polymorphism,
                    // Otherwise, the parent's implementation is used.
        cout << "Loading your data into the platform..." << endl;
    }
};

class Motorcycles: public AbstractAutomobile{  // Motorcycles inherits from AbstractAutomobile and is also a parent class of other classes.
protected:
    string SerialNumber;  // Made protected so that its child classes can access it.
    string Company;
    string Address;
    string Email;
    int Price;

public:
    // Method
    void Sale(){
        cout<<"Motorcycle sale, from the company: "<<Company<<endl;
    }


    // Second method
    void Contact(){
        cout<< Company <<": Contact us at email: "<< Email<<", or visit us at:"<<Address;
    }



    Motorcycles(string serialNumber, string company, string address, string email, int price){
        this->SerialNumber = serialNumber;
        this->Company = company;
        this->Address = address;
        this->Email =  email;
        this->Price = price;

    }

    // Getters and Setters
    void setSerialNumber(string serialNumber){
        this->SerialNumber = serialNumber;
    }

    string getSerialNumber(){
        return SerialNumber;
    }

    void setCompany(string company){
        this->Company = company;
    }

    string getCompany(){
        return Company;
    }

    void setAddress(string address){
        this->Address = address;
    }

    string getAddress(){
        return Address;
    }

    void setEmail(string email){
        this->Email = email;
    }

    string getEmail(){
        return Email;
    }

    void setPrice(int price){
        this->Price = price;
    }

    int getPrice(){
        return Price;
    }

    void getInfo(){
            cout << "The data is in the portfolio we will give you.";
    }




};


// --------------------------------------------Child Classes--------------------------------------------

class Ford: public SUVs {
public:
    string Model;
    string Color;

    // Child class constructor
    Ford(string name, string company, string address, string contact, int price, string model, string color)
        :SUVs(name, company, address, contact,  price){  // Utilizing the parent's constructor.
           this-> Model=model;
           this->Color=color;
        }

    void setModel(string model){
       this-> Model = model;
    }

    string getModel(){
        return Model;
    }

    void setColor(string color){
       this-> Color = color;
    }

    string getColor(){
        return Color;
    }
    
    void showModel(){
        cout << "The SUV " << Name << " is from the company " << Company << ", its model is: "<< Model << endl;
    }

    void showColor(){
        cout<< "The color of the SUV "<<Name<<" is: "<<Color<<endl;
    }
};


class Nissan: public SUVs {
public:
    string NumCylinders;
    string NumDoors;

    // Child class constructor
    Nissan(string name, string company, string address, string contact, int price, string numCylinders, string numDoors)
        :SUVs(name, company, address, contact,  price){  // Utilizing the parent's constructor.
           this-> NumCylinders=numCylinders;
           this->NumDoors=numDoors;
        }

    void setNumCylinders(string numCylinders){
       this-> NumCylinders = numCylinders;
    }

    string getNumCylinders(){
        return NumCylinders;
    }

    void setNumDoors(string numDoors){
       this-> NumDoors = numDoors;
    }

    string getNumDoors(){
        return NumDoors;
    }
    
    void infoNissan(){
        cout << "The SUV " << Name << " is from the company " << Company << ", it has a total of "<< NumDoors <<" doors."<<endl;
    }

    void cylinders(){
        cout<< "The SUV "<<Name<<" has "<<NumCylinders<<" cylinders."<<endl;
    }
};




class Italika: public Motorcycles {
public:
    string Model;
    string Engine;

    // Child class constructor
    Italika(string serialNumber, string company, string address, string email, int price, string model, string engine)
        :Motorcycles(serialNumber, company, address, email, price){
            this-> Model=model;
            this->Engine=engine;
        }

    void setModel(string model){
        this->Model = model;
    }

    string getModel(){
        return Model;
    }

    void setEngine(string engine){
        this->Engine = engine;
    }

    string getEngine(){
        return Engine;
    }
    
    
    void showData(){
        cout << "The motorcycle is from the company " << Company << ", its model is: "<< Model << ". The serial number is: "<<SerialNumber<<endl;
    }

    void showEngine(){
        cout<<"The motorcycle has an engine of: "<<Engine<<endl;
    }
};


class Honda: public Motorcycles {
public:
    string NumHeadlights;
    string MaxLoad;

    // Child class constructor
    Honda(string serialNumber, string company, string address, string email, int price, string numHeadlights, string maxLoad)
        :Motorcycles(serialNumber, company, address, email, price){
            this-> NumHeadlights=numHeadlights;
            this->MaxLoad=maxLoad;
        }

    void setNumHeadlights(string numHeadlights){
        this->NumHeadlights = numHeadlights;
    }

    string getNumHeadlights(){
        return NumHeadlights;
    }

    void setMaxLoad(string maxLoad){
        this->MaxLoad = maxLoad;
    }

    string getMaxLoad(){
        return MaxLoad;
    }
    
    
    void showLoad(){
        cout << "The motorcycle is from the company " << Company << ". It can handle a maximum load of: "<<MaxLoad<<endl;
    }

    void headlights(){

        cout<<"The motorcycle has a total of "<<NumHeadlights<<" headlights."<<endl;
    }
};


//---------------------------------Non-member methods of any class----------------------------------

void increasePrice(SUVs &suvs){ // An object is being passed as a parameter to the function (As a reference so that changes apply to the original object)
    int newPrice = suvs.getPrice() + 10000;
    cout << "New Price: " << newPrice << endl;
    suvs.setPrice(newPrice);
}

void increasePrice(Motorcycles &motorcycles){ // An object is being passed as a parameter to the function (As a reference so that changes apply to the original object)
    int newPrice = motorcycles.getPrice() + 3000;
    cout << "New Price: " << newPrice << endl;
    motorcycles.setPrice(newPrice);
}




int main() { 


    SUVs s1 = SUVs("Explorer","Ford", "Santa Rosa Ags", "449-143-11-24", 700000 );
    s1.present();
    cout<<"\n";
    s1.promotion();
    cout<<"\n";
    s1.Contract();
    cout<<"\n";
    s1.getInfo();

  cout<<"\n\n\n\n";

    Ford f1 = Ford("Ranger", "Ford", "Av. Inmortal Aguascalientes Ags.", "449-367-23-11", 190300, "Ranger 2018", "Red");
    f1.promotion();
    cout<<"\n";
    f1.present();
    cout<<"\n";
    f1.Contract();
    cout<<"\n";
    f1.showColor();
    cout<<"\n";
    f1.showModel();
    cout<<"\n";
    f1.getInfo();

    cout<<"\n\n\n\n";

    Nissan n1 = Nissan("X-Trail", "Nissan", "Av. Siglo XXI, Aguascalientes, Ags.", "449-456-23-89", 700000, "6", "4");

    n1.present();
    cout<<"\n";
    n1.promotion();
    cout<<"\n";
    n1.Contract();
    cout<<"\n";
    n1.getInfo();
    cout<<"\n";
    n1.infoNissan();
    cout<<"\n";
    n1.cylinders();

    cout<<"\n\n\n\n";

    Motorcycles m1 = Motorcycles("XRT5678WTS34", "Italika", "Palo Alto, El Llano Ags.", "motom@gmail.com", 18000);
    m1.Sale();
    cout<<"\n";
    m1.Contact();
    cout<<"\n";
    m1.getInfo();

  cout<<"\n\n\n\n";


    Italika i1 = Italika("STR4567ORGS", "Italika", "San Francisco, El Llano, Ags.", "italikamots@motos.mx", 20000, "250Z: 2021", "250" );
    i1.Sale();
    cout<<"\n";
    i1.Contact();
    cout<<"\n";
    i1.getInfo();
    cout<<"\n";
    i1.showEngine();
    cout<<"\n";
    i1.showData();

    cout<<"\n\n\n\n";


    Honda h1 = Honda("RTD456G3000", "Honda", "Av. Convencion, Guadalajara", "hondamots@honda.mots.mx", 35000, "seven", "150kg");
    h1.Sale();
    cout<<"\n";
    h1.Contact();
    cout<<"\n";
    h1.getInfo();
    cout<<"\n";
    h1.showLoad();
    cout<<"\n";
    h1.headlights();

     cout<<"\n\n\n\n";


    //Non-member method
    increasePrice(n1);
    increasePrice(f1);
     cout<<"The SUV "<<n1.getName()<<" costs: "<<n1.getPrice();
    cout<<"\n\n";
    cout<<"The SUV "<<f1.getName()<<" costs: "<<f1.getPrice();
 


    cout<<"\n\n\n\n";

    //Polymorphism!!

    SUVs* s2 = &n1;
    SUVs* s3 = &f1;

    s2->Contract();
    s3->Contract();

    
    cout<<"\n\n\n\n";
return 0;

}
