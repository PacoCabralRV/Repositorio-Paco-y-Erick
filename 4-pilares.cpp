/*

Código creado por Francisco Cabral y Erick Alan García Muñoz.
Creado en la clase de programación el día 04 de Octubre del 2023

-Universidad Panamericana. 
-Programacion Avanzada.

4 pilares de la POO----

--Programación Avanzada --
--Universidad Panamericana--




*/

#include<bits/stdc++.h>


using namespace std;

// Clase Abstracta
class AutomovilesAbstracto{
    virtual void obtenerinfo() = 0; // Funcion virtual, debe ser implementada por quien desea utilizarla.
};


//clases hijas-----------------------------------------------------------------------------

class Camionetas:AutomovilesAbstracto{  // Camionetas hereda de AutomovilesAbstracto y su vez es clase padre de otras clases.
protected:
    string Nombre;  // Pasamos Nombre a protected para que sus clases hijas puedan acceder a ellas.
    string Compania;
    string Direccion;
    string Contacto;
    int Precio;

public:
    // Metodo
    void presentar(){
        cout<<"Presentacion: "<<endl;

        cout << "\n Nombre: " << Nombre << endl;
        cout << "\n Compania: " << Compania << endl;
    }


    //segundo metodo
    void promocion(){
        cout<< Compania <<", Comuniquese con nosotros al contacto: "<< Contacto <<", o visitenos en: "<<Direccion<<endl;
    }



    Camionetas(string nombre, string compania, string direccion, string contacto, int precio){
        this->Nombre = nombre;
        this->Compania = compania;
        this->Direccion = direccion;
        this->Contacto =  contacto;
        this->Precio = precio;

    }

    // Getters y Setters
    void SetNombre(string nombre){
       this-> Nombre = nombre;
    }

    string getNombre(){
        return Nombre;
    }

    void setCompania(string compania){
        this->Compania = compania;
    }

    string getCompania(){
        return Compania;
    }

    void setDireccion(string direccion){
        this->Direccion = direccion;
    }

    string getDireccion(){
        return Direccion;
    }

    void setContacto(string contacto){
        this->Contacto = contacto;
    }

    string getContacto(){
        return Contacto;
    }

    void setPrecio(int precio){
        this->Precio = precio;
    }

    int getPrecio(){
        return Precio;
    }

    // Implementacion del metodo de la clase abstracta
    void obtenerinfo(){
            cout << "La informacion sera enviada a su correo electronico.";
    }

    virtual void Contrato(){ // Al hacerla virtual, obligamos a que las hijas hagan una implementacion del metodo contrato() para aplicar polimorfismo,
                    // De lo contrario, se usa la implementacion del padre.
        cout << "Cargando sus datos en la plataforma..." << endl;
    }
};

class Motocicletas:AutomovilesAbstracto{  // Motocicletas hereda de AutomovilesAbstracto y su vez es clase padre de otras clases.
protected:
    string Numserie;  // Pasamos Nombre a protected para que sus clases hijas puedan acceder a ellas.
    string Compania;
    string Direccion;
    string Email;
    int Precio;

public:
    // Metodo
    void Venta(){
        cout<<"Veta de motocicletas, de la compañia: "<<Compania<<endl;
    }


    //segundo metodo
    void Contacto(){
        cout<< Compania <<": Comuniquese con nosotros al correo: "<< Email<<", o visitenos en:"<<Direccion;
    }



    Motocicletas(string numserie, string compania, string direccion, string email, int precio){
        this->Numserie = numserie;
        this->Compania = compania;
        this->Direccion = direccion;
        this->Email =  email;
        this->Precio = precio;

    }

    // Getters y Setters
    void SetNumserie(string numserie){
        this->Numserie = numserie;
    }

    string getNumserie(){
        return Numserie;
    }

    void setCompania(string compania){
        this->Compania = compania;
    }

    string getCompania(){
        return Compania;
    }

    void setDireccion(string direccion){
        this->Direccion = direccion;
    }

    string getDireccion(){
        return Direccion;
    }

    void setCorreo(string email){
        this->Email = email;
    }

