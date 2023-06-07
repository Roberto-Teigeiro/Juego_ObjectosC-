#include <iostream>

class personaje{
public:
personaje(std::string Nombre, std::string descripcion);
std::string getNombre();
std::string getDescripcion();
virtual void imprime();
void actua();
private:
std::string nombre;
std::string descripcion;

};