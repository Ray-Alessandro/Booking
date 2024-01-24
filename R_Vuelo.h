#pragma once
#include "Biblioteca.h"
#include <iomanip>
class R_Vuelo
{
private:
    string iniciolugar;
    string fin;
	string fechaIda;
	string fechaVuelta;
	double precio;
	
public:
	R_Vuelo (string _inicio,string _fin,string _fechaSalida,string _fechaLlegada,double _precio){
        this-> iniciolugar=_inicio;
        this->fin=_fin;
	    this-> fechaIda=_fechaSalida;
	    this-> fechaVuelta=_fechaLlegada;
	    this-> precio=_precio;
	}
	~R_Vuelo(){}
    string getInfo() {//
        return
            "Punto de Inicio: " + iniciolugar + "\n" +
            "Punto de llegada: " + fin + "\n" +
            "De: " + fechaIda + "\n" +
            "Hasta : " + fechaVuelta + "\n" +
            "Precio: " + to_string( (precio)) + "\n" ;
    }
	void setPrecio(double descuento){
        precio = precio - precio * descuento;
    }
	int getDia() {
		int dato_1 = int(fechaIda.at(0) - 48);
		int dato_2 = int(fechaIda.at(1) - 48);
		return dato_1 * 10 + dato_2;
	}
	int getMes() {
		int dato_1 = int(fechaIda.at(3) - 48);
		int dato_2 = int(fechaIda.at(4) - 48);
		return dato_1 * 10 + dato_2;
	}
	string getiniciolugar(){ return  iniciolugar;}
	string getfin() { return  fin; ;}
	string getfechaIda() { return  fechaIda; ;}
	string getfechaVuelta() { return  fechaVuelta; ;}
	double getprecio() { return  precio;  }
};