//
// Created by Andres VEGA on 17/11/2022.
//

#include "Vendedor.h"

//constructor y destructor
Vendedor::Vendedor(int idVendedor, string nombre, string apellido, double totalVentas) {
    this->idVendedor = idVendedor;
    this->nombre = nombre;
    this->apellido = apellido;
    this->totalVentas = totalVentas;
}
Vendedor::~Vendedor() {
}
void Vendedor::mostrarVendedor() {
    cout << "El Id del Vendedor es : " << this->idVendedor << " Su Nombre es: " << this->nombre  << "Apellido: " << this->apellido << endl;

}