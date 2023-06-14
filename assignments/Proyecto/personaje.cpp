#include "personaje.hpp"

personaje::personaje(std::string Nombre, std::string Descripcion, std::string Tipo){
    salud=100;
    nombre=Nombre;
    descripcion=Descripcion;
    tipo=Tipo;
    
}
void personaje::setsalud(int Salud){
    salud+=Salud;
}
std::string personaje::getNombre(){
    return nombre;
}
int personaje::getsalud(){
    return salud;
}
std::string personaje::getDescripcion(){
    return descripcion;
}

void personaje::imprime(){
    std::cout<<"Soy :"<<nombre<<"!"<<std::endl;
    std::cout<<descripcion<<std::endl;
}
std::string personaje::gettipo(){
    return tipo;
}
void personaje::barravida(double salud){
    int longitudLlena = static_cast<int>(salud / 5);
    int longitudVacia = 20 - longitudLlena;
    std::cout << "Salud: ";
    for (int i = 0; i < longitudLlena; i++){
        std::cout << "♥";
    }
    for (int i = 0; i < longitudVacia; i++){
        std::cout << "♡";
    }
    std::cout << std::endl;

}
bool personaje::operator==(personaje& Personaje){
    if ("amistoso"==Personaje.gettipo()){
        return true;
    }
    else{
        return false;
    }
}
void personaje::actua(personaje& personaje){}
void personaje::recibe_interaccion(int puntos){}
void personaje::getDialogo(){}