    string getEmail(){
        return Email;
    }

    void setPrecio(int precio){
        this->Precio = precio;
    }

    int getPrecio(){
        return Precio;
    }

    void obtenerinfo(){
            cout << "Los datos se encuentran en el portafolio que le entregaremos.";
    }




};


// --------------------------------------------Clases hijas--------------------------------------------

class Ford: public Camionetas {
public:
    string Modelo;
    string Color;

    // Constructor de la clase hija
    Ford(string nombre, string compania, string direccion, string contacto, int precio, string modelo, string color)
        :Camionetas(nombre, compania, direccion, contacto,  precio){  // Aprovecha el constructor del padre.
           this-> Modelo=modelo;
           this->Color=color;
        }

    void setModelo(string modelo){
       this-> Modelo = modelo;
    }

    string getModelo(){
        return Modelo;
    }

    void setColor(string color){
       this-> Color = color;
    }

    string getColor(){
        return Color;
    }
    
    void muestramodelo(){
        cout << "La camioneta " << Nombre << " es de la compañia " << Compania << ", su modelo es: "<< Modelo << endl;
    }

    void muestracolor(){
        cout<< "El color de la camioneta "<<Nombre<<" es: "<<Color<<endl;
    }
};


class Nissan: public Camionetas {
public:
    string Numcilindros;
    string Numpuertas;

    // Constructor de la clase hija
    Nissan(string nombre, string compania, string direccion, string contacto, int precio, string numcilindros, string numpuertas)
        :Camionetas(nombre, compania, direccion, contacto,  precio){  // Aprovecha el constructor del padre.
           this-> Numcilindros=numcilindros;
           this->Numpuertas=numpuertas;
        }

    void setNumcilindros(string numcilindros){
       this-> Numcilindros = numcilindros;
    }

    string getNumcilindros(){
        return Numcilindros;
    }

    void setNumpuertas(string numpuertas){
       this-> Numpuertas = numpuertas;
    }

    string getNumpuertas(){
        return Numpuertas;
    }
    
    void informaNissan(){
        cout << "La camioneta " << Nombre << " es de la compañia " << Compania << ", cuenta con un total de "<< Numpuertas <<" puertas."<<endl;
    }

    void cilindros(){
        cout<< "La camioneta "<<Nombre<<" cuenta con "<<Numcilindros<<" cilindros."<<endl;
    }
};




class Italika: public Motocicletas {
public:
    string Modelo;
    string Motor;

    // Constructor de la clase hija
    Italika(string numserie, string compania, string direccion, string email, int precio, string modelo, string motor)
        :Motocicletas(numserie, compania, direccion, email, precio){
            this-> Modelo=modelo;
            this->Motor=motor;
        }

    void setModelo(string modelo){
        this->Modelo = modelo;
    }

    string getModelo(){
        return Modelo;
    }

    void setMotor(string motor){
        this->Motor = motor;
    }

    string getMotor(){
        return Motor;
    }
    
    
    void mustrardatos(){
        cout << "La motocicleta es de la compañia " << Compania << ", su modelo es: "<< Modelo << ". El numero de serie es: "<<Numserie<<endl;
    }

    void mostrarmotor(){
        cout<<"La motocicleta tiene un motor de: "<<Motor<<endl;
    }
};


class Honda: public Motocicletas {
public:
    string Numfaros;
    string Cargamax;

    // Constructor de la clase hija
    Honda(string numserie, string compania, string direccion, string email, int precio, string numfaros, string cargamax)
        :Motocicletas(numserie, compania, direccion, email, precio){
            this-> Numfaros=numfaros;
            this->Cargamax=cargamax;
        }

    void setNumfaros(string numfaros){
        this->Numfaros = numfaros;
    }

    string getNumfaros(){
        return Numfaros;
    }

    void setCargamax(string cargamax){
        this->Cargamax = cargamax;
    }

    string getCargamax(){
        return Cargamax;
    }
    
    
    void muestracarga(){
        cout << "La motocicleta es de la compañia " << Compania << ". Puede hasta con un maximo de carga de: "<<Cargamax<<endl;
    }

