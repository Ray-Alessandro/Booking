#pragma once
#include "Biblioteca.h"

template<class T>
class HashEntidad
{
private:
	string llave;
	T elemento;
public:
	HashEntidad(string llave, T elemento) : llave(llave), elemento(elemento) {}
	~HashEntidad() {}
	string getLlave() { return llave; }
	T getValor() { return elemento; }
	//HashEntidad()(string llave, T elemento) : llave(llave), elemento(elemento) {}
};

template<class T>
class HashTable
{
private:
	vector<list<HashEntidad<T>>*>* tabla;

public:
	HashTable(int cantidad) {
		tabla = new vector<list<HashEntidad<T>>*>(cantidad);
		for (int i = 0; i < tabla->size(); i++)
		{
			tabla->at(i) = new list<HashEntidad<T>>();
		}
	}
	~HashTable() {}

	int hash(string key) { //traducir la llave
		int suma = 0, multiplicador = 0;
		int indice = key.size();
		for (int i = 0; i < key.size(); i++)
		{
			multiplicador = key.at(i);
			suma += ((multiplicador)*pow(27, indice));
			indice--;
		}
		return suma % tabla->size();
	}

	void insertar(string key, T value) {
		tabla->at(hash(key))->push_back(HashEntidad<T>(key, value));
	}

	list<HashEntidad<T>>* obtenerListaEnPosicion(string key) {
		return tabla->at(hash(key));
	}

	void mostrartodo(function<void(T)>imprimir) {
		for (int i = 0; i < tabla.size(); i++)
		{
			cout << i << "->";
			for (auto it : tabla[i]) {
				cout << it.getKey() << ", ";
				cout << ")->";
			}
			cout << endl;
		}
	}
};