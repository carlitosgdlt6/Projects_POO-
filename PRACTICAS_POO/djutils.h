/**
* @brief
 * @file djutils.h
 * @author Carlos Granados de la Torre
 * @date 24 de febero 2026
 */

#include "Temazo.h"
#include "Garito.h"
#include "Fecha.h"

#ifndef DJUTILS_H
#define	DJUTILS_H

namespace djutils {
    void mostrarTemazo( const Temazo& temazo, std::string prefijo="" );
    void mostrarGarito( const Garito& garito, std::string prefijo="" );
    void mostrarFecha( const Fecha& fecha, std::string prefijo="" );
}


#endif	/* DJUTILS_H */
