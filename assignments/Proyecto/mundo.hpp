#include <iostream>
#include "item.hpp"
#include "personaje.hpp"

class mundo{
public:
mundo(std::string Nombre);
void setmundosiguiente(mundo* mundosiguiente);
void setpersonaje(personaje* personaje);
personaje* getpersonaje();
void setItem(item* newItem);
item* getItem();
mundo* getmundosiguiente();
void setmundosiguiente(mundo* mundosiguiente);

private:
std::string nombre;
item* itemPtr;
personaje* personajePtr;
mundo* mundosiguientePtr;

};