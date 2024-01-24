#pragma once
#include "Biblioteca.h"

class R_Atraccion {
private:
    string lugar;
    string nomTuristico;
    string resLugar;
    double precio;
public:
    R_Atraccion(string _lugar, string _nomTuristico, string _resLugar, double _precio) {
        this->lugar = _lugar;
        this->nomTuristico = _nomTuristico;
        this->resLugar = _resLugar;
        this->precio = _precio;
    }
    ~R_Atraccion() {
    }
    string getInfo() {
        return
            "Lugar: " + lugar + "\n" +
            "Nombre del lugar turistico: " + nomTuristico + "\n" +
            "Valoracion del lugar: " + resLugar + "\n" +
            "Precio: "  + to_string(precio)+"\n";
    }
    string getlugar(){return lugar; }
    string getnomTuristico(){return nomTuristico; }
    string getresLugar() {return resLugar; }
    double getprecio() {return precio;}
    void setPrecio(double descuento){
        precio = precio - precio * descuento;
    }
};