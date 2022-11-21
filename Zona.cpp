//
// Created by Andres VEGA on 17/11/2022.
//

#include "Zona.h"

//constructor y destructor
Zona::Zona(string nombreZona, int codigoZona) {
    this->nombreZona = nombreZona;
    this->codigoZona = codigoZona;
    this->recaudacionZona = 0;
}
Zona::~Zona() {
}
    //metodos
void Zona::mostrarZona() {
    /*cout << "Nombre Zona: " << this->nombreZona << endl;
    for (list<VendedorZona>::iterator it= this->listaVendedorZona.begin(); it != this->listaVendedorZona.end(); it++) {
        //it->mostrarVendedorZona();
        cout << " no hice mostrar vendedor zona en VendedorZona" << endl;
    }*/
    calcularRecaudacionZona();
    /*cout << "Recaudacion Zona: " << this->recaudacionZona << endl;*/
}

void Zona::calcularRecaudacionZona() {
    double recaudado = 0;
    for (list<VendedorZona>::iterator it= this->listaVendedorZona.begin(); it != this->listaVendedorZona.end(); it++) {
        recaudado += it->obtenerCantidad();
    }
}

void Zona::ingresarMontoZona(Vendedor *vendedor, int cantidad) {
    VendedorZona vendedorZona(vendedor, cantidad);

    vendedor->asignarTotalVentas(vendedor->obtenerTotalVentas() + cantidad);
    //suma el total de ventas por vendedor
    this->listaVendedorZona.push_back(vendedorZona);
}


