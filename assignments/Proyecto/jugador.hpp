#pragma once
#include <iostream>
#include "personaje.hpp"
#include "amistosos.hpp"
#include "mundo.hpp"

class jugador:public personaje{ 
private:
double salud;
double maxataque;
int ubicacion;

public:
jugador(std::string nombre, std::string descripcion, double salud, double maxataque);
void actua(amistoso& amistoso);
void actua(jugador& jugador);
double getSalud();
double getmaxataque();
bool estavivo();
double getAtaque();
void setUbicacion(int ubicacion);
int getUbicacion();
void recibe_interaccion(int puntos);
void imprime();
void setubicacion(int ubicacion);
int getubicacion();
void imprime() override;



};