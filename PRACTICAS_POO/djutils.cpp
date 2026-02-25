/**
* @brief
 * @file djutils.cpp
 * @author Carlos Granados de la Torre
 * @date 24 de febero 2026
 */

#include <iostream>
#include "djutils.h"

void djutils::mostrarTemazo(const Temazo& temazo,std::string prefijo) {
    std::cout << prefijo << "TEMAZO: " << std::endl;
    std::cout << prefijo << " - Titulo: " << temazo.getTitulo() << std::endl;
    std::cout << prefijo << " - Interprete: " << temazo.getInterprete() << std::endl;
    std::cout << prefijo << " - Duracion: " << temazo.getDuracion() << " segundos" << std::endl;
    std::cout << prefijo << " - Puntuacion: " << temazo.getPuntuacion() << " puntos" << std::endl;
    std::cout <<prefijo <<" - Nombre Ultimo Garito: "<<temazo.getNombreUltimoGarito()<<std::endl;
    djutils::mostrarFecha(temazo.getFechaUltimoUso()," ");
}

void djutils::mostrarGarito(const Garito& garito,std::string prefijo) {
    std::cout << prefijo << "GARITO: " << std::endl
              << prefijo << " - Nombre: " << garito.getNombre() << std::endl
              << prefijo << " - Direccion: " << garito.getDireccion() << std::endl;
}

void djutils::mostrarFecha(const Fecha& fecha,std::string prefijo) {
    std::cout << prefijo << "FECHA: " << std::endl
              << prefijo << " - Dia: " << fecha.getDia() << std::endl
              << prefijo << " - Mes: " << fecha.getMes() << std::endl
              << prefijo << " - Anio: " << fecha.getAnio() << std::endl;

}