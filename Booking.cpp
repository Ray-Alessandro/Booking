#include "Servicio.h"
#include "Usuario.h"
#include "Lista_Doble_Enlazada.hpp"
#include "Archivo.h"
#include "Cola.hpp"
#include "Pila.hpp"
#include "PregFrecuentes.h"
#include "CompraReciente.h"
#include "QuickSort.h"
#include "Shell.h"
#include "Mergesort.h"
#include "HashTable.h"
#include "Timsort.h"
#include "FisherYatesShuffle.h"
#include "GeneradorUsuario.h"
#include "ArbolAVL.h"
#include <list>
using namespace std;

void Integrnates() {
	Console::ForegroundColor = ConsoleColor::DarkYellow;
	Console::SetCursorPosition(95, 19);
	cout << "Integrantes";  Console::SetCursorPosition(85, 20);
	cout << "Del Carmen Zorrilla,Ray Alessandro";  Console::SetCursorPosition(96, 21);
	cout << "(u202124061)";  Console::SetCursorPosition(86, 23);
	cout << "Aguilar Lindo, Agustín Alejandro";  Console::SetCursorPosition(96, 24);
	cout << "(u202124068)";  Console::SetCursorPosition(87, 26);
	cout << "Cipriano Chumbes, Bruce Andrés";  Console::SetCursorPosition(96, 27);
	cout << "(u20211d640)";  Console::SetCursorPosition(89, 29);
	cout << "Loarte Matos, Anthony Brahan";  Console::SetCursorPosition(96, 30);
	cout << "(u20211d563)";
	Console::ForegroundColor = ConsoleColor::Black;
}

void logoboo() {
	int cont = 10;
	int posx = 1;
	vector<string>logobooking;

	logobooking.push_back("           WNKOxoolodk0XW            ");
	logobooking.push_back("       WNKOxoc         cok0XNW       ");
	logobooking.push_back(" WXK0Oxdlc                 codkOKXNW ");
	logobooking.push_back("Wklc            lxkxl            co0W");
	logobooking.push_back("Nx             cOWWNx             cOW");
	logobooking.push_back("Wk             cOWWNk             l0 ");
	logobooking.push_back("W0c            l0WMWkc            oX ");
	logobooking.push_back(" Xo          cd0NMMMXOoc          kN ");
	logobooking.push_back(" Wkc       lxKWWWMMMWWN0dc       lK  ");
	logobooking.push_back("  Ko     lkKX0kx0WMW0xOKX0xc    ckN  ");
	logobooking.push_back("  WOc    oxdl  cOWMNk  clddl    dX   ");
	logobooking.push_back("   Nkc        cxKWMW0oc        oKW   ");
	logobooking.push_back("    Nkc      ok00OOO0Oxc      oKW    ");
	logobooking.push_back("     Nkl     cc      cc      dKW     ");
	logobooking.push_back("      W0o                  ckN       ");
	logobooking.push_back("       WXkl              cd0W        ");
	logobooking.push_back("         WKxl          cd0N          ");
	logobooking.push_back("           WXko      cd0NW           ");
	logobooking.push_back("              N0xdodOXW              ");
	logobooking.push_back("                WNNW                 ");


	for (int i = 0; i < logobooking.size(); i++)
	{
		Console::SetCursorPosition(posx, cont++);
		for (int j = 0; j < logobooking.at(i).size(); j++)
		{
			if (logobooking.at(i).at(j) == 'M' || logobooking.at(i).at(j) == 'W' || logobooking.at(i).at(j) == 'N')
				Console::ForegroundColor = ConsoleColor::Blue;
			else
				Console::ForegroundColor = ConsoleColor::DarkBlue;
			cout << logobooking.at(i).at(j);

		}

	}

}

void marcoUPC() {
	int cont = 0;
	int posx = 29;
	vector<string>marco;
	marco.push_back(" .G@@&G@&YJYYYYYYJJYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJB@");
	marco.push_back(" #@@~  #G ______ _____  _____ _     ________   _ ______!@");
	marco.push_back(".@@#   #B|_____]|     ||     ||____/   |  | \\  ||  ____7@");
	marco.push_back(".@@#   #B|_____]|_____||_____||    \\___|__|  \\_||_____|7@");
	marco.push_back(".@@#   #B                                             7@");
	marco.push_back(".@@#   #B                                             7@");
	marco.push_back(".@@#   #B   G@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@G    7@");
	marco.push_back(".@@#   #B   G@                                  @P    7@");
	marco.push_back(".@@#   #B   G@                                 .@P    7@");
	marco.push_back(".@@#   #B   G@.                                .@P    7@");
	marco.push_back(".@@#   #B   G@.                                .@P    7@");
	marco.push_back(".@@#   #B   G@.                                .@P    7@");
	marco.push_back(".@@#   #B   G@.                                .@P    7@");
	marco.push_back(".@@#   #B   G@.                                .@P    7@");
	marco.push_back(".@@#   #B   G@.                                .@P    7@");
	marco.push_back(".@@#   #B   G@.                                .@P    7@");
	marco.push_back(".@@#   #B   G@.                                .@P    7@");
	marco.push_back(".@@#   #B   G@.                                .@P    7@");
	marco.push_back(".@@#   #B   G@.                                .@P    7@");
	marco.push_back(".@@#   #B   G@.                                .@P    7@");
	marco.push_back(".@@#   #B   G@.                                .@P    7@");
	marco.push_back(".@@#   #B   G@.                                .@P    7@");
	marco.push_back(".@@#   #B   G@.                                .@P    7@");
	marco.push_back(".@@#   #B   G@                                 J@P    7@");
	marco.push_back(".@@#   #B   G@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@G    7@");
	marco.push_back(".@@#   #B                                             7@");
	marco.push_back(".@@#:                                                 #@");
	marco.push_back(".@@@@@#GPGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGP!");
	marco.push_back(".@@@?                                                      ");
	marco.push_back(".@@#    ?5YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY5~");
	marco.push_back(" P@@P.                                                     ");
	marco.push_back("  !B@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&?");

	for (int i = 0; i < marco.size(); i++)
	{
		Console::SetCursorPosition(posx, cont++);
		for (int j = 0; j < marco.at(i).size(); j++)
		{
			if (marco.at(i).at(j) == 'B' || marco.at(i).at(j) == '@')
				Console::ForegroundColor = ConsoleColor::Green;
			else
				Console::ForegroundColor = ConsoleColor::DarkGreen;
			cout << marco.at(i).at(j);

		}

	}

}

