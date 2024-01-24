#pragma once
#include "Servicio.h"
#include "Usuario.h"
#include <fstream>
#include "Lista_Doble_Enlazada.hpp"


class Archivo {
private:
	Lista<Usuario*> ::Iterador* it;

	string dirreccionCarpeta;
	ofstream escribir;
	ifstream leer;
	string texto;

	int contador;
	string nombre;
	string apellido;
	string edad;
	string correo;
	string contra;
	string nivGenius;
	int longVector;


	int longAlojamiento;
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

	int longAlquiler;
	string modelo;
	string tipoMaletera;
	string nomEmpresa;


	int longVuelos;
	string iniciolugar;
	string fin;
	string fechaIda;
	string fechaVuelta;

	int longAtraccion;
	string lugar;
	string nomTuristico;
	string resLugar;

public:
	Archivo() {
	}
	~Archivo() {}

	void leerDatos(Lista<Usuario*>* list, int indice) {
		dirreccionCarpeta = "Lista de Usuarios ";
		string indiceCarpeta = to_string(indice);

		leer.open("Base de Datos/" + dirreccionCarpeta + indiceCarpeta + ".txt", ios::in);

		if (leer.fail()) {
			leer.close();
			return;
		}

		if (leer.good()) {
			getline(leer, texto);
			if (texto != "") {
				longVector = stoi(texto);
			}
			for (int i = 0; i < longVector; i++)
			{
				getline(leer, texto);
				if (texto != "") {
					nombre = texto;
				}
				getline(leer, texto);
				if (texto != "") {
					apellido = texto;
				}
				getline(leer, texto);
				if (texto != "") {
					edad = texto;
				}
				getline(leer, texto);
				if (texto != "") {
					contra = texto;
				}
				getline(leer, texto);
				if (texto != "") {
					correo = texto;
				}
				getline(leer, texto);
				if (texto != "") {
					nivGenius = texto;
				}
				getline(leer, texto);
				if (texto != "") {
					contador = stoi(texto);
				}

				Usuario* obj = new Usuario(nombre, apellido, edad, contra, correo, nivGenius, contador);
				list->agregarFinal(obj);

				if (i == 0) {
					it = new Lista<Usuario*> ::Iterador(list->inicial());
				}
				else {
					it->operator++();
				}


				//Alojamiento
				getline(leer, texto);
				if (texto != "") {
					longAlojamiento = stoi(texto);
					if (longAlojamiento > 0) {
						for (int j = 0; j < longAlojamiento; j++)
						{
							getline(leer, texto);
							if (texto != "") {
								numCamas = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								destino = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								internet = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								banio = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								precio = stof(texto);
							}
							getline(leer, texto);
							if (texto != "") {
								nomHotel = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								cantPersonas = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								estrellas = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								fechaLlegada = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								fechaSalida = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								aparcamiento = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								comida = texto;
							}
							R_Alojamiento* alojamiento = new R_Alojamiento(destino, numCamas, internet, banio, precio, nomHotel, cantPersonas, estrellas, fechaLlegada, fechaSalida, aparcamiento, comida);
							it->operator*()->getServicios()->getAlojamientos()->push_back(alojamiento);

						}
					}
					//For apartamiento
				}

				//Alquiler
				getline(leer, texto);
				if (texto != "") {
					longAlquiler = stoi(texto);
					if (longAlojamiento > 0) {
						for (int j = 0; j < longAlquiler; j++)
						{
							getline(leer, texto);
							if (texto != "") {
								modelo = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								precio = stof(texto);
							}
							getline(leer, texto);
							if (texto != "") {
								fechaLlegada = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								fechaSalida = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								tipoMaletera = texto;
							}

							getline(leer, texto);
							if (texto != "") {
								nomEmpresa = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								cantPersonas = texto;
							}

							R_AlquilerCoche* objAlquiler = new R_AlquilerCoche(modelo, precio, fechaLlegada, fechaSalida, tipoMaletera, nomEmpresa, cantPersonas);
							it->operator*()->getServicios()->getAlquileres()->push_back(objAlquiler);
						}//For Alquiler
					}
				}

				//Vuelos
				getline(leer, texto);
				if (texto != "") {
					longVuelos = stoi(texto);
					if (longVuelos > 0) {
						for (int j = 0; j < longVuelos; j++)
						{
							getline(leer, texto);
							if (texto != "") {
								iniciolugar = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								fin = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								fechaIda = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								fechaVuelta = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								precio = stof(texto);
							}
							R_Vuelo* objVuelo = new R_Vuelo(iniciolugar, fin, fechaIda, fechaVuelta, precio);
							it->operator*()->getServicios()->getVuelos()->push_back(objVuelo);
						}//For Vuelo
					}
				}

				//Atracciones
				getline(leer, texto);
				if (texto != "") {
					longAtraccion = stoi(texto);
					if (longAtraccion > 0) {
						for (int j = 0; j < longAtraccion; j++)
						{
							getline(leer, texto);
							if (texto != "") {
								lugar = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								nomTuristico = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								resLugar = texto;
							}
							getline(leer, texto);
							if (texto != "") {
								precio = stof(texto);
							}

							R_Atraccion* objAtraccion = new R_Atraccion(lugar, nomTuristico, resLugar, precio);
							it->operator*()->getServicios()->getAtracciones()->push_back(objAtraccion);
						}//For Atraccion
					}
				}
			} //For persona
		}
		leer.close();
	}

