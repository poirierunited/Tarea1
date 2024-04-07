#include "Auto.h"
#include <iostream>

int Auto::precio_puertas = 1000;
int Auto::precio_luces = 600;

Auto::Auto(std::string marca, int precio)
        : Vehiculo(marca, precio) {}

int Auto::getPrecioPuertas() {
    return precio_puertas;
}

int Auto::getPrecioLuces() {
    return precio_luces;
}

