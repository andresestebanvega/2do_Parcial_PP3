//
// Created by Andres VEGA on 17/11/2022.
//

#ifndef TEMPLATECPP_VENDEDORZONA_H
#define TEMPLATECPP_VENDEDORZONA_H
#include "Vendedor.h"//....
#include <iostream>
using namespace std;

class VendedorZona {
private:
    Vendedor* vendedorZona;
    int cantidad;
public:
    //constructor y destructor
    VendedorZona(Vendedor* vendedor, int cantidad);
    ~VendedorZona();
    //obtener
    int obtenerCantidad();
    //asignar
    void asignarCantidad(int cantidad);//....

};
inline int VendedorZona::obtenerCantidad() {
    return this->cantidad;
}
inline void VendedorZona::asignarCantidad(int cantidad) {
    this->cantidad = cantidad;
}

#endif //TEMPLATECPP_VENDEDORZONA_H
