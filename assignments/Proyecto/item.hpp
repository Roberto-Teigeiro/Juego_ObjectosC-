#ifndef ITEM_HPP
#define ITEM_HPP

#include <iostream>
#include "jugador.hpp"
class item{
public:
item(std::string nombre, int puntos, std::string descripcion);
void usaritem(jugador&);
void imprimir();

private:
std::string nombre;
int puntos;
std::string descripcion;
};
#endif