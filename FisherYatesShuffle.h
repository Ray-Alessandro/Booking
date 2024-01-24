#pragma once
#include "Biblioteca.h"
#include "Servicio.h"

class FisherYates {
public:
	FisherYates() {};
	~FisherYates() {}

	template <typename T>
	void desordenar_arreglo(vector<T*>* arreglo) {
		fisher_yates(arreglo);
	}

    template <typename T>
    void fisher_yates(vector<T*>* arreglo){
        for (int i = arreglo->size() - 1; i>0; i--) {
		    int j = (rand() % (i + 1));
		    swap(arreglo->at(j), arreglo->at(i));
	    }
    }
};