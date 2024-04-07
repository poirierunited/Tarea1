#include "Moto.h"
#include <iostream>

int Moto::precio_pedales = 1000;
int Moto::precio_espejos = 8000;

Moto::Moto(std::string marca, int precio)
        : Vehiculo(marca, precio) {}

int Moto::getPrecioPedales() {
    return precio_pedales;
}

int Moto::getPrecioEspejos() {
    return precio_espejos;
}

