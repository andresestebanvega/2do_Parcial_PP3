//
// Created by Andres VEGA on 17/11/2022.
//

#ifndef TEMPLATECPP_ZONA_H
#define TEMPLATECPP_ZONA_H
#include <iostream>
#include <list>
#include "VendedorZona.h"
#include "Vendedor.h"
using namespace std;


class Zona {
private:
    string nombreZona;
    int codigoZona;
    list<VendedorZona> listaVendedorZona;
    double recaudacionZona;

public:
    //constructor y destructor
    Zona(string nombreZona, int codigoZona);
    ~Zona();
    //obtener
    string obtenerNombreZona();
    double obtenerRecaudadoZona();
    list<VendedorZona> &obtenerListaVendedorZona();//....
    //metodos
    void mostrarZona();
    void ingresarMontoZona(Vendedor* vendedor, int cantidad);//....
    void calcularRecaudacionZona();
};

inline double Zona::obtenerRecaudadoZona() {//
    return this->recaudacionZona;
}

inline string Zona::obtenerNombreZona() {
    return this->nombreZona;
}

//....
inline list<VendedorZona> &Zona::obtenerListaVendedorZona() {
    return this->listaVendedorZona;
}



#endif //TEMPLATECPP_ZONA_H
