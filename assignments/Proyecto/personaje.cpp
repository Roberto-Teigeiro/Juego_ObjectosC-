#include "personaje.hpp"

personaje::personaje(std::string Nombre, std::string descripcion){
    nombre=Nombre;
    descripcion=descripcion;
    
}
void personaje::actua(){
    std::cout<<"Soy :"<<nombre<<"!"<<std::endl;
    std::cout<<descripcion<<std::endl;
}