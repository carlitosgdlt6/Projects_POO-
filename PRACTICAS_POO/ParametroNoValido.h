/**
* @brief Clase Parametro No Valido
 * @file ParametroNoValido.h
 * @author Carlos Granados de la Torre
 * @date 24 de febero 2026
 */

#ifndef PRACTICAS_POO_PARAMETRONOVALIDO_H
#define PRACTICAS_POO_PARAMETRONOVALIDO_H
#include <string>

class ParametroNoValido {
public:
    ParametroNoValido(std::string origen,std::string descripcion);

    std::string  queOcurre() ;
private:
    std::string _origen=" ";
    std::string _descripcion=" ";

};


#endif //PRACTICAS_POO_PARAMETRONOVALIDO_H