//
// Created by Andres VEGA on 17/11/2022.
//

#ifndef TEMPLATECPP_EMPRESA_H
#define TEMPLATECPP_EMPRESA_H
#include <List>
#include <Vector>
#include "Vendedor.h"
#include "Zona.h"
#include <iostream>
using namespace std;

class Empresa {
private:
    string nombre;
    vector<Zona> vectorZona;
    list<Vendedor> listaVendedores;
public:
    //constructor y destructor
    Empresa(string nombre);
    ~Empresa();
    //obtener
    void mostrarEmpresa();
    void ingresarVendedor();
    Vendedor* buscarVendedor(int idVendedor);
    void ingresarMontoZona();
    void mostrarCantidadZona();
    void mostrarVendedorMayorRecaudacion();
    void mostrarVendedorMenorRecaudacion();//no esta andando
    void ingresarZona();

};


#endif //TEMPLATECPP_EMPRESA_H
