#ifndef AMISTOSOS_HPP
#define AMISTOSOS_HPP
#include "personaje.hpp"
#include <iostream>
class amistoso:public personaje{
public:

amistoso(std::string Nombre, std::string Descripcion,std::string dialogo, std::string Tipo);
void imprime() override;
void actua(personaje& jugador) override;
void getDialogo() override;
std::string tipo();
private:
bool dispuestoahablar;
std::string dialogo;

};

#endif