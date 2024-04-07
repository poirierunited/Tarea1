//
// Created by Alejandro Poirier on 07-04-24.
//

#ifndef TAREA1_MOTO_H
#define TAREA1_MOTO_H

#include "Vehiculo.h"
#include <string>

class Moto : public Vehiculo {
private:
    static int precio_pedales;
    static int precio_espejos;

public:
    Moto(std::string marca, int precio);

    static int getPrecioPedales();
    static int getPrecioEspejos();

};

#endif //TAREA1_MOTO_H
