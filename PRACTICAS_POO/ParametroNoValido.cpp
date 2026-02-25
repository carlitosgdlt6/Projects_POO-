/**
* @brief Implementacion clase Parametro No Valido
 * @file ParametroNoValido.cpp
 * @author Carlos Granados de la Torre
 * @date 24 de febero 2026
 */

#include "ParametroNoValido.h"
#include <string>

ParametroNoValido::ParametroNoValido(std::string origen,std::string descripcion) :
    _origen(origen),
    _descripcion(descripcion)
{}

std::string ParametroNoValido::queOcurre() {
    std::string mensajeCompleto= "["+ _origen+ "]: " + _descripcion;

    return mensajeCompleto;
}