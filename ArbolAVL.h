#pragma once
#include "Biblioteca.h"
#include <functional>

template<class T>
class Nodo {
public:
	T elemento;
	Nodo* izq;
	Nodo* der;
	int altura;
	Nodo() {
		izq = nullptr;
		der = nullptr;
		altura = 0;
	}
};

template<class T>
class ArbolAVL
{
private:
	Nodo<T>* raiz;
	function<void(T)>mostrar;
	function<int(T, T)>comparar;
	int _altura(Nodo<T>* nodo) {
		if (nodo == nullptr) return -1;
		return nodo->altura;
	}
	void _rotarDerecha(Nodo<T>*& nodo) {
		nodo->altura--;
		Nodo<T>* p = nodo->izq;
		nodo->izq = p->der;
		p->der = nodo;
		//Actualizamos la altura
		p->altura = nodo->altura + 1;
		nodo = p;
	}
	void _rotarIzquierda(Nodo<T>*& nodo) {
		nodo->altura--;
		Nodo<T>* p = nodo->der;
		nodo->der = p->izq;
		p->izq = nodo;
		//Actualizamos la altura
		p->altura = nodo->altura + 1;
		nodo = p;
	}
	void _balanceo(Nodo<T>*& nodo) {
		int hizq = (nodo->izq == nullptr) ? -1 : _altura(nodo->izq);
		int hder = (nodo->der == nullptr) ? -1 : _altura(nodo->der);
		int fb = hder - hizq;

		if (fb > 1) { //rotar a la izq
			int hhizq = _altura(nodo->der->izq);
			int hhder = _altura(nodo->der->der);
			if (hhizq > hhder) { //verificar si aplica doble rotación
				_rotarDerecha(nodo->der);
			}
			_rotarIzquierda(nodo);
		}
		if (fb < -1) { //rotar a la der
			int hhizq = _altura(nodo->izq->izq);
			int hhder = _altura(nodo->izq->der);
			if (hhizq < hhder) {//verificar si aplica doble rotación 
				_rotarIzquierda(nodo->izq);
			}
			_rotarDerecha(nodo);
		}
		//Actualizar la altura del nodo raiz
		hizq = _altura(nodo->izq);
		hder = _altura(nodo->der);
		nodo->altura = 1 + ((hizq > hder) ? hizq : hder);
	}
	bool _insertar(Nodo<T>*& nodo, T e) {

		if (nodo == nullptr) {
			//Nuevo elemento
			nodo = new Nodo<T>();
			nodo->elemento = e;
			return true;
		}
		else if (comparar(e, nodo->elemento) == 0) {
			return false;
		}
		else if (comparar(e, nodo->elemento) == 1) {
			_insertar(nodo->izq, e);

		}
		else if (comparar(e, nodo->elemento) == -1) {
			_insertar(nodo->der, e);

		}
		_balanceo(nodo);
		return true;
	}
	void _inOrden(Nodo<T>* nodo) {
		if (nodo == nullptr) return;
		_inOrden(nodo->izq);
		mostrar(nodo->elemento);
		_inOrden(nodo->der);
	}
public:
	ArbolAVL(function<int(T, T)>comparar, function<void(T)>mostrar) :comparar(comparar), mostrar(mostrar) { this->raiz = nullptr; }
	~ArbolAVL() {}
	bool insertar(T e) {
		return _insertar(raiz, e);
	}
	void _imprimir() { _inOrden(raiz); }
};