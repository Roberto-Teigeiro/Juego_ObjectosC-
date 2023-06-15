#ifndef PERSONAJE_HPP
#define PERSONAJE_HPP
#include <iostream>
class personaje{
public:
personaje(std::string Nombre, std::string descripcion, std::string Tipo);
std::string getNombre();
std::string getDescripcion();
virtual void imprime()=0;
std::string gettipo();
void setsalud(int Salud);
int getsalud();
virtual void actua(personaje& personaje);
virtual void recibe_interaccion(int puntos);
virtual void getDialogo();
void barravida(double salud);
bool operator==(personaje& personaje);
protected:
std::string nombre;
std::string descripcion;
std::string tipo;
double salud;

};
#endif