	void guardarDatos(Lista<Usuario*>* list) {
		dirreccionCarpeta = "Lista de Usuarios ";
		int indiceCarp = 1, limitador = 0;
		int cantidadLimiteCarp = 2000;
		double comprobarTam = 0.0;
		string indiceCarpeta = to_string(indiceCarp);
		char existeArchivo = 's';
		string inidiceActual;

		if (list->longitud() > 0) {
			//
			leer.open("Base de Datos/" + dirreccionCarpeta + indiceCarpeta + ".txt", ios::in);
			if (leer.fail()) {
				leer.close();
				escribir.open("Base de Datos/" + dirreccionCarpeta + indiceCarpeta + ".txt", ios::out);
				comprobarTam = cantidadLimiteCarp / 100;
				if (comprobarTam >= 1) {
					escribir << "*" << endl << endl;
				}
				else {
					escribir << "*" << endl;
				}
				escribir.close();
			}
			else if (leer.good()) {
				getline(leer, inidiceActual);
				if (inidiceActual == "") {
					limitador = 0;
				}
				else {
					limitador = stoi(inidiceActual);
				}
			}

			while (limitador >= cantidadLimiteCarp)
			{
				//
				leer.close();
				indiceCarp++;
				indiceCarpeta = to_string(indiceCarp);
				leer.open("Base de Datos/" + dirreccionCarpeta + indiceCarpeta + ".txt", ios::in);
				if (leer.fail()) {
					leer.close();
					escribir.open("Base de Datos/" + dirreccionCarpeta + indiceCarpeta + ".txt", ios::out);
					escribir << "*" << endl;
					escribir.close();
					limitador = 0;
					leer.open("Base de Datos/" + dirreccionCarpeta + indiceCarpeta + ".txt", ios::in);
					existeArchivo = 'n';
				}
				else {
					getline(leer, inidiceActual);

					if (inidiceActual == "") {
						limitador = 0;
					}
					else {
						limitador = stoi(inidiceActual);
					}
				}
			}
			leer.close();

			if (inidiceActual != "*") {
				if (limitador == 0) {
					escribir.open("Base de Datos/" + dirreccionCarpeta + indiceCarpeta + ".txt", ios::in);
					escribir << "*" << endl;
					escribir.close();
				}

			}

			if (indiceCarp > 1 && limitador < cantidadLimiteCarp && existeArchivo == 's') {
				ofstream escribir1;
				ifstream leer1;
				escribir1.open("Base de Datos/Validar.txt", ios::trunc);
				leer1.open("Base de Datos/" + dirreccionCarpeta + indiceCarpeta + ".txt", ios::in);
				string auxiliar;
				getline(leer1, auxiliar);
				escribir1 << endl;

				while (!leer1.eof())
				{
					getline(leer1, auxiliar);
					if (!leer1.eof()) {
						escribir1 << auxiliar << endl;
					}
				}
				escribir1.close();
				leer1.close();

				leer1.open("Base de Datos/Validar.txt", ios::in);
				escribir1.open("Base de Datos/" + dirreccionCarpeta + indiceCarpeta + ".txt", ios::trunc);
				escribir1 << endl;
				while (!leer1.eof())
				{
					getline(leer1, auxiliar);
					if (!leer1.eof()) {
						escribir1 << auxiliar << endl;
					}
				}
				escribir1.clear();
				leer1.clear();
			}
			escribir.open("Base de Datos/" + dirreccionCarpeta + indiceCarpeta + ".txt", ios::app);
			//

			it = new Lista<Usuario*> ::Iterador(list->inicial());
			//it->operator*()

			for (int i = 0; i < list->longitud(); i++)
			{
				escribir << it->operator*()->getNombre() << endl;
				escribir << it->operator*()->getApellido() << endl;
				escribir << it->operator*()->getEdad() << endl;
				escribir << it->operator*()->getContra() << endl;
				escribir << it->operator*()->getCorreo() << endl;
				escribir << it->operator*()->getnivGenius() << endl;
				escribir << it->operator*()->getContador() << endl;
				//Alojamiento
				escribir << it->operator*()->getServicios()->getAlojamientos()->size() << endl;
				if (it->operator*()->getServicios()->getAlojamientos()->size() > 0) {
					for (int j = 0; j < it->operator*()->getServicios()->getAlojamientos()->size(); j++)
					{
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getnumCamas() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getdestino() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getinternet() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getbanio() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getprecio() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getnomHotel() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getcantPersonas() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getestrellas() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getfechaLlegada() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getfechaSalida() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getaparcamiento() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getcomida() << endl;
					}
				}


				//Alquileres
				escribir << it->operator*()->getServicios()->getAlquileres()->size() << endl;
				if (it->operator*()->getServicios()->getAlquileres()->size() > 0) {
					for (int j = 0; j < it->operator*()->getServicios()->getAlquileres()->size(); j++)
					{
						escribir << it->operator*()->getServicios()->getAlquileres()->at(j)->getmodelo() << endl;
						escribir << it->operator*()->getServicios()->getAlquileres()->at(j)->getprecio() << endl;
						escribir << it->operator*()->getServicios()->getAlquileres()->at(j)->getfechaLlegada() << endl;
						escribir << it->operator*()->getServicios()->getAlquileres()->at(j)->getfechaSalida() << endl;
						escribir << it->operator*()->getServicios()->getAlquileres()->at(j)->gettipoMaletera() << endl;
						escribir << it->operator*()->getServicios()->getAlquileres()->at(j)->getnomEmpresa() << endl;
						escribir << it->operator*()->getServicios()->getAlquileres()->at(j)->getcantPersonas() << endl;
					}
				}

				//Vuelos
				escribir << it->operator*()->getServicios()->getVuelos()->size() << endl;
				if (it->operator*()->getServicios()->getVuelos()->size() > 0) {
					for (int j = 0; j < it->operator*()->getServicios()->getVuelos()->size(); j++)
					{
						escribir << it->operator*()->getServicios()->getVuelos()->at(j)->getiniciolugar() << endl;
						escribir << it->operator*()->getServicios()->getVuelos()->at(j)->getfin() << endl;
						escribir << it->operator*()->getServicios()->getVuelos()->at(j)->getfechaIda() << endl;
						escribir << it->operator*()->getServicios()->getVuelos()->at(j)->getfechaVuelta() << endl;
						escribir << it->operator*()->getServicios()->getVuelos()->at(j)->getprecio() << endl;

					}

				}

				//Atraccion
				escribir << it->operator*()->getServicios()->getAtracciones()->size() << endl;
				if (it->operator*()->getServicios()->getAtracciones()->size() > 0) {
					for (int j = 0; j < it->operator*()->getServicios()->getAtracciones()->size(); j++)
					{
						escribir << it->operator*()->getServicios()->getAtracciones()->at(j)->getlugar() << endl;
						escribir << it->operator*()->getServicios()->getAtracciones()->at(j)->getnomTuristico() << endl;
						escribir << it->operator*()->getServicios()->getAtracciones()->at(j)->getresLugar() << endl;
						escribir << it->operator*()->getServicios()->getAtracciones()->at(j)->getprecio() << endl;
					}
				}
				limitador++;
				it->operator++();
				//
				if ((limitador >= cantidadLimiteCarp) && (i < (list->longitud() - 1))) {
					//Verificar para cambiar a otro txt cuando llega a llenarse el txt
					escribir.close();
					escribir.open("Base de Datos/" + dirreccionCarpeta + indiceCarpeta + ".txt", ios::in);
					escribir << limitador;
					escribir.close();

					limitador = 0;
					indiceCarp++;
					indiceCarpeta = to_string(indiceCarp);

					escribir.open("Base de Datos/" + dirreccionCarpeta + indiceCarpeta + ".txt", ios::out);
					if (list->longitud() - i < cantidadLimiteCarp) {
						if (comprobarTam >= 1) {
							escribir << limitador << endl << endl;
						}
						else {
							escribir << limitador << endl;
						}

					}
					else {
						//
						if (comprobarTam >= 1) {
							escribir << limitador << endl << endl;
						}
						else {
							escribir << limitador << endl;
						}

					}
				}
			}

			escribir.close();
			ofstream escribir2;
			escribir2.open("Base de Datos/" + dirreccionCarpeta + indiceCarpeta + ".txt", ios::in);
			escribir2 << limitador;
			escribir2.close();
			ofstream escribir3;
			escribir3.open("Base de Datos/Validar.txt", ios::out);
			escribir3.close();
		}
		else {
			return;
		}
	}


