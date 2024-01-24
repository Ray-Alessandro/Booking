#pragma once
#include "Biblioteca.h"
#include "Servicio.h"

class Mergesort {
public:
	Mergesort() {};
	~Mergesort() {}

	template <typename T>
	void ordenar_menor(vector<T*>* arreglo) {
		mergeSort_Menor(arreglo,arreglo->size());
	}

	template <typename T>
	void ordenar_mayor(vector<T*>* arreglo) {
		mergeSort_Mayor(arreglo, arreglo->size());
	}

	template <typename T>
	void mergeSort_Mayor(vector<T*>* arreglo, int tam) {
		if (tam > 1) {
			int mitad = tam / 2;

			vector<T*>* A1 = new vector<T*>();
			vector<T*>* A2 = new vector<T*>();

			for (int i = 0; i < mitad; i++) {
				A1->push_back(arreglo->at(i));
			}
			for (int i = mitad; i < tam; i++) {
				A2->push_back(arreglo->at(i));
			}
			mergeSort_Mayor(A1, mitad);
			mergeSort_Mayor(A2, tam - mitad);
			Merge_Mayor(A1, A2, arreglo, tam);
		}
	}

	template <typename T>
	void mergeSort_Menor(vector<T*>* arreglo, int tam) {
		if (tam > 1) {
			int mitad = tam / 2;

			vector<T*>* A1 = new vector<T*>();
			vector<T*>* A2 = new vector<T*>();

			for (int i = 0; i < mitad; i++) {
				A1->push_back(arreglo->at(i));
			}
			for (int i = mitad; i < tam; i++) {
				A2->push_back(arreglo->at(i));
			}
			mergeSort_Menor(A1, mitad);
			mergeSort_Menor(A2, tam - mitad);
			Merge_Menor(A1, A2, arreglo, tam);
		}
	}

	template <typename T>
	void Merge_Mayor(vector<T*>* A1, vector<T*>* A2, vector<T*>* A, int tam) {
		int i = 0, j = 0, k = 0;
		int mitad = tam / 2;
		while (i < mitad && j < tam - mitad) {
			if (A1->at(i)->getprecio() > A2->at(j)->getprecio()) {
				A->at(k) = A1->at(i);
				i++; k++;
			}
			else {
				A->at(k) = A2->at(j);
				j++; k++;
			}
		}
		while (i < mitad) {
			A->at(k) = A1->at(i);
			i++; k++;
		}
		while (j < tam - mitad) {
			A->at(k) = A2->at(j);
			j++; k++;
		}
	}

    template <typename T>
	void Merge_Menor(vector<T*>* A1, vector<T*>* A2, vector<T*>* A, int tam) {
		int i = 0, j = 0, k = 0;
		int mitad = tam / 2;
		while (i < mitad && j < tam - mitad) {
			if (A1->at(i)->getprecio() < A2->at(j)->getprecio()) {
				A->at(k) = A1->at(i);
				i++; k++;
			}
			else {
				A->at(k) = A2->at(j);
				j++; k++;
			}
		}
		while (i < mitad) {
			A->at(k) = A1->at(i);
			i++; k++;
		}
		while (j < tam - mitad) {
			A->at(k) = A2->at(j);
			j++; k++;
		}
	}
};