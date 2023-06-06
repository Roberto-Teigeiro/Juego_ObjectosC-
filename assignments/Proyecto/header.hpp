#include <iostream>

class Personaje{
public:
Personaje();
Personaje(std::string Nombre, std::string Descripcion, std::string Ubicacion);
std::string getNombre();
void setNombre(std::string Nombre);
std::string getDescripcion();
void setDescripcion(std::string Descripcion);

private:
std::string Nombre;
std::string Descripcion;
std::string Ubicacion;





};