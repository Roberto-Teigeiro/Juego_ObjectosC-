#include "jugador.hpp"
#include <iostream>


jugador::jugador(std::string nombre, std::string descripcion, int Maxataque, std::string Tipo):personaje(nombre, descripcion, Tipo){
    maxataque = Maxataque;
}

void jugador::recibe_interaccion(int puntos){
    setsalud(puntos);
    std::cout << "Tu salud ha cambiado por " << puntos << " puntos de vida!" << std::endl;
}

void jugador::actua(personaje& personaje){
    int ataque = rand() % maxataque+1;
    if (personaje.getsalud() > 0.00){
    personaje.recibe_interaccion(-ataque);}
}

bool jugador::estavivo(){
    if (salud > 0.00){
        return true;
    }
    else{
        return false;
    }
}
double jugador::getSalud(){
    return salud;
}
double jugador::getmaxataque(){
    return maxataque;
}

void jugador::imprime(){
    if (estavivo()==true){
        std::cout << "Soy " << nombre << "!" << std::endl;
        std::cout << "Mi maximo de ataque es de " << maxataque << " puntos de ataque!" << std::endl;
           }
    else{
        
        std::cout << nombre << " esta muerto" << std::endl;
    }

}

