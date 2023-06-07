#include "personaje.hpp"

class amistoso:public personaje{
public:

amistoso(std::string Nombre, std::string Descripcion):personaje(Nombre, Descripcion);
std::string getnombre();
std::string getdescripcion();
void imprime() override;

private:
bool dispuestoahablar();
std::string dialogo();

};