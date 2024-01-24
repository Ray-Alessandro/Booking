#pragma once
#include "Biblioteca.h"
class CompraReciente{
private:
    string nombre;
    string tipo;
    double precio;
    string productoNombre;
public:

    CompraReciente(string _nombre,string _tipo,double _precio,string _producto){
        this->nombre=_nombre;
        this->tipo=_tipo;
        this->precio=_precio;
        this->productoNombre=_producto;
    }
    ~CompraReciente() {}
    string getInfo(){
        return
        "Nombre de usuario: "+ nombre +"\n" +
        "Tipo de servicio: "+  tipo+"\n"+
        "Nombre del servicio: "+ productoNombre +"\n"+
        "Precio: "+ to_string(precio) + "\n";
    }

    void mostrarinfo() {
        Console::SetCursorPosition(50, 13);
        cout << "Nombre de usuario: " + nombre << endl;
        Console::SetCursorPosition(50, 14);
            cout<<"Tipo de servicio: " + tipo << endl; 
            Console::SetCursorPosition(50, 15);
            cout<<"Nombre del servicio: " + productoNombre << endl;
            Console::SetCursorPosition(50, 16);
            cout<<"Precio: " + to_string(precio) << endl;
    }


};