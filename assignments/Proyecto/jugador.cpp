#include "jugador.hpp"
#include <iostream>


jugador::jugador(std::string nombre, std::string descripcion, double salud, double maxataque):personaje(nombre, descripcion){
    this->salud = salud;
    this->maxataque = maxataque;
}

void jugador::recibe_interaccion(int puntos){
    salud += puntos;
    std::cout << "Tu salud ha cambiado por " << puntos << " puntos de vida!" << std::endl;
}

void jugador::actua(amistoso& amistoso){
    std::cout << "Soy " << amistoso.getnombre << "!" << std::endl;
    std::cout << amistoso.getdescripcion << std::endl;
}

