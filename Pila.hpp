#pragma once
#include <functional>

using namespace std;
typedef unsigned int uint;

template <typename T, T NADA = 0>
class Pila {
    struct Nodo;
    Nodo* tope;

public:
    Pila() : tope(nullptr) {}
    ~Pila();
  
    bool empty(){
        if(tope ==nullptr)return true;
        else return false;
    }

    void push(T elem) {
        Nodo* aux = new Nodo(elem, tope);
          if (aux != nullptr) {
                tope = aux;
          }
    }

    T  pop() {
        if (tope == nullptr) {
            return NADA;
        }
        else {
            T dato = tope->elem;
            Nodo* aux = tope;
            tope = aux->sig;
            delete aux;
            return dato;
        }
    }

};

template <typename T, T NADA>
struct Pila<T, NADA>::Nodo {
    T elem;
    Nodo* sig;
    Nodo(T elem = NADA,Nodo*sig=nullptr) : elem(elem), sig(sig) {}
};

template <typename T, T NADA>
Pila<T, NADA>::~Pila() {
    Nodo* aux = tope;
    while (tope != nullptr) {
        aux = tope;
        tope = tope->sig;
        delete aux;
    }
}
