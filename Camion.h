//
// Created by Alejandro Poirier on 07-04-24.
//

#ifndef TAREA1_CAMION_H
#define TAREA1_CAMION_H

#include "Vehiculo.h"
#include <string>

class Camion : public Vehiculo {
private:
    static int precio_caja;
    static int precio_ejes;

public:
    Camion(std::string marca, int precio);

    static int getPrecioCaja();
    static int getPrecioEjes();

};

#endif //TAREA1_CAMION_H
