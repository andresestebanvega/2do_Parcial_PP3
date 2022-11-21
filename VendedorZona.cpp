//
// Created by Andres VEGA on 17/11/2022.
//

#include "VendedorZona.h"

//constructor y destructor
VendedorZona::VendedorZona(Vendedor* vendedor, int cantidad){
    this->vendedorZona = vendedor;
    this->cantidad = cantidad;
}
VendedorZona::~VendedorZona(){

}

