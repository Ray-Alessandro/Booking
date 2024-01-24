#pragma once
#include "Biblioteca.h"
#include "Servicio.h"
#include "BibliotecaUsuario.h"

class Usuario {
private:
	string nombre;
    string apellido;
	string edad;
	string correo;
	string contra;
	string nivGenius;
	Servicio* serviciosReservados;
	vector<string> imagenPerfil;
	int contador;
	double descuento;
public:
	Usuario(string nombre,string apellido,string edad,string contra, string correo) {
		this->nombre = nombre;
        this->apellido = apellido;
		this->contra = contra;
		this->correo = correo;
		this->edad = edad;
		this->nivGenius = "1";
		serviciosReservados = new Servicio();
		this->contador=0;
		this->descuento = 0.1;

		int* aux = new int;
		*aux= 0 + rand() % (29 + 1 - 0);
		imagenPerfil = generarImagenPerfil(*aux);
		delete aux;
	}
	Usuario(string nombre, string apellido, string edad, string contra, string correo, string nivGenius,int contador) {
		this->nombre = nombre;
		this->apellido = apellido;
		this->contra = contra;
		this->correo = correo;
		this->edad = edad;
		this->nivGenius = nivGenius;
		serviciosReservados = new Servicio();
		if(nivGenius=="3"){
			this->descuento = 0.3;
		}
		else if (nivGenius == "2") {
			this->descuento=0.2;
		}
		else {
			this->descuento = 0.1;
		}
		
		this->contador = contador;	

		int* aux = new int;
		*aux = 0 + rand() % (29 + 1 - 0);
		imagenPerfil = generarImagenPerfil(*aux);
		delete aux;
	}
	~Usuario(){}

	string getInfo() {
		return "Nombre: " + this->nombre +
			"\nApellido: " + this->apellido +
            "\nCorreo: " + this->correo +
			"\nEdad: " + this->edad +
			"\nNivel de Genius: " + this->nivGenius+ "\n";
	}

	//Hash
	/*string getInfo() {
		return "Nombre: " + this->nombre +
			"\nApellido: " + this->apellido +
			"\nCorreo: " + this->correo +
			"\nEdad: " + this->edad +
			"\nNivel de Genius: " + this->nivGenius +
			"\nContrasenia: " + this->contra + "\n";
	}*/

	//Recursividad 1
	template <typename T>
	void getInfoServicios(vector<T*>* arreglo,int indice){
		if(indice<arreglo->size()){
			cout << "\t" << arreglo->at(indice)->getInfo();
			cout << endl << endl;
			getInfoServicios(arreglo,indice+1);
		}
	}

	void getInfoServicios() {
		if (serviciosReservados->getAlojamientos()->size() > 0) {
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "                                                   -----------------------" << endl;
			cout << "                                                   | Reservas de Hoteles |" << endl;
			cout << "                                                   -----------------------" << endl;
			cout << endl;
			getInfoServicios(serviciosReservados->getAlojamientos(), 0);

		}

		if (serviciosReservados->getAlquileres()->size() > 0) {
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "                                             -----------------------------------" << endl;
			cout << "                                             | Reservas de Alquileres de coche |" << endl;
			cout << "                                             -----------------------------------" << endl;
			cout << endl;
			getInfoServicios(serviciosReservados->getAlquileres(), 0);
		}

		if (serviciosReservados->getVuelos()->size() > 0) {
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;

			cout << "                                                   ----------------------" << endl;
			cout << "                                                   | Reservas de Vuelos |" << endl;
			cout << "                                                   ----------------------" << endl;
			cout << endl;
			getInfoServicios(serviciosReservados->getVuelos(), 0);
		}

		if (serviciosReservados->getAtracciones()->size() > 0) {
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "                                             ------------------------------------" << endl;
			cout << "                                             | Reservas de Atractivos turiticos |" << endl;
			cout << "                                             ------------------------------------" << endl;
			cout << endl;
			getInfoServicios(serviciosReservados->getAtracciones(), 0);
		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
		
		}
	}

	void setNombre(int nombre) {
		this->nombre = nombre;
	}

	void setEdad(string edad) {
		this->edad = edad;
	}
	void setContra(int contra) {
		this->contra = contra;
	}
	void setId(int correo) {
		this->correo = correo;
	}
	void aumentarContador() {
		contador++;
	}
	string getKey() {
		return this->nombre+contra;
	}
	string getNombre() {	return this->nombre;}
	string getEdad() {	return this->edad;}
	string getContra() {	return this->contra;}
	string getApellido() {	return this->apellido;}
	string getCorreo() {	return this->correo;}
	string getnivGenius() {	return this->nivGenius;}
	Servicio* getServicios() {
		return serviciosReservados;
	}
	double getDescuento(){return descuento;}
	string getNivel(){return nivGenius;}
	int getContador() {
		return contador;
	}

	void corroborarNivel(){
		if(contador==2){
			this->nivGenius="2";
			this->descuento = 0.2;
			serviciosReservados->aplicarDescuentos(descuento);
		}
		if(contador==3){
			this->nivGenius="3";
			this->descuento = 0.3;
			serviciosReservados->aplicarDescuentos(descuento);
		}
	}

	void mostrarDatosPerfil() {
		Console::SetCursorPosition(14, 13);
		cout << "Nombre: " << nombre;
		Console::SetCursorPosition(14, 16);
		cout << "Apellidos: " << apellido;
		Console::SetCursorPosition(14, 19);
		cout << "Edad: " << edad;
		Console::SetCursorPosition(14, 22);
		cout << "Correo: " << correo;
		Console::SetCursorPosition(14, 25);
		cout << "Nivel de Genius: " << nivGenius;
		Console::SetCursorPosition(14, 28);
		cout << "Cantidad de Compras Adquiridas: " << contador;

	}

	void mostrarImagenPerfil() {
		for (int i = 0; i < imagenPerfil.size(); i++)
		{
			Console::SetCursorPosition(70, i + 1);
			for (int j = 0; j < imagenPerfil.at(i).size(); j++)
			{

				if (imagenPerfil.at(i).at(j) == 'M' || imagenPerfil.at(i).at(j) == 'W' || imagenPerfil.at(i).at(j) == 'N' || imagenPerfil.at(i).at(j) == 'm' || imagenPerfil.at(i).at(j) == '.' || imagenPerfil.at(i).at(j) == '`') {
					Console::ForegroundColor = ConsoleColor::Black;
				}
				else if (imagenPerfil.at(i).at(j) == ' ')
				{
				}
				else {				
					Console::ForegroundColor = ConsoleColor::Black;
				}

				cout << imagenPerfil.at(i).at(j);
			}

		}
	}
};



