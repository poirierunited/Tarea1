#include "Camion.h"
#include <iostream>

int Camion::precio_caja = 10000;
int Camion::precio_ejes = 8000;

Camion::Camion(std::string marca, int precio)
        : Vehiculo(marca, precio) {}

int Camion::getPrecioCaja() {
    return precio_caja;
}

int Camion::getPrecioEjes() {
    return precio_ejes;
}