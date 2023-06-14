#include "amistosos.hpp"

amistoso::amistoso(std::string Nombre, std::string Descripcion,std::string Dialogo, std::string Tipo):personaje(Nombre,Descripcion, Tipo){
dialogo=Dialogo;
}

void amistoso::actua(personaje& jugador){
 std::cout<<"Ouch! ese golpe me dolio!, calma amigo, no soy malo!\n\nWow, mira tus heridas, toma este botiquin. curate"<<std::endl;
    jugador.recibe_interaccion(100);
}

void amistoso::imprime(){
std::cout<<"Hola amigo!, soy :"<<nombre<<"!"<<std::endl;
}

void amistoso::getDialogo(){
    std::cout<<"***"<<dialogo<<"***"<<std::endl;
}