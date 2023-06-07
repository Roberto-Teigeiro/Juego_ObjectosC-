#include "item.hpp"
#include <iostream>

item::item(std::string Nombre, int Puntos, std::string Descripcion){
    nombre = Nombre;
    puntos = Puntos;
    descripcion = Descripcion;
}

void item::usaritem(jugador& jugador){
    jugador.recibe_interaccion(puntos);
    std::cout << "Usaste el item " << nombre << " y obtuviste " << puntos << " puntos" << std::endl;
}
void item::imprimir(){
    std::cout << "Nombre de item: " << nombre << std::endl;
    std::cout << "Puntos de vida: " << puntos << std::endl;
    std::cout << "Descripcion de item: " << descripcion << std::endl;
}