void simboloUPC() {
	Console::ForegroundColor = ConsoleColor::DarkRed;
	int cont = 0;
	int posx = 80;
	vector<string>logoUPC;
	Console::SetCursorPosition(posx + 15, cont++);
	logoUPC.push_back("WWW 				       ");
	for (int j = 0; j < logoUPC.at(cont - 1).size(); j++)
	{
		if (logoUPC.at(cont - 1).at(j) == ',')
			Console::ForegroundColor = ConsoleColor::DarkRed;
		else
			Console::ForegroundColor = ConsoleColor::Red;
		cout << logoUPC.at(cont - 1).at(j);

	}
	Console::SetCursorPosition(posx + 14, cont++);
	logoUPC.push_back("WKxxKWW 				   ");
	for (int j = 0; j < logoUPC.at(cont - 1).size(); j++)
	{
		if (logoUPC.at(cont - 1).at(j) == ',')
			Console::ForegroundColor = ConsoleColor::DarkRed;
		else
			Console::ForegroundColor = ConsoleColor::Red;
		cout << logoUPC.at(cont - 1).at(j);

	}
	Console::SetCursorPosition(posx + 13, cont++);
	logoUPC.push_back("WNk:,oXW          WNW	   ");
	for (int j = 0; j < logoUPC.at(cont - 1).size(); j++)
	{
		if (logoUPC.at(cont - 1).at(j) == ',')
			Console::ForegroundColor = ConsoleColor::DarkRed;
		else
			Console::ForegroundColor = ConsoleColor::Red;
		cout << logoUPC.at(cont - 1).at(j);

	}
	Console::SetCursorPosition(posx + 4, cont++);
	logoUPC.push_back("WKOKW    Xd;,,lKWW         NKOKW	   ");
	for (int j = 0; j < logoUPC.at(cont - 1).size(); j++)
	{
		if (logoUPC.at(cont - 1).at(j) == ',')
			Console::ForegroundColor = ConsoleColor::DarkRed;
		else
			Console::ForegroundColor = ConsoleColor::Red;
		cout << logoUPC.at(cont - 1).at(j);

	}
	Console::SetCursorPosition(posx + 2, cont++);
	logoUPC.push_back("WNkoOW    WO:,,,;okKW         NOokN   ");
	for (int j = 0; j < logoUPC.at(cont - 1).size(); j++)
	{
		if (logoUPC.at(cont - 1).at(j) == ',')
			Console::ForegroundColor = ConsoleColor::DarkRed;
		else
			Console::ForegroundColor = ConsoleColor::Red;
		cout << logoUPC.at(cont - 1).at(j);

	}
	Console::SetCursorPosition(posx + 1, cont++);
	logoUPC.push_back("WXd:xN     Nx,,,,,,,:d0N        Nx:dXW ");
	for (int j = 0; j < logoUPC.at(cont - 1).size(); j++)
	{
		if (logoUPC.at(cont - 1).at(j) == ',')
			Console::ForegroundColor = ConsoleColor::DarkRed;
		else
			Console::ForegroundColor = ConsoleColor::Red;
		cout << logoUPC.at(cont - 1).at(j);

	}
	Console::SetCursorPosition(posx + 1, cont++);
	logoUPC.push_back("Xd;:0W     Wk;,,,,,,,,:dXW      W0:;dX ");
	for (int j = 0; j < logoUPC.at(cont - 1).size(); j++)
	{
		if (logoUPC.at(cont - 1).at(j) == ',')
			Console::ForegroundColor = ConsoleColor::DarkRed;
		else
			Console::ForegroundColor = ConsoleColor::Red;
		cout << logoUPC.at(cont - 1).at(j);

	}
	Console::SetCursorPosition(posx, cont++);
	logoUPC.push_back("Wk:,c0W     WKo,,,,,,,,,,oXW     W0c,:kW");
	for (int j = 0; j < logoUPC.at(cont - 1).size(); j++)
	{
		if (logoUPC.at(cont - 1).at(j) == ',')
			Console::ForegroundColor = ConsoleColor::DarkRed;
		else
			Console::ForegroundColor = ConsoleColor::Red;
		cout << logoUPC.at(cont - 1).at(j);

	}
	Console::SetCursorPosition(posx, cont++);
	logoUPC.push_back("Nd,,:kW      WKd;,,,,,,,,;kW     Wk;,,dN");
	for (int j = 0; j < logoUPC.at(cont - 1).size(); j++)
	{
		if (logoUPC.at(cont - 1).at(j) == ',')
			Console::ForegroundColor = ConsoleColor::DarkRed;
		else
			Console::ForegroundColor = ConsoleColor::Red;
		cout << logoUPC.at(cont - 1).at(j);

	}
	Console::SetCursorPosition(posx, cont++);
	logoUPC.push_back("Xo,,,lKW       NOo;,,,,,,,xN    WKl,,,oX");
	for (int j = 0; j < logoUPC.at(cont - 1).size(); j++)
	{
		if (logoUPC.at(cont - 1).at(j) == ',')
			Console::ForegroundColor = ConsoleColor::DarkRed;
		else
			Console::ForegroundColor = ConsoleColor::Red;
		cout << logoUPC.at(cont - 1).at(j);

	}
	Console::SetCursorPosition(posx, cont++);
	logoUPC.push_back("No,,,,oKW        N0l;;,',;kW   WKl,,,,dN");
	for (int j = 0; j < logoUPC.at(cont - 1).size(); j++)
	{
		if (logoUPC.at(cont - 1).at(j) == ',')
			Console::ForegroundColor = ConsoleColor::DarkRed;
		else
			Console::ForegroundColor = ConsoleColor::Red;
		cout << logoUPC.at(cont - 1).at(j);

	}
	Console::SetCursorPosition(posx, cont++);
	logoUPC.push_back("Wk;,,,,ckXW       WKkl,,,dXW WNkc,,,,;kW");
	for (int j = 0; j < logoUPC.at(cont - 1).size(); j++)
	{
		if (logoUPC.at(cont - 1).at(j) == ',')
			Console::ForegroundColor = ConsoleColor::DarkRed;
		else
			Console::ForegroundColor = ConsoleColor::Red;
		cout << logoUPC.at(cont - 1).at(j);

	}
	Console::SetCursorPosition(posx + 1, cont++);
	logoUPC.push_back("Xo,,,,,;lxKNW    WXKd,:dXWNKkl;,,,,,oX");
	for (int j = 0; j < logoUPC.at(cont - 1).size(); j++)
	{
		if (logoUPC.at(cont - 1).at(j) == ',')
			Console::ForegroundColor = ConsoleColor::DarkRed;
		else
			Console::ForegroundColor = ConsoleColor::Red;
		cout << logoUPC.at(cont - 1).at(j);

	}
	Console::SetCursorPosition(posx + 1, cont++);
	logoUPC.push_back("WKo;,,,,,,;ldkOKXXOdllxkkdl:,'',,';oKW");
	for (int j = 0; j < logoUPC.at(cont - 1).size(); j++)
	{
		if (logoUPC.at(cont - 1).at(j) == ',')
			Console::ForegroundColor = ConsoleColor::DarkRed;
		else
			Console::ForegroundColor = ConsoleColor::Red;
		cout << logoUPC.at(cont - 1).at(j);

	}
	Console::SetCursorPosition(posx + 2, cont++);
	logoUPC.push_back("WXx:,',,,,,,,,;::;;;;;,,,,,,,,',:xXW");
	for (int j = 0; j < logoUPC.at(cont - 1).size(); j++)
	{
		if (logoUPC.at(cont - 1).at(j) == ',')
			Console::ForegroundColor = ConsoleColor::DarkRed;
		else
			Console::ForegroundColor = ConsoleColor::Red;
		cout << logoUPC.at(cont - 1).at(j);

	}
	Console::SetCursorPosition(posx + 4, cont++);
	logoUPC.push_back("WKd:,,,,,,,,,,,,,,,,,,,,,,,,:dKW");
	for (int j = 0; j < logoUPC.at(cont - 1).size(); j++)
	{
		if (logoUPC.at(cont - 1).at(j) == ',')
			Console::ForegroundColor = ConsoleColor::DarkRed;
		else
			Console::ForegroundColor = ConsoleColor::Red;
		cout << logoUPC.at(cont - 1).at(j);

	}
	Console::SetCursorPosition(posx + 6, cont++);
	logoUPC.push_back("WKkl:,,,,,,,,,,,,,,,,,,:lkKW");
	for (int j = 0; j < logoUPC.at(cont - 1).size(); j++)
	{
		if (logoUPC.at(cont - 1).at(j) == ',')
			Console::ForegroundColor = ConsoleColor::DarkRed;
		else
			Console::ForegroundColor = ConsoleColor::Red;
		cout << logoUPC.at(cont - 1).at(j);

	}
	Console::SetCursorPosition(posx + 9, cont++);
	logoUPC.push_back("NKOxol::;;;;;;::loxOXNW");
	for (int j = 0; j < logoUPC.at(cont - 1).size(); j++)
	{
		if (logoUPC.at(cont - 1).at(j) == ',')
			Console::ForegroundColor = ConsoleColor::DarkRed;
		else
			Console::ForegroundColor = ConsoleColor::Red;
		cout << logoUPC.at(cont - 1).at(j);

	}
	Console::SetCursorPosition(posx + 12, cont++);
	logoUPC.push_back("WWNXXKKKKKKXXNWW");
	for (int j = 0; j < logoUPC.at(cont - 1).size(); j++)
	{
		if (logoUPC.at(cont - 1).at(j) == ',')
			Console::ForegroundColor = ConsoleColor::DarkRed;
		else
			Console::ForegroundColor = ConsoleColor::Red;
		cout << logoUPC.at(cont - 1).at(j);
	}
}

Usuario* crearUsuario() {
	system("cls");
	string nombre;
	string apellido;
	string edad;
	string correo;
	string contra;
	int posicion = 5;
	Console::SetCursorPosition(40, posicion++);
	cout << "~77777777777777777!^^^^^^^^^^^^^~777777777????????7.";
	Console::SetCursorPosition(40, posicion++);
	cout << "55YYYYYYYYYYYYYYYY?!!77777!!!!!~7JYYYYYYYYYYYYYYYYP^";
	Console::SetCursorPosition(40, posicion++);
	cout << "Y:                ...............                 ?^";
	Console::SetCursorPosition(40, posicion++);
	cout << "Y:      ------------------------------------      ?^";
	Console::SetCursorPosition(40, posicion++);
	cout << "Y:      |  Crear de una cuenta de Booking  |      ?~";
	Console::SetCursorPosition(40, posicion++);
	cout << "J:      ------------------------------------      J~";
	Console::SetCursorPosition(40, posicion++);
	cout << "J:                                                J~";
	Console::SetCursorPosition(40, posicion++);
	cout << "J:                                                J~";
	Console::SetCursorPosition(40, posicion++);
	cout << "Y:                                                J~";
	Console::SetCursorPosition(40, posicion++);
	cout << "J:                                                J~";
	Console::SetCursorPosition(40, posicion++);
	cout << "J:                                                J~";
	Console::SetCursorPosition(40, posicion++);
	cout << "J:                                                J~";
	Console::SetCursorPosition(40, posicion++);
	cout << "J:                                                J~";
	Console::SetCursorPosition(40, posicion++);
	cout << "J:                                                J~";
	Console::SetCursorPosition(40, posicion++);
	cout << "J:                                                J~";
	Console::SetCursorPosition(40, posicion++);
	cout << "J:                                                J~";
	Console::SetCursorPosition(40, posicion++);
	cout << "J:                                                J~";
	Console::SetCursorPosition(40, posicion++);
	cout << "J:                                                J^";
	Console::SetCursorPosition(40, posicion++);
	cout << "J:                                                J^";
	Console::SetCursorPosition(40, posicion++);
	cout << "J:                                                J^";
	Console::SetCursorPosition(40, posicion++);
	cout << "J:                                                J^";
	Console::SetCursorPosition(40, posicion++);
	cout << "J.                                                J^";
	Console::SetCursorPosition(40, posicion++);
	cout << "JYJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJG^";



	cin.ignore();
	Console::SetCursorPosition(44, 14);
	cout << "Ingrese su nombre: "; getline(cin, nombre);
	Console::SetCursorPosition(44, 16);
	cout << "Ingrese su apellido: "; getline(cin, apellido);
	Console::SetCursorPosition(44, 18);
	cout << "Ingrese su edad: "; getline(cin, edad);
	Console::SetCursorPosition(44, 20);
	cout << "Ingrese su correo: "; getline(cin, correo);
	Console::SetCursorPosition(44, 22);
	cout << "Ingrese su contrasenia: "; getline(cin, contra);
	Usuario* nuevUsu = new Usuario(nombre, apellido, edad, contra, correo);
	Console::SetCursorPosition(58, 25);
	cout << "[Persona Creada]" << endl;

	Console::SetCursorPosition(0, 31);
	Console::BackgroundColor = ConsoleColor::Black;
	Console::ForegroundColor = ConsoleColor::White;
	Console::SetCursorPosition(0, 31);
	cout << "                                         Presione una tecla para continuar . . .   ";
	Console::SetCursorPosition(80, 31);
	Console::ForegroundColor = ConsoleColor::Black;


	return nuevUsu;
}

