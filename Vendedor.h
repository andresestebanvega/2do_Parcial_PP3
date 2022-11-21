//
// Created by Andres VEGA on 17/11/2022.
//

#ifndef TEMPLATECPP_VENDEDOR_H
#define TEMPLATECPP_VENDEDOR_H
#include<iostream>
using namespace std;

class Vendedor {
private:
    int idVendedor;
    string nombre;
    string apellido;
    double totalVentas;
public:
    //constructor y destructor
    Vendedor(int idVendedor, string nombre, string apellido, double totalVentas);
    ~Vendedor();
    //asignar
    void asignarTotalVentas(double totalVentas);
    //obtener
    int obtenerIdVendedor();
    string obtenerNombre();
    string obtenerApellido();
    double obtenerTotalVentas();
    //metodos
    void mostrarVendedor();
};
inline int Vendedor::obtenerIdVendedor() {
    return this->idVendedor;
}
inline string Vendedor::obtenerNombre() {
    return this->nombre;
}
inline string Vendedor::obtenerApellido() {
    return this->apellido;
}
inline double Vendedor::obtenerTotalVentas() {
    return this->totalVentas;
}
inline void Vendedor::asignarTotalVentas(double totalVentas) {
    this->totalVentas = totalVentas;
}

#endif //TEMPLATECPP_VENDEDOR_H