    void faros(){

        cout<<"La motocicleta cuenta con un total de "<<Numfaros<<" faros."<<endl;
    }
};


//---------------------------------Metodos no miembros de ninguna clase----------------------------------

void aumentarPrecio(Camionetas &camionetas){ // Se esta pasando un objeto como parametro de la funcion (Como referencia para que se apliquen los cambios en el objeto original)
    int newprecio = camionetas.getPrecio() + 10000;
    cout << "New Precio: " << newprecio << endl;
    camionetas.setPrecio(newprecio);
}

void aumentarPrecio(Motocicletas &motocicletas){ // Se esta pasando un objeto como parametro de la funcion (Como referencia para que se apliquen los cambios en el objeto original)
    int newprecio = motocicletas.getPrecio() + 3000;
    cout << "New Precio: " << newprecio << endl;
    motocicletas.setPrecio(newprecio);
}




int main() { 


    Camionetas c1 = Camionetas("Montana","Chevrolet", "Santa Rosa Ags", "449-143-11-24", 700000 );
    c1.presentar();
    cout<<"\n";
    c1.promocion();
    cout<<"\n";
    c1.Contrato();
    cout<<"\n";
    c1.obtenerinfo();

  cout<<"\n\n\n\n";

    Ford f1 = Ford("Ranger", "Ford", "Av. Inmortal Aguascalientes Ags.", "449-367-23-11", 190300, "Ranger 2018", "Roja");
    f1.promocion();
    cout<<"\n";
    f1.presentar();
    cout<<"\n";
    f1.Contrato();
    cout<<"\n";
    f1.muestracolor();
    cout<<"\n";
    f1.muestramodelo();
    cout<<"\n";
    f1.obtenerinfo();

    cout<<"\n\n\n\n";

    Nissan n1 = Nissan("X-Trail", "Nissan", "Av. siglo XXI, Aguascalientes, Ags.", "449-456-23-89", 700000, "6", "4");

    n1.presentar();
    cout<<"\n";
    n1.promocion();
    cout<<"\n";
    n1.Contrato();
    cout<<"\n";
    n1.obtenerinfo();
    cout<<"\n";
    n1.informaNissan();
    cout<<"\n";
    n1.cilindros();

    cout<<"\n\n\n\n";

    Motocicletas m1 = Motocicletas("XRT5678WTS34", "Italika", "Palo Altao, El Llano Ags.", "motom@gmail.com", 18000);
    m1.Venta();
    cout<<"\n";
    m1.Contacto();
    cout<<"\n";
    m1.obtenerinfo();

  cout<<"\n\n\n\n";


    Italika i1 = Italika("STR4567ORGS", "Italika", "San Francisco, el LLano, Ags.", "italikamots@motos.mx", 20000, "250Z: 2021", "250" );
    i1.Venta();
    cout<<"\n";
    i1.Contacto();
    cout<<"\n";
    i1.obtenerinfo();
    cout<<"\n";
    i1.mostrarmotor();
    cout<<"\n";
    i1.mustrardatos();

    cout<<"\n\n\n\n";


    Honda h1 = Honda("RTD456G3000", "Honda", "AV. Convencion, Guadalajara", "hondamots@honda.mots.mx", 35000, "siete", "150kg");
    h1.Venta();
    cout<<"\n";
    h1.Contacto();
    cout<<"\n";
    h1.obtenerinfo();
    cout<<"\n";
    h1.muestracarga();
    cout<<"\n";
    h1.faros();

     cout<<"\n\n\n\n";


    //Metodo no miembro
    aumentarPrecio(n1);
    aumentarPrecio(f1);
     cout<<"La camioneta "<<n1.getNombre()<<" cuesta: "<<n1.getPrecio();
    cout<<"\n\n";
    cout<<"La camioneta "<<f1.getNombre()<<" cuesta: "<<f1.getPrecio();
 


    cout<<"\n\n\n\n";

    //polimorfismo!!

    Camionetas* c2 = &n1;
    Camionetas* c3 = &f1;

    c2->Contrato();
    c3->Contrato();

    
    cout<<"\n\n\n\n";
return 0;

}


