//
// Created by Alejandro Poirier on 07-04-24.
//

#ifndef TAREA1_AUTO_H
#define TAREA1_AUTO_H

#include "Vehiculo.h"
#include <string>

class Auto : public Vehiculo {
private:
    static int precio_puertas;
    static int precio_luces;

public:
    Auto(std::string marca, int precio);

    static int getPrecioPuertas();
    static int getPrecioLuces();

};

#endif //TAREA1_AUTO_H