void menu() {
	setlocale(LC_ALL, "");
	Console::ForegroundColor = ConsoleColor::Black;
	Console::SetCursorPosition(45, 7);
	cout << "Bienvenidos a BOOKING UPC" << endl;
	Console::SetCursorPosition(44, 8);
	cout << "---------------------------" << endl;
	Console::SetCursorPosition(45, 10);
	cout << "1.Registrar usuario" << endl;
	Console::SetCursorPosition(45, 12);
	cout << "2.Mostrar usuarios" << endl;
	Console::SetCursorPosition(45, 14);
	cout << "3.Realizar una reserva online" << endl;
	Console::SetCursorPosition(45, 16);
	cout << "4.Guardar Usuarios" << endl;
	Console::SetCursorPosition(45, 18);
	cout << "5.Ver preguntas frecuentes" << endl;
	Console::SetCursorPosition(45, 20);
	cout << "6.Salir" << endl;
	Console::SetCursorPosition(45, 22);
	cout << "Ingrese su opcion:";
}

int main() {
	Console::SetWindowSize(120, 32);
	srand(time(NULL));
	int opc;
	int usu;
	int p;
	int seleccionarBaseDatos = 1;
	int cantidadHash=2000;

	PregFrecuentes* preg;
	string titulo;
	string des;
	HashTable<Usuario*>* hashTable;

	int l;

	ifstream leer;
	int indiceCarp;
	string indiceCarpeta;

	ArbolAVL <R_Alojamiento*>* treeAlojamientos;
	ArbolAVL <R_Vuelo*>* treeVuelos;
	ArbolAVL <R_AlquilerCoche*>* treeAlquiler;

	GeneradorUsuario* generador = new GeneradorUsuario();
	Servicio* obj = new Servicio();
	Archivo* file = new Archivo();
	QuickSort* orden_quickSort;
	orden_quickSort = new QuickSort();
	Shell* orden_shell;
	orden_shell = new Shell();
	Mergesort* orden_mergesort;
	orden_mergesort = new Mergesort();
	TimSort* orden_timsort;
	orden_timsort = new TimSort();
	FisherYates* desordenar;
	desordenar = new FisherYates();
	Cola<PregFrecuentes*>* cola = new Cola<PregFrecuentes*>();
	Pila<CompraReciente*>* pila = new Pila<CompraReciente*>();

	Lista<Usuario*>* list;
	list = nullptr;

	auto print1 = [](R_Alojamiento* s1) {cout << s1->getInfo() << endl; };
	auto print2 = [](R_Vuelo* s1) {cout << s1->getInfo() << endl; };
	auto print3 = [](R_AlquilerCoche* s1) {cout << s1->getInfo() << endl; };

	obj->genenerarServicios();


	//Variables para usar el hash
	Lista<Usuario*> ::Iterador* it;

	//Asignando el almacenado el tamaño de la lista
	int tamListaHash;

	//Asignando el almacenado de la lista  de una posición del vector Hash en un Iterador
	std::list<HashEntidad<Usuario*>> ::iterator it2;

	
	system("color 70");

	do {

		logoboo();
		marcoUPC();
		simboloUPC();
		menu();
		Integrnates();

		do
		{
			Console::SetCursorPosition(65, 22);
			cin >> opc;
		} while (opc < 0 || opc>6);

		switch (opc) {
		case 1: {
			system("cls");
			if(list== nullptr){
				list = new  Lista<Usuario*>([](Usuario* p1, Usuario* p2) {
				if (p1->getInfo() > p2->getInfo())
					return 1;
				else if (p1->getInfo() < p2->getInfo())
					return -1;
				else
					return 0;
				}
				);
			}
			

			int opcionApartUsuario = 0;
			int posicion = 5;
			Console::SetCursorPosition(40, posicion++);
			cout << "~77777777777777777!^^^^^^^^^^^^^~777777777????????7.";
			Console::SetCursorPosition(40, posicion++);
			cout << "55YYYYYYYYYYYYYYYY?!!77777!!!!!~7JYYYYYYYYYYYYYYYYP^";
			Console::SetCursorPosition(40, posicion++);
			cout << "Y:                ...............                 ?^";
			Console::SetCursorPosition(40, posicion++);
			cout << "Y:                                                ?^";
			Console::SetCursorPosition(40, posicion++);
			cout << "Y:                                                ?~";
			Console::SetCursorPosition(40, posicion++);
			cout << "Y:             ------------------------           J~";
			Console::SetCursorPosition(40, posicion++);
			cout << "Y:             | REGISTRO DE USUARIOS |           J~";
			Console::SetCursorPosition(40, posicion++);
			cout << "Y:             ------------------------           J~";
			Console::SetCursorPosition(40, posicion++);
			cout << "Y:                                                J~";
			Console::SetCursorPosition(40, posicion++);
			cout << "J:       1.Registrar manualmente un usuario       J~";
			Console::SetCursorPosition(40, posicion++);
			cout << "J:       2.Generar usuarios aleatoriamente        J~";
			Console::SetCursorPosition(40, posicion++);
			cout << "J:                                                J~";
			Console::SetCursorPosition(40, posicion++);
			cout << "J:                                                J~";
			Console::SetCursorPosition(40, posicion++);
			cout << "J:                                                J~";
			Console::SetCursorPosition(40, posicion++);
			cout << "J:                                                J~";
			Console::SetCursorPosition(40, posicion++);
			cout << "J:                                                J~";
			Console::SetCursorPosition(40, posicion++);
			cout << "J:                                                J~";
			Console::SetCursorPosition(40, posicion++);
			cout << "J:                                                J^";
			Console::SetCursorPosition(40, posicion++);
			cout << "J:                                                J^";
			Console::SetCursorPosition(40, posicion++);
			cout << "J:                                                J^";
			Console::SetCursorPosition(40, posicion++);
			cout << "J:                                                J^";
			Console::SetCursorPosition(40, posicion++);
			cout << "J.                                                J^";
			Console::SetCursorPosition(40, posicion++);
			cout << "JYJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJG^";
			do
			{
				Console::SetCursorPosition(40, posicion - 6);
				cout << "J:             Ingrese su opcion: ";
				cin >> opcionApartUsuario;
			} while (opcionApartUsuario < 1 || opcionApartUsuario>2);
			if (opcionApartUsuario == 1) {
				Usuario* nuevUsu = crearUsuario();

				if (nuevUsu != nullptr) {
					list->agregarFinal(nuevUsu);
				}
			}
			else {
				int cantiUsuarios = 0;
				system("cls");
				posicion = 5;
				Console::SetCursorPosition(40, posicion++);
				cout << "~77777777777777777!^^^^^^^^^^^^^~777777777????????7.";
				Console::SetCursorPosition(40, posicion++);
				cout << "55YYYYYYYYYYYYYYYY?!!77777!!!!!~7JYYYYYYYYYYYYYYYYP^";
				Console::SetCursorPosition(40, posicion++);
				cout << "Y:                ...............                 ?^";
				Console::SetCursorPosition(40, posicion++);
				cout << "Y:                                                ?^";
				Console::SetCursorPosition(40, posicion++);
				cout << "Y:                                                ?~";
				Console::SetCursorPosition(40, posicion++);
				cout << "Y:               --------------------             J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "Y:               | GENERAR USUARIOS |             J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "Y:               --------------------             J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "Y:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "Y:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "Y:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J^";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J^";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J^";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J^";
				Console::SetCursorPosition(40, posicion++);
				cout << "J.                                                J^";
				Console::SetCursorPosition(40, posicion++);
				cout << "JYJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJG^";
				Console::SetCursorPosition(42, 14 + 3);
				cout << "   Ingrese la cantidad de Usuarios a Generar:";
				Console::SetCursorPosition(62, 16 + 3);
				cout << "[          ]";
				Console::SetCursorPosition(63, 16 + 3);
				cin >> cantiUsuarios;
				generador->generarBaseDatosv2(cantiUsuarios, list);
				Console::SetCursorPosition(42, 26);
				cout << "        [Personas Generadas Correctamente]\n\n" << endl;

				Console::SetCursorPosition(0, 31);
				Console::BackgroundColor = ConsoleColor::Black;
				Console::ForegroundColor = ConsoleColor::White;
				Console::SetCursorPosition(0, 31);
				cout << "                                         Presione una tecla para continuar . . .   ";
				Console::SetCursorPosition(80, 31);
				Console::ForegroundColor = ConsoleColor::Black;


			}

		}
			  break;
		case 2: {
			system("cls");
			int elec;
			do {
				if (list != nullptr) {
					Console::SetCursorPosition(32, 12);
					cout << "       Vacee su lista de Usuarios para continuar :D " << endl;
					Console::SetCursorPosition(0, 31);
					Console::BackgroundColor = ConsoleColor::Black;
					Console::ForegroundColor = ConsoleColor::White;
					Console::SetCursorPosition(0, 31);
					cout << "                                         Presione una tecla para continuar . . .   ";
					Console::SetCursorPosition(80, 31);
					Console::ForegroundColor = ConsoleColor::Black;
					system("pause");
					system("cls");
					system("color 70");
					break;
				}
				int posicion = 5;
				Console::SetCursorPosition(40, posicion++);
				cout << "~77777777777777777!^^^^^^^^^^^^^~777777777????????7.";
				Console::SetCursorPosition(40, posicion++);
				cout << "55YYYYYYYYYYYYYYYY?!!77777!!!!!~7JYYYYYYYYYYYYYYYYP^";
				Console::SetCursorPosition(40, posicion++);
				cout << "Y:                ...............                 ?^";
				Console::SetCursorPosition(40, posicion++);
				cout << "Y:                                                ?^";
				Console::SetCursorPosition(40, posicion++);
				cout << "Y:                                                ?~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "Y:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J^";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J^";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J^";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J^";
				Console::SetCursorPosition(40, posicion++);
				cout << "J.                                                J^";
				Console::SetCursorPosition(40, posicion++);
				cout << "JYJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJG^";

				Console::SetCursorPosition(41, 11);
				cout << "                       [1]";
				Console::SetCursorPosition(41, 12);
				cout << "   1.     Ver lista de usuarios registrados " << endl;
				Console::SetCursorPosition(41, 15);
				cout << "                       [2]";
				Console::SetCursorPosition(41, 16);
				cout << "   2.     Ver datos del ultimo servicio";
				Console::SetCursorPosition(41, 17);
				cout << "                      reservado   " << endl;

				Console::SetCursorPosition(60, 20);
				cout << "Seleccion[ ]" << endl;
				Console::SetCursorPosition(70, 20);
				cin >> elec;
			} while (elec < 0 || elec>2);

			switch (elec)
			{
			case 1: {
				system("cls");
				indiceCarp = 1;
				indiceCarpeta = to_string(indiceCarp);

				do
				{
					leer.open("Base de Datos/Lista de Usuarios " + indiceCarpeta + ".txt", ios::in);
					if (leer.good()) {
						leer.close();
						indiceCarp++;
						indiceCarpeta = to_string(indiceCarp);
					}
					else {
						leer.close();
						indiceCarp--;
						break;
					}

				} while (true);

				do
				{
					Console::SetCursorPosition(32, 12);
					cout << "Indique el numero de la una lista de usuarios entre 1 y " << indiceCarp << " :" << endl;
					Console::SetCursorPosition(64 - 5, 14);
					cout << "[   ]";
					Console::SetCursorPosition(65 - 5, 14);
					cin >> seleccionarBaseDatos;
				} while (seleccionarBaseDatos < 1 || seleccionarBaseDatos>indiceCarp);

				list = new  Lista<Usuario*>([](Usuario* p1, Usuario* p2) {
					if (p1->getInfo() > p2->getInfo())
						return 1;
					else if (p1->getInfo() < p2->getInfo())
						return -1;
					else
						return 0;
					}
				);

				file->leerDatos(list, seleccionarBaseDatos);
				system("cls");
				int aux = 0;
				if (list != nullptr && list->longitud() > 0) {
					cout << "                                                        --------------------" << endl;
					cout << "                                                        | Lista de Usuario |" << endl;
					cout << "                                                        --------------------" << endl;
					cout << endl;

					for (Lista<Usuario*> ::Iterador it = list->inicial(); it != list->ultimo(); it++) {
						cout << "[" << aux + 1 << "]: " << endl;
						cout << it.operator*()->getInfo();
						cout << "-----------------------------" << endl;
						aux++;
					}
					cout << "\n";
					Console::BackgroundColor = ConsoleColor::Black;
					Console::ForegroundColor = ConsoleColor::White;
					cout << "                                         Presione una tecla para continuar . . .";
					Console::ForegroundColor = ConsoleColor::Black;
				}
				else {
					Console::SetCursorPosition(40, 15);
					cout << "Actualmente no existen usuarios :(";
					Console::SetCursorPosition(0, 31);
					Console::BackgroundColor = ConsoleColor::Black;
					Console::ForegroundColor = ConsoleColor::White;
					Console::SetCursorPosition(0, 31);
					cout << "                                         Presione una tecla para continuar . . .   ";
					Console::SetCursorPosition(80, 31);
					Console::ForegroundColor = ConsoleColor::Black;

				}
				delete list;
				list = nullptr;
				break;
			}
			case 2:
				system("cls");
				int posicion = 5;
				Console::SetCursorPosition(40, posicion++);
				cout << "~77777777777777777!^^^^^^^^^^^^^~777777777????????7.";
				Console::SetCursorPosition(40, posicion++);
				cout << "55YYYYYYYYYYYYYYYY?!!77777!!!!!~7JYYYYYYYYYYYYYYYYP^";
				Console::SetCursorPosition(40, posicion++);
				cout << "Y:                ...............                 ?^";
				Console::SetCursorPosition(40, posicion++);
				cout << "Y:                                                ?^";
				Console::SetCursorPosition(40, posicion++);
				cout << "Y:                                                ?~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "Y:                                                J~";
				Console::SetCursorPosition(40, posicion++);
				cout << "J.                                                J^";
				Console::SetCursorPosition(40, posicion++);
				cout << "J.                                                J^";
				Console::SetCursorPosition(40, posicion++);
				cout << "J.                                                J^";
				Console::SetCursorPosition(40, posicion++);
				cout << "J.                                                J^";
				Console::SetCursorPosition(40, posicion++);
				cout << "J.                                                J^";
				Console::SetCursorPosition(40, posicion++);
				cout << "JYJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJG^";

				if (!pila->empty()) {
					Console::SetCursorPosition(42, 10);
					cout << "        [Ultimo servicio reservado]" << endl;
					pila->pop()->mostrarinfo();
				}
				else
				{
					Console::SetCursorPosition(46, 13);
					cout << "[No hay registro de la ultima compra]" << endl;
				}

				Console::SetCursorPosition(0, 31);
				Console::BackgroundColor = ConsoleColor::Black;
				Console::ForegroundColor = ConsoleColor::White;
				Console::SetCursorPosition(0, 31);
				cout << "                                         Presione una tecla para continuar . . .   ";
				Console::SetCursorPosition(80, 31);
				Console::ForegroundColor = ConsoleColor::Black;

				break;
			}
			break;
		}
		case 3:
			system("cls");
			if (list != nullptr) {
				Console::SetCursorPosition(32, 12);
				cout << "       Vacee su lista de Usuarios para continuar :D " << endl;
				Console::SetCursorPosition(0, 31);
				Console::BackgroundColor = ConsoleColor::Black;
				Console::ForegroundColor = ConsoleColor::White;
				Console::SetCursorPosition(0, 31);
				cout << "                                         Presione una tecla para continuar . . .   ";
				Console::SetCursorPosition(80, 31);
				Console::ForegroundColor = ConsoleColor::Black;
				system("pause");
				system("color 70");
				system("cls");
				Console::SetCursorPosition(0, 31);
				Console::BackgroundColor = ConsoleColor::Black;
				Console::ForegroundColor = ConsoleColor::White;
				Console::SetCursorPosition(0, 31);
				cout << "                                         Presione una tecla para continuar . . .   ";
				Console::SetCursorPosition(80, 31);
				Console::ForegroundColor = ConsoleColor::Black;
				break;
			}

			indiceCarp = 1;
			indiceCarpeta = to_string(indiceCarp);

			do
			{
				leer.open("Base de Datos/Lista de Usuarios " + indiceCarpeta + ".txt", ios::in);
				if (leer.good()) {
					leer.close();
					indiceCarp++;
					indiceCarpeta = to_string(indiceCarp);
				}
				else {
					leer.close();
					indiceCarp--;
					break;
				}
			} while (true);

			do
			{
				Console::SetCursorPosition(32, 12);
				cout << "Indique el numero de la una lista de usuarios entre 1 y " << indiceCarp << " :" << endl;
				Console::SetCursorPosition(64 - 5, 14);
				cout << "[   ]";
				Console::SetCursorPosition(65 - 5, 14);
				cin >> seleccionarBaseDatos;
			} while (seleccionarBaseDatos < 1 || seleccionarBaseDatos>indiceCarp);

			list = new  Lista<Usuario*>([](Usuario* p1, Usuario* p2) {
				if (p1->getInfo() > p2->getInfo())
					return 1;
				else if (p1->getInfo() < p2->getInfo())
					return -1;
				else
					return 0;
				}
			);

			file->leerDatos(list, seleccionarBaseDatos);

			Console::SetCursorPosition(40, 21);
			cout << "          [Base de Datos leidas]";
			Console::SetCursorPosition(0, 31);
			Console::BackgroundColor = ConsoleColor::Black;
			Console::ForegroundColor = ConsoleColor::White;
			Console::SetCursorPosition(0, 31);
			cout << "                                         Presione una tecla para continuar . . .";
			Console::ForegroundColor = ConsoleColor::Black;

			system("pause");
			system("color 70");
			system("cls");
			


			cout << "                                                        --------------------" << endl;
			cout << "                                                        | Lista de Usuario |" << endl;
			cout << "                                                        --------------------" << endl;
			cout << endl;
			if (list->longitud() > 0) {
				int aux = 0;
				cout << endl << endl;


				for (Lista<Usuario*> ::Iterador it = list->inicial(); it != list->ultimo(); it++) {
					cout << "[" << aux + 1 << "]: " << endl;
					cout << it.operator*()->getInfo();
					cout << "-----------------------------" << endl;
					aux++;
				}

				do
				{
					Console::SetCursorPosition(0, 4);
					cout << "Ingrese el indice del usuario con el cual desea reservar: ";
					cin >> usu;
				} while (usu<1 || usu>list->longitud());
		

				Console::SetCursorPosition(0, 31);
				Console::BackgroundColor = ConsoleColor::Black;
				Console::ForegroundColor = ConsoleColor::White;
				Console::SetCursorPosition(0, 5);
				cout << "                                         Presione una tecla para continuar . . .   ";
				Console::ForegroundColor = ConsoleColor::Black;
				Console::SetCursorPosition(80, 5);

				//Almacenando el Nodo del usuario en un iterador
				it = new Lista<Usuario*> ::Iterador(list->nodoPosicion(usu - 1));

				//Inicializando Tabla Hash
				hashTable = new HashTable<Usuario*>(cantidadHash);

				//Insertando Usuarios a la Tabla Hash
				for (Lista<Usuario*> ::Iterador it = list->inicial(); it != list->ultimo(); it++) {
					hashTable->insertar(it.operator*()->getKey(), it.operator*());
				}
				system("pause");
				system("color 70");
	

				system("cls");
				int ser;
				do
				{
					Console::SetCursorPosition(53 - it->operator*()->getNombre().size() / 2, 1);
					for (int i = 0; i < it->operator*()->getNombre().size() + 13; i++)
					{
						cout << "-";
					}
					Console::SetCursorPosition(53 - it->operator*()->getNombre().size() / 2, 2);
					cout << "|BIENVENIDO " << it->operator*()->getNombre() << "|";
					Console::SetCursorPosition(53 - it->operator*()->getNombre().size() / 2, 3);
					for (int i = 0; i < it->operator*()->getNombre().size() + 13; i++)
					{
						cout << "-";
					}

					Console::SetCursorPosition(48, 5);
					cout << "[Nivel de Genius : " << it->operator*()->getNivel() << "] ";
					Console::SetCursorPosition(42, 6);
					cout << "[Cuentas con un descuento de " << it->operator*()->getDescuento() * 100 << "%]";
					Console::SetCursorPosition(45, 9);
					cout << "1.Mi cuenta";
					Console::SetCursorPosition(45, 11);
					cout << "2.Reservar un alojamiento";
					Console::SetCursorPosition(45, 13);
					cout << "3.Reservar un Vuelo" << endl;
					Console::SetCursorPosition(45, 15);
					cout << "4.Alquilar de coche" << endl;
					Console::SetCursorPosition(45, 17);
					cout << "5.Reservar un servicio de atraccion" << endl;
					Console::SetCursorPosition(45, 19);
					cout << "6.Atras" << endl;
					Console::SetCursorPosition(45, 22);
					cout << "Ingrese su opcion: ";
					do
					{
						Console::SetCursorPosition(65, 22);
						cin >> p;
					} while (p < 0 || p>6);

					int aux;
					switch (p)
					{

					case 1:
						do
						{
							Console::SetWindowSize(120, 32);
							system("cls");
							Console::SetCursorPosition(55, 6);
							cout << "-------------" << endl;
							Console::SetCursorPosition(55, 7);
							cout << "| MI CUENTA |" << endl;
							Console::SetCursorPosition(55, 8);
							cout << "-------------" << endl;
							Console::SetCursorPosition(45, 10);
							cout << "1.Ver mi prefil" << endl;
							Console::SetCursorPosition(45, 12);
							cout << "2.Ver mis reservas" << endl;
							Console::SetCursorPosition(45, 14);
							cout << "3.Ver cronograma de reservas" << endl;
							Console::SetCursorPosition(45, 16);
							cout << "4.Volver atras" << endl;
							do
							{
								Console::SetCursorPosition(45, 18);
								cout << "Ingrese su opcion: ";
								cin >> l;
							} while (l < 1 || l>4);
							switch (l)
							{
							case 1:
								Console::SetWindowSize(130, 32);
								system("cls");

								//Almacenando el tamaño de la lista
								tamListaHash = hashTable->obtenerListaEnPosicion(it->operator*()->getKey())->size();

								//Almacenando la lista en de una posición del vector Hash en un Iterador
								it2 = hashTable->obtenerListaEnPosicion(it->operator*()->getKey())->begin();

								if (tamListaHash > 1) {
									for (int i = 0; i < tamListaHash; i++)
									{
										if (it->operator*()->getNombre() == it2.operator*().getValor()->getNombre()) {
											if (it->operator*()->getApellido() == it2.operator*().getValor()->getApellido()) {
												if (it->operator*()->getContra() == it2.operator*().getValor()->getContra()) {
													break;
												}
											}
										}
										it2.operator++();
									}
									it2.operator*().getValor()->mostrarDatosPerfil();
									it2.operator*().getValor()->mostrarImagenPerfil();
									mostrarLogoPerfil();
								}
								else {
									it2.operator*().getValor()->mostrarDatosPerfil();
									it2.operator*().getValor()->mostrarImagenPerfil();
									mostrarLogoPerfil();
								}
								Console::SetCursorPosition(0, 31);
								Console::BackgroundColor = ConsoleColor::Black;
								Console::ForegroundColor = ConsoleColor::White;
								Console::SetCursorPosition(0, 31); 
								cout << "                                         Presione una tecla para continuar . . .           ";
								Console::SetCursorPosition(90, 31);
								Console::ForegroundColor = ConsoleColor::Black;
								break;
							case 2:
								system("cls");
								if (it->operator*()->getContador() > 0) {
									it->operator*()->getInfoServicios();
									Console::BackgroundColor = ConsoleColor::Black;
									Console::ForegroundColor = ConsoleColor::White;
									cout << "                                         Presione una tecla para continuar. . .";
									Console::ForegroundColor = ConsoleColor::Black;

								}
								else {
									Console::SetCursorPosition(40, 15);
									cout << "No cuentas con reservas actuales :,C";
									Console::SetCursorPosition(0, 31);
									Console::BackgroundColor = ConsoleColor::Black;
									Console::ForegroundColor = ConsoleColor::White;
									Console::SetCursorPosition(0, 31);
									cout << "                                         Presione una tecla para continuar . . .   ";
									Console::SetCursorPosition(80, 31);
									Console::ForegroundColor = ConsoleColor::Black;
								}
								break;
							case 3:
								do
								{
									system("cls");
									Console::SetCursorPosition(49, 6);
									cout << "------------------------" << endl;
									Console::SetCursorPosition(49, 7);
									cout << "| CRONOGRAMA DE RESERVAS |" << endl;
									Console::SetCursorPosition(49, 8);
									cout << "------------------------" << endl;
									Console::SetCursorPosition(45, 10);
									cout << "1.Cronograma de alojamientos" << endl;
									Console::SetCursorPosition(45, 12);
									cout << "2.Cronograma de vuelos" << endl;
									Console::SetCursorPosition(45, 14);
									cout << "3.Cronograma de alquiler de coche " << endl;
									Console::SetCursorPosition(45, 16);
									cout << "4.Volver atras " << endl;


									do
									{
										Console::SetCursorPosition(45, 18);
										cout << "Ingrese su opcion: ";
										cin >> p;
									} while (p < 1 || p>4);

									switch (p)
									{
									case 1:
										system("cls");
										if (it->operator*()->getServicios()->getAlojamientos()->size() > 0) {
											treeAlojamientos = new ArbolAVL<R_Alojamiento*>([](R_Alojamiento* s1, R_Alojamiento* s2) {
												if (s1->getMes() == s2->getMes()) {
													if (s1->getDia() == s2->getDia())return 0;
													else if (s1->getDia() < s2->getDia())return 1;
													else if (s1->getDia() > s2->getDia()) return -1;
												}
												else if (s1->getMes() < s2->getMes())return 1;
												else if (s1->getMes() > s2->getMes())return -1; }, print1);
											for (int i = 0; i < it->operator*()->getServicios()->getAlojamientos()->size(); i++) {
												treeAlojamientos->insertar(it->operator*()->getServicios()->getAlojamientos()->at(i));
											}
											treeAlojamientos->_imprimir();
										}
										else {
											Console::SetCursorPosition(40, 15);
											cout << "Actualmente no cuentas con reservas de alojamiento :(";
										}
										Console::SetCursorPosition(0, 31);
										Console::BackgroundColor = ConsoleColor::Black;
										Console::ForegroundColor = ConsoleColor::White;
										Console::SetCursorPosition(0, 31);
										cout << "                                         Presione una tecla para continuar . . .    ";
										Console::SetCursorPosition(80, 31);
										Console::ForegroundColor = ConsoleColor::Black;
										break;
									case 2:
										system("cls");
										if (it->operator*()->getServicios()->getVuelos()->size() > 0) {
											treeVuelos = new ArbolAVL<R_Vuelo*>([](R_Vuelo* s1, R_Vuelo* s2) {
												if (s1->getMes() == s2->getMes()) {
													if (s1->getDia() == s2->getDia())return 0;
													else if (s1->getDia() < s2->getDia())return 1;
													else if (s1->getDia() > s2->getDia()) return -1;
												}
												else if (s1->getMes() < s2->getMes())return 1;
												else if (s1->getMes() > s2->getMes())return -1; }, print2);
											for (int i = 0; i < it->operator*()->getServicios()->getVuelos()->size(); i++) {
												treeVuelos->insertar(it->operator*()->getServicios()->getVuelos()->at(i));
											}
											treeVuelos->_imprimir();
										}
										else {
											Console::SetCursorPosition(40, 15);
											cout << "Actualmente no cuentas con reservas de vuelos :(";
										}
										Console::SetCursorPosition(0, 31);
										Console::BackgroundColor = ConsoleColor::Black;
										Console::ForegroundColor = ConsoleColor::White;
										Console::SetCursorPosition(0, 31);
										cout << "                                         Presione una tecla para continuar . . .   ";
										Console::SetCursorPosition(80, 31);
										Console::ForegroundColor = ConsoleColor::Black;
										break;
									case 3:
										system("cls");
										if (it->operator*()->getServicios()->getAlquileres()->size() > 0) {
											treeAlquiler = new ArbolAVL<R_AlquilerCoche*>([](R_AlquilerCoche* s1, R_AlquilerCoche* s2) {
												if (s1->getMes() == s2->getMes()) {
													if (s1->getDia() == s2->getDia())return 0;
													else if (s1->getDia() < s2->getDia())return 1;
													else if (s1->getDia() > s2->getDia()) return -1;
												}
												else if (s1->getMes() < s2->getMes())return 1;
												else if (s1->getMes() > s2->getMes())return -1; }, print3);
											for (int i = 0; i < it->operator*()->getServicios()->getAlquileres()->size(); i++) {
												treeAlquiler->insertar(it->operator*()->getServicios()->getAlquileres()->at(i));
											}
											treeAlquiler->_imprimir();
										}
										else {
											Console::SetCursorPosition(40, 15);
											cout << "Actualmente no cuentas con reservas de alquileres :(";
										}
										;										Console::SetCursorPosition(0, 31);
										Console::BackgroundColor = ConsoleColor::Black;
										Console::ForegroundColor = ConsoleColor::White;
										Console::SetCursorPosition(0, 31);
										cout << "                                         Presione una tecla para continuar . . .   ";
										Console::SetCursorPosition(80, 31);
										Console::ForegroundColor = ConsoleColor::Black;
										break;
									case 4:
										system("cls");
										Console::SetCursorPosition(0, 31);
										Console::BackgroundColor = ConsoleColor::Black;
										Console::ForegroundColor = ConsoleColor::White;
										Console::SetCursorPosition(0, 31);
										cout << "                                         Presione una tecla para continuar . . .    ";
										Console::SetCursorPosition(80, 31);
										Console::ForegroundColor = ConsoleColor::Black;
										break;

									}
									
									system("pause");
									system("color 70");
								} while (p != 4);
								Console::SetCursorPosition(0, 31);
								Console::BackgroundColor = ConsoleColor::Black;
								Console::ForegroundColor = ConsoleColor::White;
								Console::SetCursorPosition(0, 31);
								cout << "                                         Presione una tecla para continuar . . .    ";
								Console::SetCursorPosition(80, 31);
								Console::ForegroundColor = ConsoleColor::Black;
								break;
							case 4:
								Console::SetCursorPosition(34, 16);
								Console::SetWindowSize(120, 32);
								Console::SetCursorPosition(0, 31);
								Console::BackgroundColor = ConsoleColor::Black;
								Console::ForegroundColor = ConsoleColor::White;
								Console::SetCursorPosition(0, 31);
								cout << "                                         Presione una tecla para continuar . . .    ";
								Console::SetCursorPosition(80, 31);
								Console::ForegroundColor = ConsoleColor::Black;
								break;

							}
							system("pause");

							system("color 70");
						} while (l != 4);
						Console::SetCursorPosition(0, 31);
						Console::BackgroundColor = ConsoleColor::Black;
						Console::ForegroundColor = ConsoleColor::White;
						Console::SetCursorPosition(0, 31);
						cout << "                                         Presione una tecla para continuar . . .    ";
						Console::SetCursorPosition(80, 31);
						Console::ForegroundColor = ConsoleColor::Black;
						break;
					case 2:
						system("cls");
						aux = obj->cantOfertas(obj->getAlojamientos());
						if (aux > 0) {

							string busqueda = "a";

							int val = 0;
							obj->guardarAlojamiento();
							do
							{
								system("cls");
								if (busqueda.at(0) == 'a') cout << endl << endl << "         --------------------------------------\n" << "         |Odenamiento de precio predeterminado|\n" << "         --------------------------------------\n" << endl;
								else if (busqueda.at(0) == 'b')cout << endl << endl << "         ----------------------------\n" << "         |Odenamiento a menor precio|\n" << "         ----------------------------\n" << endl;
								else cout << endl << endl << "          ----------------------------\n" << "          |Odenamiento a mayor precio|\n" << "          ----------------------------\n" << endl;
								switch (busqueda.at(0))
								{
									//implementando ordenamiento avanzado #1 - QuickSort
								case 'a':
									obj->setAlojamiento();
									obj->getInfoArreglo(obj->getAlojamientos(), 0);
									break;
								case 'b':
									orden_quickSort->ordenarMenor(obj->getAlojamientos());
									obj->getInfoArreglo(obj->getAlojamientos(), 0);
									break;
								case 'c':
									orden_quickSort->ordenarMayor(obj->getAlojamientos());
									obj->getInfoArreglo(obj->getAlojamientos(), 0);
									break;
								}

								do
								{
									int posx = 70, posy = 2;
									Console::SetCursorPosition(posx, posy++);
									cout << "-----------------------------------------";
									Console::SetCursorPosition(posx, posy++);
									cout << "|a:Odenamiento de precio predeterminado |";
									Console::SetCursorPosition(posx, posy++);
									cout << "|b:Odenamiento a menor precio           |";
									Console::SetCursorPosition(posx, posy++);
									cout << "|c:Odenamiento a mayor precio           |";
									Console::SetCursorPosition(posx, posy++);
									cout << "-----------------------------------------";
									Console::SetCursorPosition(0, 0);
									cout << "Ingrese el indice de la promocion que desea reservar:  ";
									cin >> busqueda;

									//ser = busqueda = getch(); // a b c1  a

									if (busqueda == "a" || busqueda == "b" || busqueda == "c") {
										break;
									}

									if (busqueda.at(0) != '1' && busqueda.at(0) != '2' && busqueda.at(0) != '3' && busqueda.at(0) != '4'
										&& busqueda.at(0) != '5' && busqueda.at(0) != '6' && busqueda.at(0) != '7' && busqueda.at(0) != '8'
										&& busqueda.at(0) != '9') {
										busqueda = "0";
										ser = 0;
									}
									else {
										ser = stoi(busqueda);
									}

								} while (ser <1 || ser > aux);

							} while (busqueda == "a" || busqueda == "b" || busqueda == "c");//it->operator*()

							it->operator*()->getServicios()->getAlojamientos()->push_back(obj->getAlojamientos()->at(ser - 1));
							it->operator*()->aumentarContador();
							pila->push(new CompraReciente(it->operator*()->getNombre(), "Alojamiento", obj->getAlojamientos()->at(ser - 1)->getprecio(), obj->getAlojamientos()->at(ser - 1)->getnomHotel()));
							obj->eliminarServicio(obj->getAlojamientos(), ser - 1);
							system("cls");
							Console::SetCursorPosition(45, 15);
							cout << "\t[Servicio Reservado]" << endl;
							it->operator*()->corroborarNivel();

							// impllementando ordenamiento de intercambio - Fisher-Yate Shuffle
							desordenar->desordenar_arreglo(obj->getAlojamientos());

							Console::SetCursorPosition(0, 31);
							Console::BackgroundColor = ConsoleColor::Black;
							Console::ForegroundColor = ConsoleColor::White;
							Console::SetCursorPosition(0, 31);
							cout << "                                         Presione una tecla para continuar . . .    ";
							Console::SetCursorPosition(80, 31);
							Console::ForegroundColor = ConsoleColor::Black;
						}
						else {
							Console::SetCursorPosition(40, 15);
							cout << "\t[Ofertas Agotadas]" << endl;
							Console::SetCursorPosition(0, 31);
							Console::BackgroundColor = ConsoleColor::Black;
							Console::ForegroundColor = ConsoleColor::White;
							Console::SetCursorPosition(0, 31);
							cout << "                                         Presione una tecla para continuar . . .    ";
							Console::SetCursorPosition(80, 31);
							Console::ForegroundColor = ConsoleColor::Black;
						}

						break;
					case 3:
						system("cls");
						aux = obj->cantOfertas(obj->getVuelos());
						if (aux > 0) {
							string busqueda = "a";

							int val = 0;
							obj->guardarVuelo();
							do
							{
								system("cls");
								if (busqueda.at(0) == 'a') cout << endl << endl << "         --------------------------------------\n" << "         |Odenamiento de precio predeterminado|\n" << "         --------------------------------------\n" << endl;
								else if (busqueda.at(0) == 'b')cout << endl << endl << "         ----------------------------\n" << "         |Odenamiento a menor precio|\n" << "         ----------------------------\n" << endl;
								else cout << endl << endl << "          ----------------------------\n" << "          |Odenamiento a mayor precio|\n" << "          ----------------------------\n" << endl;
								switch (busqueda.at(0))
								{
									//Implementando ordenamiento avanzado #2 - TimSort
								case 'a':
									obj->setVuelo();
									obj->getInfoArreglo(obj->getVuelos(), 0);
									break;
								case 'b':
									orden_timsort->ordenar_menor(obj->getVuelos());
									obj->getInfoArreglo(obj->getVuelos(), 0);
									break;
								case 'c':
									orden_timsort->ordenar_mayor(obj->getVuelos());
									obj->getInfoArreglo(obj->getVuelos(), 0);
									break;
								}

								do
								{
									int posx = 70, posy = 2;
									Console::SetCursorPosition(posx, posy++);
									cout << "-----------------------------------------";
									Console::SetCursorPosition(posx, posy++);
									cout << "|a:Odenamiento de precio predeterminado |";
									Console::SetCursorPosition(posx, posy++);
									cout << "|b:Odenamiento a menor precio           |";
									Console::SetCursorPosition(posx, posy++);
									cout << "|c:Odenamiento a mayor precio           |";
									Console::SetCursorPosition(posx, posy++);
									cout << "-----------------------------------------";
									Console::SetCursorPosition(0, 0);
									cout << "Ingrese el indice de la promocion que desea reservar:  ";
									cin >> busqueda;

									if (busqueda == "a" || busqueda == "b" || busqueda == "c") {
										break;
									}

									if (busqueda.at(0) != '1' && busqueda.at(0) != '2' && busqueda.at(0) != '3' && busqueda.at(0) != '4'
										&& busqueda.at(0) != '5' && busqueda.at(0) != '6' && busqueda.at(0) != '7' && busqueda.at(0) != '8'
										&& busqueda.at(0) != '9') {
										busqueda = "0";
										ser = 0;
									}
									else {
										ser = stoi(busqueda);
									}

								} while (ser <1 || ser > aux);

							} while (busqueda == "a" || busqueda == "b" || busqueda == "c");
							it->operator*()->getServicios()->getVuelos()->push_back(obj->getVuelos()->at(ser - 1));
							pila->push(new CompraReciente(it->operator*()->getNombre(), "Vuelo", obj->getVuelos()->at(ser - 1)->getprecio(), obj->getVuelos()->at(ser - 1)->getiniciolugar()));
							obj->eliminarServicio(obj->getVuelos(), ser - 1);
							it->operator*()->aumentarContador();

							system("cls");
							Console::SetCursorPosition(45, 15);
							cout << "\t[Servicio Reservado]" << endl;
							it->operator*()->corroborarNivel();

							// impllementando ordenamiento de intercambio - Fisher-Yate Shuffle
							desordenar->desordenar_arreglo(obj->getVuelos());


							Console::SetCursorPosition(0, 31);
							Console::BackgroundColor = ConsoleColor::Black;
							Console::ForegroundColor = ConsoleColor::White;
							Console::SetCursorPosition(0, 31);
							cout << "                                         Presione una tecla para continuar . . .    ";
							Console::SetCursorPosition(80, 31);
							Console::ForegroundColor = ConsoleColor::Black;
						}
						else {
							Console::SetCursorPosition(40, 15);
							cout << "\t[Ofertas Agotadas]" << endl;
							Console::SetCursorPosition(0, 31);
							Console::BackgroundColor = ConsoleColor::Black;
							Console::ForegroundColor = ConsoleColor::White;
							Console::SetCursorPosition(0, 31);
							cout << "                                         Presione una tecla para continuar . . .    ";
							Console::SetCursorPosition(80, 31);
							Console::ForegroundColor = ConsoleColor::Black;
						}
						break;
					case 4:
						system("cls");
						aux = obj->cantOfertas(obj->getAlquileres());
						if (aux > 0) {
							string busqueda = "a";

							int val = 0;
							obj->guardarAlquiler();
							do
							{
								system("cls");
								if (busqueda.at(0) == 'a') cout << endl << endl << "         --------------------------------------\n" << "         |Odenamiento de precio predeterminado|\n" << "         --------------------------------------\n" << endl;
								else if (busqueda.at(0) == 'b')cout << endl << endl << "         ----------------------------\n" << "         |Odenamiento a menor precio|\n" << "         ----------------------------\n" << endl;
								else cout << endl << endl << "          ----------------------------\n" << "          |Odenamiento a mayor precio|\n" << "          ----------------------------\n" << endl;
								switch (busqueda.at(0))
								{
									//implementando ordenamiento avanzado #3 - Shell
								case 'a':
									obj->setAlquiler();
									obj->getInfoArreglo(obj->getAlquileres(), 0);
									break;
								case 'b':
									orden_shell->ordenar_menor(obj->getAlquileres());
									obj->getInfoArreglo(obj->getAlquileres(), 0);
									break;
								case 'c':
									orden_shell->ordenar_mayor(obj->getAlquileres());
									obj->getInfoArreglo(obj->getAlquileres(), 0);
									break;
								}

								do
								{
									int posx = 70, posy = 2;
									Console::SetCursorPosition(posx, posy++);
									cout << "-----------------------------------------";
									Console::SetCursorPosition(posx, posy++);
									cout << "|a:Odenamiento de precio predeterminado |";
									Console::SetCursorPosition(posx, posy++);
									cout << "|b:Odenamiento a menor precio           |";
									Console::SetCursorPosition(posx, posy++);
									cout << "|c:Odenamiento a mayor precio           |";
									Console::SetCursorPosition(posx, posy++);
									cout << "-----------------------------------------";
									Console::SetCursorPosition(0, 0);
									cout << "Ingrese el indice de la promocion que desea reservar:  ";
									cin >> busqueda;

									if (busqueda == "a" || busqueda == "b" || busqueda == "c") {
										break;
									}

									if (busqueda.at(0) != '1' && busqueda.at(0) != '2' && busqueda.at(0) != '3' && busqueda.at(0) != '4'
										&& busqueda.at(0) != '5' && busqueda.at(0) != '6' && busqueda.at(0) != '7' && busqueda.at(0) != '8'
										&& busqueda.at(0) != '9') {
										busqueda = "0";
										ser = 0;
									}
									else {
										ser = stoi(busqueda);
									}

								} while (ser <1 || ser > aux);

							} while (busqueda == "a" || busqueda == "b" || busqueda == "c");
							it->operator*()->getServicios()->getAlquileres()->push_back(obj->getAlquileres()->at(ser - 1));
							pila->push(new CompraReciente(it->operator*()->getNombre(), "Alquiler de Coche", obj->getAlquileres()->at(ser - 1)->getprecio(), obj->getAlquileres()->at(ser - 1)->getmodelo()));
							obj->eliminarServicio(obj->getAlquileres(), ser - 1);
							it->operator*()->aumentarContador();
							system("cls");
							Console::SetCursorPosition(45, 15);
							cout << "\t[Servicio Reservado]" << endl;
							it->operator*()->corroborarNivel();

							// impllementando ordenamiento de intercambio - Fisher-Yate Shuffle
							desordenar->desordenar_arreglo(obj->getAlquileres());

							Console::SetCursorPosition(0, 31);
							Console::BackgroundColor = ConsoleColor::Black;
							Console::ForegroundColor = ConsoleColor::White;
							Console::SetCursorPosition(0, 31);
							cout << "                                         Presione una tecla para continuar . . .    ";
							Console::SetCursorPosition(80, 31);
							Console::ForegroundColor = ConsoleColor::Black;
						}
						else {
							Console::SetCursorPosition(40, 15);
							cout << "\t[Ofertas Agotadas]" << endl;
							Console::SetCursorPosition(0, 31);
							Console::BackgroundColor = ConsoleColor::Black;
							Console::ForegroundColor = ConsoleColor::White;
							Console::SetCursorPosition(0, 31);
							cout << "                                         Presione una tecla para continuar . . .    ";
							Console::SetCursorPosition(80, 31);
							Console::ForegroundColor = ConsoleColor::Black;
						}
						break;
					case 5:
						system("cls");
						aux = obj->cantOfertas(obj->getAtracciones());

						if (aux > 0) {
							string busqueda = "a";

							int val = 0;
							obj->guardarAtraccion();
							do
							{
								system("cls");
								if (busqueda.at(0) == 'a') cout << endl << endl << "         --------------------------------------\n" << "         |Odenamiento de precio predeterminado|\n" << "         --------------------------------------\n" << endl;
								else if (busqueda.at(0) == 'b')cout << endl << endl << "         ----------------------------\n" << "         |Odenamiento a menor precio|\n" << "         ----------------------------\n" << endl;
								else cout << endl << endl << "          ----------------------------\n" << "          |Odenamiento a mayor precio|\n" << "          ----------------------------\n" << endl;
								switch (busqueda.at(0))
								{
									//implementando ordenamiento avanzado #4 - MergeSort
								case 'a':
									obj->setAtraccion();
									obj->getInfoArreglo(obj->getAtracciones(), 0);
									break;
								case 'b':
									orden_mergesort->ordenar_menor(obj->getAtracciones());
									obj->getInfoArreglo(obj->getAtracciones(), 0);
									break;
								case 'c':
									orden_mergesort->ordenar_mayor(obj->getAtracciones());
									obj->getInfoArreglo(obj->getAtracciones(), 0);
									break;
								}

								do
								{
									int posx = 70, posy = 2;
									Console::SetCursorPosition(posx, posy++);
									cout << "-----------------------------------------";
									Console::SetCursorPosition(posx, posy++);
									cout << "|a:Odenamiento de precio predeterminado |";
									Console::SetCursorPosition(posx, posy++);
									cout << "|b:Odenamiento a menor precio           |";
									Console::SetCursorPosition(posx, posy++);
									cout << "|c:Odenamiento a mayor precio           |";
									Console::SetCursorPosition(posx, posy++);
									cout << "-----------------------------------------";
									Console::SetCursorPosition(0, 0);
									cout << "Ingrese el indice de la promocion que desea reservar:  ";
									cin >> busqueda;

									if (busqueda == "a" || busqueda == "b" || busqueda == "c") {
										break;
									}

									if (busqueda.at(0) != '1' && busqueda.at(0) != '2' && busqueda.at(0) != '3' && busqueda.at(0) != '4'
										&& busqueda.at(0) != '5' && busqueda.at(0) != '6' && busqueda.at(0) != '7' && busqueda.at(0) != '8'
										&& busqueda.at(0) != '9') {
										busqueda = "0";
										ser = 0;
									}
									else {
										ser = stoi(busqueda);
									}

								} while (ser <1 || ser > aux);

							} while (busqueda == "a" || busqueda == "b" || busqueda == "c");
							it->operator*()->getServicios()->getAtracciones()->push_back(obj->getAtracciones()->at(ser - 1));
							pila->push(new CompraReciente(it->operator*()->getNombre(), "Atracciones", obj->getAtracciones()->at(ser - 1)->getprecio(), obj->getAtracciones()->at(ser - 1)->getlugar()));
							obj->eliminarServicio(obj->getAtracciones(), ser - 1);
							it->operator*()->aumentarContador();
							system("cls");
							Console::SetCursorPosition(45, 15);
							cout << "\t[Servicio Reservado]" << endl;
							it->operator*()->corroborarNivel();

							// impllementando ordenamiento de intercambio - Fisher-Yate Shuffle
							desordenar->desordenar_arreglo(obj->getAtracciones());

							Console::SetCursorPosition(0, 31);
							Console::BackgroundColor = ConsoleColor::Black;
							Console::ForegroundColor = ConsoleColor::White;
							Console::SetCursorPosition(0, 31);
							cout << "                                         Presione una tecla para continuar . . .    ";
							Console::SetCursorPosition(80, 31);
							Console::ForegroundColor = ConsoleColor::Black;
						}
						else {
							Console::SetCursorPosition(40, 15);
							cout << "\t[Ofertas Agotadas]" << endl;
							Console::SetCursorPosition(0, 31);
							Console::BackgroundColor = ConsoleColor::Black;
							Console::ForegroundColor = ConsoleColor::White;
							Console::SetCursorPosition(0, 31);
							cout << "                                         Presione una tecla para continuar . . .    ";
							Console::SetCursorPosition(80, 31);
							Console::ForegroundColor = ConsoleColor::Black;
						}
						break;
					case 6:
						Console::SetCursorPosition(0, 31);
						Console::BackgroundColor = ConsoleColor::Black;
						Console::ForegroundColor = ConsoleColor::White;
						Console::SetCursorPosition(0, 31);
						cout << "                                         Presione una tecla para continuar . . .   ";
						Console::SetCursorPosition(80, 31);
						Console::ForegroundColor = ConsoleColor::Black;
						file->actualizarDatos( list, seleccionarBaseDatos);
						delete list;
						list = nullptr;
						delete hashTable;
						hashTable = nullptr;
						break;
					}
					system("pause");
					system("cls");
					system("color 70");
				} while (p != 6);
			}
			else {
				Console::SetCursorPosition(40, 15);
				cout << "Actualmente no existen usuarios :(";
				Console::SetCursorPosition(0, 31);
				Console::BackgroundColor = ConsoleColor::Black;
				Console::ForegroundColor = ConsoleColor::White;
				Console::SetCursorPosition(0, 31);
				cout << "                                         Presione una tecla para continuar . . .   ";
				Console::SetCursorPosition(80, 31);
				Console::ForegroundColor = ConsoleColor::Black;
			}

			Console::SetCursorPosition(0, 31);
			Console::BackgroundColor = ConsoleColor::Black;
			Console::ForegroundColor = ConsoleColor::White;
			Console::SetCursorPosition(0, 31);
			cout << "                                         Presione una tecla para continuar . . .   ";
			Console::SetCursorPosition(80, 31);
			Console::ForegroundColor = ConsoleColor::Black;
			break;
		case 4:
			if (list == nullptr) {
				system("cls");
				Console::SetCursorPosition(40, 15);
				cout << "No existen usuarios para guardar :c";
				Console::SetCursorPosition(0, 31);
				Console::BackgroundColor = ConsoleColor::Black;
				Console::ForegroundColor = ConsoleColor::White;
				Console::SetCursorPosition(0, 31);
				cout << "                                         Presione una tecla para continuar . . .   ";
				Console::SetCursorPosition(80, 31);
				Console::ForegroundColor = ConsoleColor::Black;
				break;
			}
			if (list->longitud() > 0 ) {
				file->guardarDatos(list);
				delete list;
				list = nullptr;
				system("cls");
				Console::SetCursorPosition(48, 15);
				cout << "Guardado Correcto :D";
			}
			else {
				system("cls");
				Console::SetCursorPosition(40, 15);
				cout << "No existen usuarios para guardar :c";
			}
			Console::SetCursorPosition(0, 31);
			Console::BackgroundColor = ConsoleColor::Black;
			Console::ForegroundColor = ConsoleColor::White;
			Console::SetCursorPosition(0, 31);
			cout << "                                         Presione una tecla para continuar . . .   ";
			Console::SetCursorPosition(80, 31);
			Console::ForegroundColor = ConsoleColor::Black;

			break;
		case 5:
			system("cls");
			Console::SetCursorPosition(45, 6);
			cout << "------------------------" << endl;
			Console::SetCursorPosition(45, 7);
			cout << "| PREGUNTAS FRECUENTES |" << endl;
			Console::SetCursorPosition(45, 8);
			cout << "------------------------" << endl;
			Console::SetCursorPosition(45, 10);
			cout << "1.Ingresar una preguntas" << endl;
			Console::SetCursorPosition(45, 12);
			cout << "2.Responder preguntas frecuentes" << endl;
			do
			{
				Console::SetCursorPosition(45, 14);
				cout << "Ingrese su opcion: ";
				cin >> l;
			} while (l < 1 || l>2);

			switch (l) {
			case 1:
				system("cls");
				Console::SetCursorPosition(40, 10);
				cout << "[Registrando una Pregunta Frecuente]";
				cin.ignore();
				Console::SetCursorPosition(45, 12);
				cout << "Ingrese el titulo: "; getline(cin, titulo);
				Console::SetCursorPosition(45, 14);
				cout << "Ingrese la descripcion: "; getline(cin, des);
				preg = new PregFrecuentes(titulo, des);
				cola->enqueue(preg);
				Console::SetCursorPosition(43, 22);
				cout << "[Pregunta realizada correctamente]" << endl;
				Console::SetCursorPosition(0, 31);
				Console::BackgroundColor = ConsoleColor::Black;
				Console::ForegroundColor = ConsoleColor::White;
				Console::SetCursorPosition(0, 31);
				cout << "                                         Presione una tecla para continuar . . .   ";
				Console::SetCursorPosition(80, 31);
				Console::ForegroundColor = ConsoleColor::Black;
				break;
			case 2:
				system("cls");
				if (cola->empty()) {
					Console::SetCursorPosition(43, 15);
					cout << "No existen Preguntas por resolver :c";
					Console::SetCursorPosition(43, 22);

					break;
				}
				else {
					Console::SetCursorPosition(42, 2);
					cout << "[Registro de las Preguntas Frecuentes]" << endl << endl;
					vector<PregFrecuentes*>* vec = new vector<PregFrecuentes*>();
					do
					{
						vec->push_back(cola->dequeue());
					} while (!cola->empty());

					for (int i = 0; i < vec->size(); i++)
					{

						cola->enqueue(vec->at(i));
						cout << "Pregunta [#" << i + 1 << "] " << endl;
						cout << vec->at(i)->getInfo();
						cout << "---------------------------------" << endl;
					}
				}
				cout << endl;
				int b;
				do {
					Console::SetCursorPosition(42, 26);
					cout << "- Presione [1] resolver el caso mas reciente.";
					Console::SetCursorPosition(42, 27);
					cout << "- Presione [2] para volver al Menu.";
					Console::SetCursorPosition(52, 29);
					cout << "Eliga su opcion: ";
					cin >> b;
				} while (b < 1 || b>2);

				if (b == 1) {
					string r;
					string* a = new string;
					string* b = new string;
					system("cls");
					cin.ignore();
					Console::SetCursorPosition(60 - (28 / 2), 2);
					cout << "[Respondiendo una Pregunta]" << endl << endl;
					cola->dequeue()->obtenerAtributos(a, b);
					Console::SetCursorPosition(60 - (7 / 2), 6);
					cout << "Titulo:";
					Console::SetCursorPosition(60 - (a->size() / 2), 8);
					cout << *a;
					Console::SetCursorPosition(60 - (12 / 2), 11);
					cout << "Descripcion:";
					Console::SetCursorPosition(60 - (b->size() / 2), 13);
					cout << *b;
					Console::SetCursorPosition(45, 18);
					cout << "Ingrese su respuesta: ";
					Console::SetCursorPosition(35, 20);
					getline(cin, r);

					Console::SetCursorPosition(40, 23);
					cout << "[Pregunta resolvida correctamente :)]" << endl;
					Console::SetCursorPosition(0, 31);
					Console::BackgroundColor = ConsoleColor::Black;
					Console::ForegroundColor = ConsoleColor::White;
					Console::SetCursorPosition(0, 31);
					cout << "                                         Presione una tecla para continuar . . .   ";
					Console::SetCursorPosition(80, 31);
					Console::ForegroundColor = ConsoleColor::Black;

				}
				else {
					Console::SetCursorPosition(40, 23);
					cout << "[Pregunta resolvida correctamente :)]" << endl;
					Console::SetCursorPosition(0, 31);
					Console::BackgroundColor = ConsoleColor::Black;
					Console::ForegroundColor = ConsoleColor::White;
					Console::SetCursorPosition(0, 31);
					cout << "                                         Presione una tecla para continuar . . .   ";
					Console::SetCursorPosition(80, 31);
					Console::ForegroundColor = ConsoleColor::Black;
					break;
				}
				break;
			}
			break;
		case 6:
			exit(0);
			break;
		}

		system("pause");
		system("cls");
		system("color 70");

	} while (opc != 6);

	return 0;
}