//
// Created by Andres VEGA on 17/11/2022.
//

#include "Empresa.h"

//constructor y destructor
Empresa::Empresa(string nombre) {
    this->nombre = nombre;
}
Empresa::~Empresa() {
}

Vendedor* Empresa::buscarVendedor(int idVendedor) {
    for (list<Vendedor>::iterator it = this->listaVendedores.begin(); it != this->listaVendedores.end(); it++) {
        if (it->obtenerIdVendedor() == idVendedor) {
            return &(*it);
        }
    }
    return nullptr;
}

void Empresa::ingresarMontoZona(){
    Vendedor* vendedor;
    vendedor= buscarVendedor(1);
    if (vendedor!= nullptr) {
        vectorZona[0].ingresarMontoZona(vendedor, 10000);//cambio corregido por el profesor
        vectorZona[1].ingresarMontoZona(vendedor, 20000);//cambio corregido por el profesor
        vectorZona[2].ingresarMontoZona(vendedor, 30000);//cambio corregido por el profesor
        vectorZona[3].ingresarMontoZona(vendedor, 10000);//cambio corregido por el profesor
    }
    vendedor= buscarVendedor(2);
    if (vendedor!= nullptr) {
        vectorZona[0].ingresarMontoZona(vendedor, 20000);//cambio corregido por el profesor
        vectorZona[1].ingresarMontoZona(vendedor, 10000);//cambio corregido por el profesor
        vectorZona[2].ingresarMontoZona(vendedor, 30000);//cambio corregido por el profesor
        vectorZona[3].ingresarMontoZona(vendedor, 20000);//cambio corregido por el profesor
    }
    vendedor= buscarVendedor(3);
    if (vendedor!= nullptr) {
        vectorZona[0].ingresarMontoZona(vendedor, 30000);//cambio corregido por el profesor
        vectorZona[1].ingresarMontoZona(vendedor, 20000);//cambio corregido por el profesor
        vectorZona[2].ingresarMontoZona(vendedor, 10000);//cambio corregido por el profesor
        vectorZona[3].ingresarMontoZona(vendedor, 30000);//cambio corregido por el profesor
    }
    vendedor= buscarVendedor(4);
    if (vendedor!= nullptr) {
        vectorZona[0].ingresarMontoZona(vendedor, 10000);//cambio corregido por el profesor
        vectorZona[1].ingresarMontoZona(vendedor, 30000);//cambio corregido por el profesor
        vectorZona[2].ingresarMontoZona(vendedor, 20000);//cambio corregido por el profesor
        vectorZona[3].ingresarMontoZona(vendedor, 10000);//cambio corregido por el profesor
    }//me falta esta llave
}

void Empresa::ingresarZona() {
    Zona zona1("Zona A",1);
    this->vectorZona.push_back(zona1);
    Zona zona2("Zona B",2);
    this->vectorZona.push_back(zona2);
    Zona zona3("Zona C",3);
    this->vectorZona.push_back(zona3);
    Zona zona4("Zona D",4);
    this->vectorZona.push_back(zona4);

}

void Empresa::ingresarVendedor() {
    Vendedor vendedor1(1,"Andres","Vega", 0);
    this->listaVendedores.push_back(vendedor1);
    Vendedor vendedor2(2,"Juan","Perez", 0);
    this->listaVendedores.push_back(vendedor2);
    Vendedor vendedor3(3,"Pedro","Gomez", 0);
    this->listaVendedores.push_back(vendedor3);
    Vendedor vendedor4(4,"Maria","Gonzales", 0);
    this->listaVendedores.push_back(vendedor4);
    Vendedor vendedor5(5,"Jose","Lopez", 0);
    this->listaVendedores.push_back(vendedor5);
    Vendedor vendedor6(6,"Luis","Gutierrez", 0);
    this->listaVendedores.push_back(vendedor6);
    Vendedor vendedor7(7,"Carlos","Martinez", 0);
    this->listaVendedores.push_back(vendedor7);
    Vendedor vendedor8(8,"Raul","Rodriguez", 0);
    this->listaVendedores.push_back(vendedor8);

}
//Requerimiento A
void Empresa::mostrarCantidadZona() {
    int i;
    double cantidadZona=0;
    cout<<"----------------Requerimiento A--------------------"<<endl;
    for (i=0; i< vectorZona.size(); i++) {//cambio corregido por el profesor
        for(list<VendedorZona>::iterator it = vectorZona[i].obtenerListaVendedorZona().begin(); it != vectorZona[i].obtenerListaVendedorZona().end(); it++){
            cantidadZona+=it->obtenerCantidad();
        }
        cout<<"La cantidad de la zona "<<vectorZona[i].obtenerNombreZona()<<" es: "<<cantidadZona<<endl;
        cantidadZona=0;
    }
    cout<<"----------------fin - Requerimiento A--------------------"<<endl;
}

//Requerimiento C
void Empresa::mostrarVendedorMenorRecaudacion() {
    int i;
    double menorRecaudacion=100000;
    Zona* menorZona=nullptr;
    cout<<"----------------Requerimiento C--------------------"<<endl;
    for (i=0; i<vectorZona.size(); i++) {//cambio corregido por el profesor
        if (vectorZona[i].obtenerRecaudadoZona() < menorRecaudacion ) {
            menorRecaudacion=vectorZona[i].obtenerRecaudadoZona();
            menorZona=&vectorZona[i];
        }
        cout<<"La zona con menor recaudacion es: "<<menorZona->obtenerNombreZona()<<endl;
        cout<<"con un monto de: "<<menorRecaudacion<<endl;
    }
    cout<<"---------------- Fin - Requerimiento C--------------------"<<endl;
}//....

//Requerimiento B
void Empresa::mostrarVendedorMayorRecaudacion() {
    int i;
    double mejorRecaudacion=0;
    Vendedor* mejorVendedor=nullptr;
    cout<<"----------------Requerimiento B--------------------"<<endl;
    for (list<Vendedor>::iterator it = listaVendedores.begin(); it != listaVendedores.end(); it++){
        if (it->obtenerTotalVentas() > mejorRecaudacion ) {
            mejorRecaudacion=it->obtenerTotalVentas();
            mejorVendedor=&(*it);
        }
    }
    cout<<"Requerimiento B-1"<<endl;
    if (mejorVendedor!= nullptr) {
        cout<<"El vendedor que hizo mayor recaudacion es: "<<mejorVendedor->obtenerNombre()<<endl;
        cout<<"La recaudacion total del vendedor es: "<<mejorVendedor->obtenerTotalVentas()<<endl;
        cout<<"Requerimiento B-2"<<endl;
        cout<<"El vendedor que recibira como premio es pesos : "<<mejorVendedor->obtenerTotalVentas()*0.05<<endl;
    }
    cout<<"----------------Fin - Requerimiento B--------------------"<<endl;
}

void Empresa::mostrarEmpresa() {
    cout<<"la empresa es: "<<this->nombre<<endl;
    vectorZona[0].mostrarZona();
}

