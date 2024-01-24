#pragma once
#include <vector>
#include "R_Alojamiento.h"
#include "R_AlquilerCoche.h"
#include "R_Atraccion.h"
#include "R_Atraccion.h"
#include "R_Vuelo.h"

class Servicio{
private:
    vector< R_Alojamiento*>* arrAlojamiento;
    vector< R_AlquilerCoche*>* arrAlquiler;
    vector< R_Atraccion*>*arrAtraccion;
    vector< R_Vuelo*>*arrVuelo;
    //Guardados
    vector< R_Alojamiento*>* guarDarAlojamiento;
    vector< R_AlquilerCoche*>* guarDarAlquiler;
    vector< R_Atraccion*>* guarDarAtraccion;
    vector< R_Vuelo*>* guarDarVuelo;
public:
    
    Servicio() {
        arrAlojamiento = new vector< R_Alojamiento*>();
        arrAlquiler = new vector< R_AlquilerCoche*>();
        arrAtraccion= new vector< R_Atraccion*>();
        arrVuelo = new  vector< R_Vuelo*>();
    }
    ~Servicio(){}


    void genenerarServicios(){
        inicializarVectores(20);
    }
    //Recursividad 4
    void inicializarVectores(int indice) {
        if(indice>0){
            auto eA = [](int a, int b) {
                return int((a + rand() % (b + 1 - a)));
            };
            auto dA = [](int a, int b) {
                a *= 10;
                b *= 10;
                return double((a + rand() % (b + 1 - a)) / 10.0);
            };

            arrAlojamiento->push_back(new R_Alojamiento(destinoA1[eA(0,6)], num[eA(0,4)], rpta[eA(0,1)], rpta[eA(0,1)],dA(800,1800), hoteles[0+rand()%(9+1-0)], num[eA(0,4)], num[eA(0,4)], fechaIda[eA(0,13)],fechaVuelta[eA(0,13)],rpta[eA(0,1)], rpta[eA(0,1)]));
            arrAlquiler->push_back(new R_AlquilerCoche(modelo[eA(0,4)],dA(400,800),fechaIda[eA(0,13)],fechaVuelta[eA(0,13)],tipo[eA(0,2)],empresa[eA(0,6)],num[eA(0,4)]));
            arrAtraccion->push_back(new R_Atraccion(destinoA1[eA(0, 6)], atracciones[eA(0, 8)], lugar[eA(0, 3)], dA(20, 70)));
            arrVuelo->push_back(new R_Vuelo(destinoA1[eA(0, 6)],destinoA2[eA(0, 5)],fechaIda[eA(0,13)],fechaVuelta[eA(0,13)],dA(100, 300)));
            inicializarVectores(indice-1);
        }
    }
    vector< R_Alojamiento*>* getAlojamientos() { return arrAlojamiento; }
    vector< R_AlquilerCoche*>* getAlquileres() { return arrAlquiler; }
    vector< R_Atraccion*>* getAtracciones() { return arrAtraccion; }
    vector< R_Vuelo*>* getVuelos() { return arrVuelo; }

    template <typename T>
    void eliminarServicio(vector<T*>* arreglo, int pos) {
            arreglo->erase(arreglo->begin()+pos);
    }
    //Recursividad 3
    template <typename T>
    void aplicarDescuento(vector<T*>* arreglo,double des, int indice) {
        if(indice <arreglo->size()){
            arreglo->at(indice)->setPrecio(des);
            aplicarDescuento(arreglo, des, indice + 1);
        }
    }
    void aplicarDescuentos(double des) {
        aplicarDescuento(arrAlojamiento, des,0);
        aplicarDescuento(arrAlquiler, des,0);
        aplicarDescuento(arrAtraccion, des,0);
        aplicarDescuento(arrVuelo, des,0);
    }
    //Recursividad 2
    template <typename T>
    void getInfoArreglo(vector<T*>* arreglo,int indice ) {
        if(indice<arreglo->size()){
            cout <<"[" << indice + 1 <<"] : " << endl<<endl;
            cout<<arreglo->at(indice)-> getInfo();
            cout << "-----------------------------" << endl;
            getInfoArreglo(arreglo,indice+1);
        }
    }
    template <typename T>
    int cantOfertas(vector<T*>* arreglo) {
        return arreglo->size();
    }

    void guardarAlojamiento() {
        guarDarAlojamiento = new vector< R_Alojamiento*>();
        for (int i = 0; i < arrAlojamiento->size(); i++)
        {
            guarDarAlojamiento->push_back(arrAlojamiento->at(i));
        }
    }

    void setAlojamiento() {
        for (int i = 0; i < arrAlojamiento->size(); i++)
        {
            arrAlojamiento->at(i) = guarDarAlojamiento->at(i);
        }
    }

    void guardarAlquiler() {
        guarDarAlquiler = new vector< R_AlquilerCoche*>();
        for (int i = 0; i < arrAlquiler->size(); i++)
        {
            guarDarAlquiler->push_back(arrAlquiler->at(i));
        }
    }

    void setAlquiler() {
        for (int i = 0; i < arrAlquiler->size(); i++)
        {
            arrAlquiler->at(i) = guarDarAlquiler->at(i);
        }
    }

    void guardarVuelo() {
        guarDarVuelo = new vector< R_Vuelo*>();
        for (int i = 0; i < arrVuelo->size(); i++)
        {
            guarDarVuelo->push_back(arrVuelo->at(i));
        }
    }

    void setVuelo() {
        for (int i = 0; i < arrVuelo->size(); i++)
        {
            arrVuelo->at(i) = guarDarVuelo->at(i);
        }
    }

    void guardarAtraccion() {
        guarDarAtraccion = new vector< R_Atraccion*>();
        for (int i = 0; i < arrAtraccion->size(); i++)
        {
            guarDarAtraccion->push_back(arrAtraccion->at(i));
        }
    }

    void setAtraccion() {
        for (int i = 0; i < arrAtraccion->size(); i++)
        {
            arrAtraccion->at(i) = guarDarAtraccion->at(i);
        }
    }
};