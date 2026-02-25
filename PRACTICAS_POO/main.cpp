/**
* @brief Fichero principal de la práctica 2 de POO
 * @file main.cpp
 * @author Victor M. Rivas Santos <vrivas@ujaen.es>
 * @date 12 de octubre de 2015, 17:08
 */

#include <iostream>
#include <cstdlib>

#include "Temazo.h"
#include "Garito.h"
#include "Fecha.h"
#include "djutils.h"
#include <cassert>

using namespace std;
void mostrarTemazos(Temazo vtemazos[],int tam) {
 assert (vtemazos!=nullptr);
 assert(tam>=0);
 for (int i=0;i<tam;i++) {
  cout<<"Información del temazo: "<<i+1<<endl;
  cout<<"Titulo: "<<vtemazos[i].getTitulo()<<endl;
  cout<<"Interprete: "<<vtemazos[i].getInterprete()<<endl;
  cout<<"Duración: "<<vtemazos[i].getDuracion()<<endl;
  cout<<"Ultimo Garito: "<<vtemazos[i].getNombreUltimoGarito()<<endl;
 }
}

int main(){
 try {
  Temazo vtemazos[20];
  Garito vgaritos[3];

  vgaritos[0].setDireccion("La casa de Seguis");
  vgaritos[0].setNombre("Rockan");

  vgaritos[1].setDireccion("Avenida La fuente");
  vgaritos[1].setNombre("Larios");

  vgaritos[2].setDireccion("Avenida Larios");
  vgaritos[2].setNombre("Velez");


  vtemazos[0].setTitulo("Buenos Dias");
  vtemazos[0].setInterprete("Eladio Carrion");
  vtemazos[0].setDuracion(3030);
  vtemazos[0].setfechaUltimoUso(Fecha(12,6,2007 ));
  vtemazos[0].setNombreUltimoGarito("La casa del DJ");

  vtemazos[1].setTitulo("Leyendas");
  vtemazos[1].setInterprete("Myke Towers");
  vtemazos[1].setDuracion(100);
  vtemazos[1].setfechaUltimoUso(Fecha(1,6,2024));
  vtemazos[1].setNombreUltimoGarito(vgaritos[0].getNombre());

  vtemazos[2].setTitulo("Fly");
  vtemazos[2].setInterprete("Eladio Carrion");
  vtemazos[2].setDuracion(2002);
  vtemazos[2].setfechaUltimoUso(Fecha(6,6,2015));
  vtemazos[2].setNombreUltimoGarito(vgaritos[1].getNombre());

  cout<<"Mostrando los 20 temazos: "<<endl;
  mostrarTemazos(vtemazos,20);

  cout<<"Mostrando los temazos 3º,4º y 5º"<<endl;
  mostrarTemazos(&vtemazos[2],3);

 }catch (ParametroNoValido &error) {  //el error, tiene guardado el nombre del objeto y la descripcion del fallo, por lo que para no gastar memoria lo pasamos por referencia
cerr<<"Ha ocurrido un error: "<<error.queOcurre()<<endl;
 }


return 0;

}
