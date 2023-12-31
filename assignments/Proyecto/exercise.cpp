#include <iostream>
using namespace std;
#include "personaje.hpp"
#include "amistosos.hpp"
#include "jugador.hpp"
#include <vector> 
#include <unistd.h>

void checkInput(int input) {
    if (input < 1 || input > 3) {
        throw runtime_error("opcion invalida!, solo puedes elegir entre 1, 2 o 3!");
    }
}

int main() 
{
 cout<<" _  _  __ _     __\n|_||_)/  |_||\\||_\n| || \\\\__| || ||__"<<endl;
 
 vector<personaje*> personajes;
  personajes.push_back(new jugador("Jugador", "El jugador es el personaje principal del juego, el cual debe interactuar con los demas personajes para poder ganar el juego.",60,"jugador"));
  personajes.push_back(new amistoso("Amistoso", "El amistoso es un personaje que no ataca, pero puede interactuar con el jugador.", "Hola, me llamo juan!, mi deber es ayudar a los guerreros que caminan por este camino. \n Parece que estas herido, toma este botiquin.\nCura tus heridas, lo necesitaras.", "amistoso"));
  personajes.push_back(new jugador("Enemigo - Darkside", "darkside es un demonio que se encuentra en este camino, es muy fuerte, cuidado con sus ataques.", 50, "enemigo"));
  personajes.push_back(new jugador("Enemigo - Sentinel", "Los ataques de sentinel son algo debiles, pero cuidado... Es muy resistente.", 10,  "enemigo"));
  personajes.push_back(new jugador("Enemigo - Behemoth", "Behemoth es un demonio muy fuerte, sus ataques son muy poderosos, cuidado con el.", 30, "enemigo"));
  personajes.push_back(new jugador("Enemigo - Malboro", "Malboro es un demonio que ataca con veneno, cuidado con sus ataques.", 20, "enemigo"));
  int contrincante=1;
  int jugando=1;
  int seleccion = 0;
  personajes[0]->recibe_interaccion(-90);
  system("clear");
   cout<<"Eres un guerrero magico derrotado en el frente, te encuentras durante la guerra de magos en el ano 1300, estas herido y perdido, deberas encontrar la salida de este camino, pero ten cuidado, hay enemigos que te atacaran, y si tu salud llega a 0, perderas."<<endl;
   cout<<"decide que deseas hacer: "<<endl;
   cout<<"Iniciar el juego: 1\t"<<"Salir del juego: 2"<<endl;
   cin>>seleccion;
   if (seleccion==1){
    cout<<"Inicias tu aventura en el bosque, mientras que por el camino te encuentras a tu primer contrincante, recuerda aprender sobre el antes de actuar!."<<endl;
    cout<<"Estas mal herido!\t";
    personajes[0]->barravida(personajes[0]->getsalud());
            while (seleccion!=3 and contrincante<personajes.size()) {
              if ((personajes[contrincante]==personajes[1])){
                cout<<"Este personaje no parece malo... Pero esta dormido!, presiona 1 para despertarlo"<<endl;
                cin>>seleccion;
                checkInput(seleccion);
                if(seleccion==1){
                  if (contrincante<personajes.size()){
                  personajes[0]->barravida(personajes[0]->getsalud());
                  personajes[contrincante]->actua(*personajes[0]);
                  system("clear");
                  personajes[contrincante]->imprime();
                  personajes[contrincante]->getDialogo();
                  personajes[0]->barravida(personajes[0]->getsalud());
                  cout<<"Parece que te sientes mejor, sigue tu camino!"<<endl;
                  contrincante++;
                  usleep(4000000);
                  }
                 
                }
               

              }
            else{
              system("clear");
              
              cout<<"Este contrincante es malvado!, deberas asesinarlo para poder seguir tu camino!"<<endl;
              cout<<endl<<"\n\n1) Pelea a muerte! \n2) Saber sobre el enemigo \n3) Salir"<<endl;
                  while (jugando==1) {
                    try { 
                      cin >> seleccion;

                      if (seleccion != 1 && seleccion != 2 && seleccion != 3) {
                        throw runtime_error("¡Opción inválida! Solo puedes elegir entre 1, 2 o 3.");
                      }

                      break;
                    }
                    catch (runtime_error& e) {
                      cout << e.what() << endl;
                      cout << "Inténtalo de nuevo." << endl;

                     
                    }
                  }
                  switch(seleccion){
                    case 1:
                    while(personajes[contrincante]->getsalud()>0 and personajes[0]->getsalud()>0){
                      cout<<"Estas peleando contra:";
                      cout<<personajes[contrincante]->getNombre();
                      cout<<endl;
                      personajes[contrincante]->actua(*personajes[0]);
                      personajes[0]->actua(*personajes[contrincante]);
                      cout<<"Tu barra de vida:  ";
                      personajes[0]->barravida(personajes[0]->getsalud());
                      cout<<"Barra de vida de tu contrincante:  ";
                      personajes[contrincante]->barravida(personajes[contrincante]->getsalud());
                      usleep(2000000);
                      system("clear");
                    }
                    cout<<"Los has derrotado!, recuperate con este botiquin y sigue tu camino!"<<endl;
                    usleep(3000000);
                    contrincante++;
                    personajes[0]->recibe_interaccion(60);
                    if (contrincante==personajes.size()){jugando=0;}
                    break;


                    case 2:
                    cout<<personajes[contrincante]->getNombre();
                    cout<<"\n";
                    cout<<personajes[contrincante]->getDescripcion();
                    usleep(3000000);
                    break;
                    
        }}}
        if (personajes[0]->getsalud()<=0){
          cout<<"Has perdido el juego, Adios!"<<endl;
          usleep(8000000);
        }
        if (contrincante==personajes.size()){
          system("clear");
          cout<<"Has ganado el juego, Felicidades!"<<endl;
          usleep(8000000);
        }
      }
   else{
     cout<<"El juego termina para ti, Adios!"<<endl;
     usleep(8000000);
   }
return 0;
}