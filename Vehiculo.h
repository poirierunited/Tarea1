//
// Created by Alejandro Poirier on 07-04-24.
//

#ifndef TAREA1_VEHICULO_H
#define TAREA1_VEHICULO_H

#include <string>

class Vehiculo {
private:
    std::string marca;
    int precio;

public:
    Vehiculo(std::string marca, int precio);
    std::string getMarca() const;
    int getPrecio() const;

};

#endif //TAREA1_VEHICULO_H
