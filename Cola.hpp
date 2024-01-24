#pragma once
#include <functional>

using namespace std;
typedef unsigned int uint;

template <typename T, T NADA =NULL>
class Cola {
    struct Nodo;
    Nodo* inicio;
    Nodo* fin;

public:
    Cola() : inicio(nullptr), fin(nullptr) {}
    ~Cola();
  
    bool empty(){
        if(inicio ==nullptr && fin== nullptr) return true;
        else return false;
    }

    void enqueue(T elem) {
        if (empty()) {
            Nodo* aux = new Nodo(elem,fin);
            inicio = fin = aux;
        }
        else{
            Nodo* aux = new Nodo(elem, fin->sig);
            fin->sig = aux;
            fin = aux;
        }
    }

    T  dequeue() {
        if (empty()) {
            return NADA;
        }
        else {
            T dato = inicio->elem;
            if(inicio==fin){
                delete inicio;  
                inicio = fin = nullptr;
            }
            else{
                Nodo* aux = inicio;
                inicio = inicio->sig;
                delete aux;
            }
            return dato;
        }
    }


};

template <typename T, T NADA>
struct Cola<T, NADA>::Nodo {
    T elem;
    Nodo* sig;
    Nodo(T elem = NADA,Nodo*sig=nullptr) : elem(elem), sig(sig) {}
};

template <typename T, T NADA>
Cola<T, NADA>::~Cola() {
    Nodo* aux = inicio;
    while (ini != nullptr) {
        aux = inicio;
        inicio = inicio->sig;
        delete aux;
    }
}
