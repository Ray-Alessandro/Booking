#pragma once
#include <vector>
#include <functional>

using namespace std;

typedef unsigned int uint;

template <typename T, T NADA = 0>
class Lista {
    struct Nodo;
    typedef function<int(T, T)> Comp;
    Nodo* ini; 
    Nodo* final; 
    uint    lon;
    Comp    comparar;

public:
        //Iterador
	    class Iterador {		
		    Nodo* aux;
				
	    public:		
		    Iterador(Nodo* aux) : aux(aux) {}
		    void operator ++ () { aux = aux->sig; }
		    void operator -- () { aux = aux->ant; }
		    bool operator != (Iterador it) { return aux != it.aux; }
		    T operator* () { return aux->elem; }
	    };
    
    
    Iterador inicial() { return Iterador(ini); };
    Iterador nodoPosicion(int pos) {
        if (lon > 0) {
            if (pos >= 0 && pos < lon) {
                Nodo* aux = ini;
                for (int i = 0; i < pos; i++) {
                    aux = aux->sig;
                }
                return Iterador(aux);
            }
            else {
                return nullptr;
            }
        }
    };

    Iterador ultimo() { return Iterador(nullptr); };

    //Public Lista
		
    Lista() : ini(nullptr), final(nullptr), lon(0), comparar([](T a, T b) {return a - b; }) {}
    Lista(Comp comparar) : ini(nullptr), final(nullptr), lon(0), comparar(comparar) {}
    ~Lista();
    uint    longitud();
    void agregaInicial(T elem);
    void agregarPosicion(T elem, int pos);
    void agregarFinal(T elem);
    void modificarInicio(T elem);
    void modificarPos(T elem, int pos);
    void modificarFinal(T elem);
    void eliminaInicial();
    void eliminaPos(int pos);
    void eliminaFinal();
    T obtenerInicial();
    T obtenerPos(uint pos);
    T obtenerFinal();

    void mostrarElementos() {
        Nodo* actual = ini;
        while (actual != NULL) {
            cout << "[" << actual->elem << "]";
            actual = actual->sig;
        }
        cout << endl;
    }
};

template <typename T, T NADA>
struct Lista<T, NADA>::Nodo {
    T       elem;
    Nodo* sig; 
    Nodo* ant;
    Nodo(T elem = NADA, Nodo* sig = nullptr, Nodo* ant = nullptr) : elem(elem), sig(sig), ant(ant) {}
};
template <typename T, T NADA>
Lista<T, NADA>::~Lista() {
    Nodo* aux = ini;
    while (ini != nullptr) {
        aux = ini;
        ini = ini->sig;
        delete aux;
    }
}

template <typename T, T NADA>
uint Lista<T, NADA>::longitud() {
    return lon;
}
template <typename T, T NADA>
void Lista<T, NADA>::agregaInicial(T elem) {
    if (final == nullptr && ini == nullptr) {
        Nodo* nuevo = new Nodo(elem, ini, nullptr);
        if (nuevo != nullptr) {
            ini = nuevo;
            final = nuevo;
            lon++;
        }
    }
    else {
        Nodo* nuevo = new Nodo(elem, ini, ini->ant);
        if (nuevo != nullptr) {
            ini->ant = nuevo;
            ini = nuevo;
            lon++;
        }
    }


}
template <typename T, T NADA>
T Lista<T, NADA>::obtenerInicial() {
    if (lon > 0) {
        return ini->elem;
    }
}
template <typename T, T NADA>
T Lista<T, NADA>::obtenerPos(uint pos) {
    if (lon > 0) {
        if (pos >= 0 && pos < lon) {
            Nodo* aux = ini;
            for (int i = 0; i < pos; i++) {
                aux = aux->sig;
            }
            return aux->elem;
        }
        else {
            return NADA;
        }
    }
}

template <typename T, T NADA>
T Lista<T, NADA>::obtenerFinal() {
    return obtenerPos(lon - 1);
}
template <typename T, T NADA>
void Lista<T, NADA>::agregarPosicion(T elem, int pos) {
    if (pos == 0) {
        agregaInicial(elem);
    }
    else if (pos<0 || pos>lon) {
        return;
    }
    else {
        if (ini != nullptr) {
            Nodo* aux = ini;
            for (int i = 0; i < pos - 1; i++)
            {
                aux = aux->sig;
            }

            if (aux->sig == nullptr) {
                Nodo* nuevo = new Nodo(elem, aux->sig, aux);
                if (nuevo != nullptr) {
                    aux->sig = nuevo;
                    lon++;
                }
            }
            else {
                Nodo* nuevo = new Nodo(elem, aux->sig, aux);
                if (nuevo != nullptr) {
                    aux->sig->ant = nuevo;
                    aux->sig = nuevo;
                    lon++;
                }
            }
        }
    }
}
template <typename T, T NADA>
void Lista<T, NADA>::agregarFinal(T elem) {
    if (final == nullptr && ini == nullptr) {
        Nodo* nuevo = new Nodo(elem, final, nullptr);
        if (nuevo != nullptr) {
            ini = nuevo;
            final = nuevo;
            lon++;
        }
    }
    else {
        Nodo* nuevo = new Nodo(elem, final->sig, final);
        if (nuevo != nullptr) {
            final->sig = nuevo;
            final = nuevo;
            lon++;
        }
    }
}
template <typename T, T NADA>
void Lista<T, NADA>::modificarInicio(T elem) {
    if (lon > 0) {
        ini->elem = elem;
    }
}
template <typename T, T NADA>
void Lista<T, NADA>::modificarPos(T elem, int pos) {
    if (lon > 0) {
        if (pos<0 || pos>lon - 1) {
            return;
        }
        else {
            Nodo* aux = ini;
            for (int i = 0; i < pos; i++)
            {
                aux = aux->sig;
            }
            aux->elem = elem;
        }
    }

}
template <typename T, T NADA>
void Lista<T, NADA>::modificarFinal(T elem) {
    modificarPos(elem, lon - 1);
}
template <typename T, T NADA>
void Lista<T, NADA>::eliminaInicial() {
    if (lon > 0) {
        Nodo* aux = ini;
        aux->sig->ant = aux->ant;
        ini = aux->sig;
        delete aux;
        lon--;
    }
}

template <typename T, T NADA>
void Lista<T, NADA>::eliminaPos(int pos) {
    if (lon > 0) {
        if (pos == 0) {
            eliminaInicial();
        }
        else if (pos<0 || pos>lon - 1) {
            return;
        }
        else {

            Nodo* aux1 = ini;
            for (int i = 0; i < pos - 1; i++)
            {
                aux1 = aux1->sig;
            }

            Nodo* aux2 = aux1->sig;

            aux1->sig = aux2->sig;
            if (aux2->sig != nullptr) {
                aux2->sig->ant = aux1;
            }
            lon--;
            delete aux2;
        }
    }
}

template <typename T, T NADA>
void Lista<T, NADA>::eliminaFinal() {
    if (lon > 0) {
        eliminaPos(lon - 1);
    }
}