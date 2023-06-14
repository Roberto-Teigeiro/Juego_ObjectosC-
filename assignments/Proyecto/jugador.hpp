#pragma once
#ifndef JUGADOR_HPP
#define JUGADOR_HPP
#include <iostream>
#include "personaje.hpp"
#include "amistosos.hpp"


class jugador:public personaje{ 
private:
double salud;
int maxataque;
int ubicacion;

public:
jugador(std::string nombre, std::string descripcion, int Maxataque, std::string Tipo);
void actua(personaje& personaje) override;
double getSalud();
double getmaxataque();
bool estavivo();
void setUbicacion(int ubicacion);
int getUbicacion();
void recibe_interaccion(int puntos) override;
void imprime() override;
void setubicacion(int ubicacion);
int getubicacion();


};
#endif