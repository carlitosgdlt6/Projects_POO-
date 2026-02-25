/**
* @file Temazo.h
 * @author Carlos Granados de la Torre
 * .0
 * @desc Clase Temazo para las prácticas de POO
 * @date 24 de febrero 2026
 */
#include "ParametroNoValido.h"
#include "fecha.h"
#include <string>
#ifndef TEMAZO_H
#define	TEMAZO_H

/**
 @brief Clase que guarda los datos de un temazo
 */
class Temazo {
public:
    Temazo() = default;
    Temazo(std::string titulo, std::string interprete, int duracion,std::string nombreUltimoGarito,Fecha fechaUltimoUso);
    Temazo(std::string titulo, std::string interprete, int duracion, int puntuacion,std::string nombreUltimoGarito,Fecha fechaUltimoUso);
    Temazo(const Temazo& orig);

    int incrementarPuntuacion(int cantidad);
    virtual ~Temazo();

    int getPuntuacion() const;

    void setDuracion(int duracion);
    int getDuracion() const;

    void setInterprete(std::string interprete);
    std::string getInterprete() const;

    void setTitulo(std::string titulo);
    std::string getTitulo() const;

    std::string getNombreUltimoGarito()const;
    void setNombreUltimoGarito(std::string nombreUltimoGarito);

    Fecha getFechaUltimoUso()const;
    void setfechaUltimoUso(const Fecha& fechaUltimoUso);



private:
    std::string _titulo=""; ///< Título de la canción
    std::string _interprete="2"; ///< Intérprete
    int _duracion=0; ///< Duración en segundos
    int _puntuacion=0; ///< Puntuación en función de cómo la acoge el público
    std::string _nombreUltimoGarito=" "; ///<Nombre del ultimo garito en el que ha estado
    Fecha _fechaUltimoUso=Fecha(); ///<Fecha del ultimo uso

};

#endif	/* TEMAZO_H */
