#pragma once
#include "Biblioteca.h"
#include "Servicio.h"

class QuickSort {
private:
	template <typename T>
	void _swap(T& a, T& b) {
		T temp = a;
		a = b;
		b = temp;
	}

public:
	QuickSort() {};
	~QuickSort() {}

	template <typename T>
	void ordenarMayor(vector<T*>* arreglo) {
		quick_sort_mayor<T>(0, arreglo->size() - 1, arreglo);
	}

	template <typename T>
	void ordenarMenor(vector<T*>* arreglo) {
		quick_sort_menor<T>(0, arreglo->size() - 1, arreglo);
	}

	template <typename T>
	void quick_sort_mayor(int pivote, int size, vector<T*>* arreglo) {
		int indicePivote;
		if (pivote < size) {
			int pivoteAux = int(arreglo->at(size)->getprecio());
			int i = pivote - 1;
			for (int j = pivote; j < size; j++)
			{
				if (arreglo->at(j)->getprecio() >= pivoteAux) {
					i++;
					_swap(arreglo->at(i), arreglo->at(j));
				}
			}
			_swap(arreglo->at(i + 1), arreglo->at(size));
			indicePivote = i + 1;
			quick_sort_mayor(pivote, indicePivote - 1, arreglo);
			quick_sort_mayor(indicePivote + 1, size, arreglo);
		}
	}
		template <typename T>
		void quick_sort_menor(int pivote, int size, vector<T*>* arreglo) {
		int indicePivote;
		if (pivote < size) {
			int pivoteAux = int(arreglo->at(size)->getprecio());
			int i = pivote - 1;
			for (int j = pivote; j < size; j++)
			{
				if (arreglo->at(j)->getprecio() <= pivoteAux) {
					i++;
					_swap(arreglo->at(i), arreglo->at(j));
				}
			}
			_swap(arreglo->at(i + 1), arreglo->at(size));
			indicePivote = i + 1;
			quick_sort_menor(pivote, indicePivote - 1, arreglo);
			quick_sort_menor(indicePivote + 1, size, arreglo);
		}
	}

};