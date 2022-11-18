#include <iostream>
#include "Empresa.h"

int main() {
    Empresa empresa1("Cosmeticos");
    empresa1.ingresarVendedor();
    empresa1.ingresarZona();
    empresa1.ingresarMontoZona();

    empresa1.mostrarEmpresa();//no estaba puesto aqui

    //Requerimiento A
    empresa1.mostrarCantidadZona();
    //Requerimiento B
    empresa1.mostrarVendedorMayorRecaudacion();
    //Requerimiento C
    empresa1.mostrarVendedorMenorRecaudacion();
    return 0;
}
