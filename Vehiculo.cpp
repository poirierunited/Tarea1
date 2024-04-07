#include "Vehiculo.h"
#include <iostream>

Vehiculo::Vehiculo(std::string marca, int precio)
        : marca(marca), precio(precio) {}

std::string Vehiculo::getMarca() const {
    return marca;
}

int Vehiculo::getPrecio() const {
    return precio;
}