	void actualizarDatos(Lista<Usuario*>* list, int indice) {
		dirreccionCarpeta = "Lista de Usuarios ";
		string indiceCarpeta = to_string(indice);
		string aux;
		ofstream escribir2;

		if (list->longitud() > 0) {
			leer.open("Base de Datos/" + dirreccionCarpeta + indiceCarpeta + ".txt", ios::in);
			getline(leer, aux);
			escribir2.open("Base de Datos/" + dirreccionCarpeta + indiceCarpeta + ".txt", ios::out);
			escribir2 << aux << endl;
			leer.close();
			escribir2.close();
			escribir.open("Base de Datos/" + dirreccionCarpeta + indiceCarpeta + ".txt", ios::app);
			//

			it = new Lista<Usuario*> ::Iterador(list->inicial());
			//it->operator*()

			for (int i = 0; i < list->longitud(); i++)
			{
				escribir << it->operator*()->getNombre() << endl;
				escribir << it->operator*()->getApellido() << endl;
				escribir << it->operator*()->getEdad() << endl;
				escribir << it->operator*()->getContra() << endl;
				escribir << it->operator*()->getCorreo() << endl;
				escribir << it->operator*()->getnivGenius() << endl;
				escribir << it->operator*()->getContador() << endl;
				//Alojamiento
				escribir << it->operator*()->getServicios()->getAlojamientos()->size() << endl;
				if (it->operator*()->getServicios()->getAlojamientos()->size() > 0) {
					for (int j = 0; j < it->operator*()->getServicios()->getAlojamientos()->size(); j++)
					{
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getnumCamas() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getdestino() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getinternet() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getbanio() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getprecio() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getnomHotel() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getcantPersonas() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getestrellas() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getfechaLlegada() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getfechaSalida() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getaparcamiento() << endl;
						escribir << it->operator*()->getServicios()->getAlojamientos()->at(j)->getcomida() << endl;
					}
				}


				//Alquileres
				escribir << it->operator*()->getServicios()->getAlquileres()->size() << endl;
				if (it->operator*()->getServicios()->getAlquileres()->size() > 0) {
					for (int j = 0; j < it->operator*()->getServicios()->getAlquileres()->size(); j++)
					{
						escribir << it->operator*()->getServicios()->getAlquileres()->at(j)->getmodelo() << endl;
						escribir << it->operator*()->getServicios()->getAlquileres()->at(j)->getprecio() << endl;
						escribir << it->operator*()->getServicios()->getAlquileres()->at(j)->getfechaLlegada() << endl;
						escribir << it->operator*()->getServicios()->getAlquileres()->at(j)->getfechaSalida() << endl;
						escribir << it->operator*()->getServicios()->getAlquileres()->at(j)->gettipoMaletera() << endl;
						escribir << it->operator*()->getServicios()->getAlquileres()->at(j)->getnomEmpresa() << endl;
						escribir << it->operator*()->getServicios()->getAlquileres()->at(j)->getcantPersonas() << endl;
					}
				}

				//Vuelos
				escribir << it->operator*()->getServicios()->getVuelos()->size() << endl;
				if (it->operator*()->getServicios()->getVuelos()->size() > 0) {
					for (int j = 0; j < it->operator*()->getServicios()->getVuelos()->size(); j++)
					{
						escribir << it->operator*()->getServicios()->getVuelos()->at(j)->getiniciolugar() << endl;
						escribir << it->operator*()->getServicios()->getVuelos()->at(j)->getfin() << endl;
						escribir << it->operator*()->getServicios()->getVuelos()->at(j)->getfechaIda() << endl;
						escribir << it->operator*()->getServicios()->getVuelos()->at(j)->getfechaVuelta() << endl;
						escribir << it->operator*()->getServicios()->getVuelos()->at(j)->getprecio() << endl;

					}

				}

				//Atraccion
				escribir << it->operator*()->getServicios()->getAtracciones()->size() << endl;
				if (it->operator*()->getServicios()->getAtracciones()->size() > 0) {
					for (int j = 0; j < it->operator*()->getServicios()->getAtracciones()->size(); j++)
					{
						escribir << it->operator*()->getServicios()->getAtracciones()->at(j)->getlugar() << endl;
						escribir << it->operator*()->getServicios()->getAtracciones()->at(j)->getnomTuristico() << endl;
						escribir << it->operator*()->getServicios()->getAtracciones()->at(j)->getresLugar() << endl;
						escribir << it->operator*()->getServicios()->getAtracciones()->at(j)->getprecio() << endl;
					}
				}
				it->operator++();
				//
				
			}
			escribir.close();
		}

	}
};