/**
 * @brief Implementación de los métodos de la clase Temazo
 * @file Temazo.cpp
 * @author Carlos Granados de la Torre
 * @date 24 de febero de 2026
 */
#include "Temazo.h"

#include "ParametroNoValido.h"


/**
 * @brief Constructor parametrizado
 * @param titulo Título del temazo
 * @param interprete Persona o grupo que lo interpreta
 * @param duracion Duración en segundos
 * @post Crea un objeto de tipo Temazo con puntuación 0
 */
Temazo::Temazo(std::string titulo, std::string interprete, int duracion,std::string nombreUltimoGarito ,Fecha fechaUltimoUso) :
    Temazo(titulo, interprete, duracion,0,nombreUltimoGarito,fechaUltimoUso)
{ }


/**
 * @brief Constructor parametrizado
 * @param titulo Título del temazo
 * @param interprete Persona o grupo que lo interpreta
 * @param duracion Duración en segundos
 * @param puntuacion Puntuación otorgada por el público
 * @post Crea un objeto de tipo Temazo
 */
Temazo::Temazo(std::string titulo, std::string interprete, int duracion, int puntuacion,std::string nombreUltimoGarito, Fecha fechaUltimoUso) {
    setTitulo(titulo);
    setInterprete(interprete);
    setDuracion(duracion);
this->_puntuacion=puntuacion;
    setNombreUltimoGarito(nombreUltimoGarito);
    setfechaUltimoUso(fechaUltimoUso);
 }

/**
 * @brief Constructor de copia de la clase
 * @param orig Objeto de tipo Temazo que se pasa para copiar sus datos
 * @post Crea un nuevo objeto por copia
 */

Temazo::Temazo(const Temazo& orig) :
    _titulo(orig._titulo),
    _interprete(orig._interprete),
    _duracion(orig._duracion),
    _puntuacion(orig._puntuacion),
    _nombreUltimoGarito(orig._nombreUltimoGarito),
    _fechaUltimoUso(orig._fechaUltimoUso)
{ }
int Temazo::incrementarPuntuacion(int cantidad) {
    if (cantidad<-10 || cantidad>10) {
         throw ParametroNoValido("Temazo::incrementarPuntuacion","Error,la cantidad introducida no es valida ");
    }
    _puntuacion=_puntuacion+cantidad;
}
/**
 * @brief Destructor de clase
 * @post Destruye el objeto
 */
Temazo::~Temazo() {
}


/**
 * @brief Devuelve la puntuación del temazo
 * @post  Devuelve la puntuación del temazo
 */
int Temazo::getPuntuacion() const {
    return _puntuacion;
}

/**
 * @brief Modifica la duración del Temazo
 * @param duracion Nueva duración
 * @post Modifica la duración del Temazo
 */
void Temazo::setDuracion(int duracion) {
    if (duracion<60) {
        throw ParametroNoValido("Temazo::setDuracion"," la duracion debe de ser >=60");
    }
    this->_duracion = duracion;
}

/**
 * @brief Devuelve la duración del temazo
 * @post  Devuelve la duración del temazo
 */
int Temazo::getDuracion() const {
    return _duracion;
}

/**
 * @brief Modifica el intérprete del Temazo
 * @param interprete Nuevo intérprete
 * @post Modifica el intérprete del Temazo
 */
void Temazo::setInterprete(std::string interprete) {
    if (interprete.empty()) {
        throw ParametroNoValido("Error Temazo::setInterprete"," el interprete no puede ser una cadena vacía");
    }
    this->_interprete = interprete;
}

/**
 * @brief Devuelve el intérprete del temazo
 * @post  Devuelve el intérprete del temazo
 */
std::string Temazo::getInterprete() const {
    return _interprete;
}

/**
 * @brief Modifica el título del Temazo
 * @param titulo Nuevo título
 * @post Modifica el título del Temazo
 */
void Temazo::setTitulo(std::string titulo) {
    if (titulo.empty()){
     throw ParametroNoValido("Error Temazo::setTitulo","el titulo no puede ser una cadena vacua ");
    }
    this->_titulo = titulo;
}

/**
 * @brief Devuelve el título del temazo
 * @post  Devuelve el título del temazo
 */
std::string Temazo::getTitulo() const {
    return _titulo;
}

/**
 * @brief Devuelve el nombre del ultimo garito
 * @post  Devuelve el nombre del ultimo garito
 */
std::string Temazo::getNombreUltimoGarito() const {
    return _nombreUltimoGarito;
}
/**
 * @brief Modifica el nombre del ultimo garito
 * @param nombreUltimoGarito Nombre del ultimo garito
 * @post Modifica el nombre del ultimo garito
 */
void Temazo::setNombreUltimoGarito(std::string nombreUltimoGarito) {
    if (nombreUltimoGarito.empty()) {
        throw ParametroNoValido("Error Temazo::setNombreUltimoGarito"," el nombre no debe de ser una cadena vacia ");
    }
    this->_nombreUltimoGarito=nombreUltimoGarito;
}

/**
 * @brief devuelve la fecha del ultimo uso
 * @return devuelve la fecha del ultimo uso
 */
Fecha Temazo::getFechaUltimoUso() const {
    return _fechaUltimoUso;
}

/**
 * @brief Modifica la fecha del ultimo uso
 * @param fechaUltimoUso Fecha del ultimo uso
 * @post Modifica la fecha del ultimo uso
 */
void Temazo::setfechaUltimoUso(const Fecha &fechaUltimoUso) {
    this->_fechaUltimoUso=fechaUltimoUso;
}
