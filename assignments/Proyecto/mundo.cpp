#include "mundo.hpp"
#include "item.hpp"
#include "personaje.hpp"
#include <iostream>

mundo::mundo(std::string Nombre){
    nombre = Nombre;
}
void mundo::setItem(item* newItem) {
    itemPtr = newItem; 
}

item* mundo::getItem() {
    return itemPtr;
}

void mundo::setpersonaje(personaje* personaje){
    personajePtr = personaje;
}

personaje* mundo::getpersonaje(){
    return personajePtr;
}

void mundo::setmundosiguiente(mundo* mundosiguiente){
    mundosiguientePtr = mundosiguiente;
}
mundo* mundo::getmundosiguiente(){
    return mundosiguientePtr;
}