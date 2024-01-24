#pragma once
#include "Biblioteca.h"
#include "Servicio.h"

const int RUN = 4;

class TimSort {
public:
    TimSort() {};
	~TimSort() {}

	template <typename T>
	void ordenar_menor(vector<T*>* arreglo) {
        _timsortMenor(arreglo,arreglo->size());
	}

    template <typename T>
    void ordenar_mayor(vector<T*>* arreglo) {
        _timsortMayor(arreglo, arreglo->size());
    }

    
    template<class  T>
    void insertionSort_mayor(vector<T*>* arreglo, int left, int right){
        for (int i = left + 1; i <= right; i++)
        {
             T* temp  = arreglo->at(i);
            int j = i - 1;
            while (j >= left && arreglo->at(j)->getprecio() < temp->getprecio()){
                arreglo->at(j+1) = arreglo->at(j);
                j--;
            }
            arreglo->at(j+1) = temp;
        }
    }
    template<class  T>
    void mergesort_mayor(vector<T*>* arreglo, int l, int m, int r){
        int len1 = m - l + 1;
        int len2 = r - m;
        vector<T*>*left = new vector<T*>();//[len1];
        vector<T*>* right = new vector<T*>();//[len2];
        for (int i = 0; i < len1; i++)
            left->push_back(arreglo->at(l+i));
        for (int i = 0; i < len2; i++)
            right->push_back(arreglo->at(m+1+i));

        int i = 0;
        int j = 0;
        int k = l;

        while (i < len1 && j < len2)
        {
            if (left->at(i)->getprecio() >= right->at(j)->getprecio())
            {
                arreglo->at(k) = left->at(i);
                i++;
            }
            else
            {
                arreglo->at(k) = right->at(j);
                j++;
            }
            k++;
        }
        while (i < len1)
        {
            arreglo->at(k) = left->at(i);
            k++;
            i++;
        }
        while (j < len2)
        {
            arreglo->at(k) = right->at(j);
            k++;
            j++;
        }
    }

    template<class  T>
    void _timsortMayor(vector<T*>* arreglo, int n)
    {
        for (int i = 0; i < n; i += RUN)
            insertionSort_mayor(arreglo, i, min((i + RUN - 1),(n - 1)));
        for (int size = RUN; size < n;
            size = 2 * size)
        {

            for (int left = 0; left < n; left += 2 * size)
            {
                int mid = left + size - 1;
                int right = min((left + 2 * size - 1),
                    (n - 1));
                if (mid < right)
                    mergesort_mayor(arreglo, left, mid, right);
            }
        }
    }
    //Menor

    template<class  T>
    void insertionSort_menor(vector<T*>* arreglo, int left, int right) {
        for (int i = left + 1; i <= right; i++)
        {
            T* temp = arreglo->at(i);
            int j = i - 1;
            while (j >= left && arreglo->at(j)->getprecio() > temp->getprecio()) {
                arreglo->at(j + 1) = arreglo->at(j);
                j--;
            }
            arreglo->at(j + 1) = temp;
        }
    }
    template<class  T>
    void mergesort_menor(vector<T*>* arreglo, int l, int m, int r) {
        int len1 = m - l + 1;
        int len2 = r - m;
        vector<T*>* left = new vector<T*>();//[len1];
        vector<T*>* right = new vector<T*>();//[len2];
        for (int i = 0; i < len1; i++)
            left->push_back(arreglo->at(l + i));
        for (int i = 0; i < len2; i++)
            right->push_back(arreglo->at(m + 1 + i));

        int i = 0;
        int j = 0;
        int k = l;

        while (i < len1 && j < len2)
        {
            if (left->at(i)->getprecio() <= right->at(j)->getprecio())
            {
                arreglo->at(k) = left->at(i);
                i++;
            }
            else
            {
                arreglo->at(k) = right->at(j);
                j++;
            }
            k++;
        }
        while (i < len1)
        {
            arreglo->at(k) = left->at(i);
            k++;
            i++;
        }
        while (j < len2)
        {
            arreglo->at(k) = right->at(j);
            k++;
            j++;
        }
    }

    template<class  T>
    void _timsortMenor(vector<T*>* arreglo, int n)
    {
        for (int i = 0; i < n; i += RUN)
            insertionSort_menor(arreglo, i, min((i + RUN - 1), (n - 1)));
        for (int size = RUN; size < n;
            size = 2 * size)
        {

            for (int left = 0; left < n; left += 2 * size)
            {
                int mid = left + size - 1;
                int right = min((left + 2 * size - 1),
                    (n - 1));
                if (mid < right)
                    mergesort_menor(arreglo, left, mid, right);
            }
        }
    }

};