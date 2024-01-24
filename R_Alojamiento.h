#pragma once
#include "Biblioteca.h"

class R_Alojamiento{
private:
    string numCamas;
    string destino;
    string internet;
    string banio;
    double precio;
    string nomHotel;
    string cantPersonas;
    string estrellas;
    string fechaLlegada;
    string fechaSalida;
    string aparcamiento;
    string comida;
public:
    R_Alojamiento(string _destino,string _numCamas,string _internet,string _banio, double _precio,
    string _nomHotel,string _cantPersonas,string _estrellas,string _fechaLlegada,string _fechaSalida,
    string _aparcamiento,string _comida){
        this->numCamas=_numCamas;
        this->internet=_internet;
        this->banio=_banio;
        this->precio=_precio;
        this->nomHotel=_nomHotel;
        this->cantPersonas=_cantPersonas;
        this->estrellas=_estrellas;
        this->fechaLlegada=_fechaLlegada;
        this->fechaSalida=_fechaSalida;
        this->aparcamiento=_aparcamiento;
        this->comida=_comida;
        this->destino=_destino;

    }
    ~R_Alojamiento(){}
    string getInfo() {
        setlocale(LC_ALL, ("spanish"));
        return
            "Hotel: " + nomHotel + "\n" +
            "Estrellas: " + estrellas + "\n" +
            "Destino: " + destino + "\n" +
            "De: " + fechaSalida + "\n" +
            "Hasta : " + fechaLlegada + "\n" +
            "Precio: " + to_string(precio) + "\n" +
            "Cantidad de personas: " + cantPersonas + "\n" +
            "Numero de camas: " + numCamas + "\n" +
            "Internet: " + internet + "\n" +
            "Banio: " + banio + "\n" +
            "Incluye comida: " + comida + "\n" +
            "Cuenta con aparcamiento: " + aparcamiento + "\n" ;
    }
    void setPrecio(double descuento){
        precio = precio - precio * descuento;
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
    string getnumCamas(){return  numCamas; }
    string getdestino() { return   destino; }
    string getinternet() { return   internet; }
    string getbanio() { return   banio; }
    double getprecio() { return   precio; }
    string getnomHotel() { return  nomHotel; }
    string getcantPersonas() { return   cantPersonas; }
    string getestrellas() { return   estrellas; }
    string getfechaLlegada() { return   fechaLlegada; }
    string getfechaSalida() { return   fechaSalida; }
    string getaparcamiento() { return   aparcamiento; }
    string getcomida() { return   comida; }

};

