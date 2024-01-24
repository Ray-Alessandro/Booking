#pragma once
#include "Biblioteca.h"
#include "BibliotecaUsuario.h"
#include "Usuario.h"

class GeneradorUsuario {
private:
    string nombre;
    string apellido;
    string primerNombre;
    string segundoNombre;
    string apellidoMaterno;
    string apellidoPaterno;
    string edad;
    string correo;
    string contra;

public:
	GeneradorUsuario() {};
	~GeneradorUsuario() {}

	template <typename T, typename Hash>
	void generarBaseDatos(int cantidad, T* list, Hash* hashTable) {
        for (int i = 0; i < cantidad; i++)
        {
            generar_dataset(list, hashTable);
        }
	}

    template <typename T>
    void generarBaseDatosv2(int cantidad, T* list) {
        for (int i = 0; i < cantidad; i++)
        {
            generar_datasetv2(list);
        }
    }

    template <typename T, typename Hash>
    void generar_dataset(T* list, Hash* hashTable){
        auto eA = [](int a, int b) {
            return int((a + rand() % (b + 1 - a)));
        };
        limpiarDatos();
        primerNombre= nombres1[eA(0, 30)];
        segundoNombre = nombres2[eA(0, 32)];
        apellidoPaterno = apellidos1[eA(0, 31)];
        apellidoMaterno = apellidos2[eA(0, 29)];
        nombre=primerNombre+" "+segundoNombre;
        apellido=apellidoPaterno +" "+apellidoMaterno;
        edad=to_string(eA(20,65));
        correo = primerNombre + "_" + apellidoPaterno + "_" + apellidoMaterno + correos[(eA(0, 3))];
        for (int i = 0; i < correo.size(); i++)
        {
            correo.at(i) = towlower(correo.at(i));
        }

        for (int i = 0; i < 8; i++)
        {
            contra.push_back(eA(64, 122));
        }
        Usuario*usuario=new Usuario(nombre,apellido,edad,contra,correo);
        list->agregarFinal(usuario);
        hashTable->insertar(usuario->getKey(), usuario);
    }

    template <typename T>
    void generar_datasetv2(T* list) {
        auto eA = [](int a, int b) {
            return int((a + rand() % (b + 1 - a)));
        };
        limpiarDatos();
        primerNombre = nombres1[eA(0, 30)];
        segundoNombre = nombres2[eA(0, 32)];
        apellidoPaterno = apellidos1[eA(0, 31)];
        apellidoMaterno = apellidos2[eA(0, 29)];
        nombre = primerNombre + " " + segundoNombre;
        apellido = apellidoPaterno + " " + apellidoMaterno;
        edad = to_string(eA(20, 65));
        correo = primerNombre + "_" + apellidoPaterno + "_" + apellidoMaterno + correos[(eA(0, 3))];
        for (int i = 0; i < correo.size(); i++)
        {
            correo.at(i) = towlower(correo.at(i));
        }

        for (int i = 0; i < 8; i++)
        {
            contra.push_back(eA(64, 122));
        }
        Usuario* usuario = new Usuario(nombre, apellido, edad, contra, correo);
        list->agregarFinal(usuario);
    }

    void limpiarDatos() {
        primerNombre.clear();
        segundoNombre.clear();
        apellidoMaterno.clear();
        apellidoPaterno.clear();
        edad.clear();
        correo.clear();
        contra.clear();
    }
};