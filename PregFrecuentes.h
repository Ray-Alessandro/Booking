#pragma once
#include "Biblioteca.h"

class PregFrecuentes {
private:
    string titulo;
    string descripcion;
public:
    PregFrecuentes(string _titulo, string _descripcion) {
        this->titulo = _titulo;
        this->descripcion = _descripcion;
    }
    ~PregFrecuentes() {
    }
    string getInfo() {
        return
            "Titulo: " + titulo + "\n" +
            "Descripcion: " + descripcion + "\n";
    }
    void obtenerAtributos(string *a, string *b) {
        *a = this->titulo;
        *b = this->descripcion;
    }
};