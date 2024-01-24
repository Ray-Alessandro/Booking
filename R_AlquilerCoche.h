#pragma once
#include "Biblioteca.h"

class R_AlquilerCoche{
private:
    string modelo;
    double precio;
    string fechaLlegada;
    string fechaSalida;
    string tipoMaletera;
    string nomEmpresa;
    string cantPersonas;
public:
    R_AlquilerCoche(string _modelo,double _precio,string _fechaLlegada,string _fechaSalida,
    string _tipoMaletera,string _nomEmpresa,string _cantPersonas){
        this->modelo=_modelo;
        this->precio=_precio;
        this->fechaLlegada=_fechaLlegada;
        this->fechaSalida=_fechaSalida;
        this->tipoMaletera=_tipoMaletera;
        this->nomEmpresa=_nomEmpresa;
        this->cantPersonas=_cantPersonas;
    }
    ~R_AlquilerCoche(){}
    string getInfo() {
        return
            "Empresa: " + nomEmpresa + "\n" +
            "Modelo de carro: " + modelo + "\n" +
            "De: " + fechaSalida + "\n" +
            "Hasta : " + fechaLlegada + "\n" +
            "Precio: " + to_string(precio) + "\n" +
            "Cantidad de personas: " + cantPersonas + "\n" +
            "Tipo de maletera: " + tipoMaletera + "\n" ;
    }
	int getDia() {
		int dato_1 = int(fechaSalida.at(0) - 48);
		int dato_2 = int(fechaSalida.at(1) - 48);
		return dato_1 * 10 + dato_2;
	}
	int getMes() {
		int dato_1 = int(fechaSalida.at(3) - 48);
		int dato_2 = int(fechaSalida.at(4) - 48);
		return dato_1 * 10 + dato_2;
	}
    string getmodelo(){return modelo;}
    double getprecio(){    return precio;}
    string getfechaLlegada(){     return fechaLlegada;}
    string getfechaSalida(){     return fechaSalida; }
    string gettipoMaletera(){    return tipoMaletera;}
    string getnomEmpresa(){    return nomEmpresa;}
    string getcantPersonas() {    return cantPersonas;}

    void setPrecio(double descuento){
        precio = precio - precio * descuento;
    }
};