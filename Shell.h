#pragma once
#include "Biblioteca.h"
#include "Servicio.h"

class Shell {
public:
    Shell() {};
	~Shell() {}

	template <typename T>
	void ordenar_mayor(vector<T*>* arreglo) {
		shell_mayor(arreglo);
	}

    template <typename T>
	void ordenar_menor(vector<T*>* arreglo) {
		shell_menor(arreglo);
	}

    template <typename T>
    void shell_mayor(vector<T*>* arreglo) {
        int i, j, k;
        int intervalo = arreglo->size() / 2;
        T* temp;
        while (intervalo > 0)
        {
            for (i = intervalo; i < arreglo->size(); i++)
            {
                j = i - intervalo;
                while (j >= 0)
                {
                    k = j + intervalo;//<= menor / >= mayor
                    if (arreglo->at(j)->getprecio() >= arreglo->at(k)->getprecio()) j = -1;
                    else {
                        temp = arreglo->at(j);
                        arreglo->at(j) = arreglo->at(k);
                        arreglo->at(k) = temp;
                        j -= intervalo;
                    }
                }
            }
            intervalo = intervalo / 2;
        }
    }

    template <typename T>
    void shell_menor(vector<T*>* arreglo) {
        int i, j, k;
        int intervalo = arreglo->size() / 2;
        T* temp;
        while (intervalo > 0)
        {
            for (i = intervalo; i < arreglo->size(); i++)
            {
                j = i - intervalo;
                while (j >= 0)
                {
                    k = j + intervalo;//<= menor / >= mayor
                    if (arreglo->at(j)->getprecio() <= arreglo->at(k)->getprecio()) j = -1;
                    else {
                        temp = arreglo->at(j);
                        arreglo->at(j) = arreglo->at(k);
                        arreglo->at(k) = temp;
                        j -= intervalo;
                    }
                }
            }
            intervalo = intervalo / 2;
        }
    }

};