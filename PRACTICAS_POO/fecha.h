/**
* @file Fecha.h
* @brief Clase fecha
* @author Carlos Granados de la Torre
* @date 24 febrero 2026
 */


#ifndef FECHA_H
#define	FECHA_H
/**
 * @brief Clase fecha
 */
class Fecha {
public:
    Fecha();
    Fecha( int dia, int mes, int anio);
    Fecha(const Fecha& orig);
    virtual ~Fecha();
    void setAnio(int anio);
    int getAnio() const;
    void setMes(int mes);
    int getMes() const;
    void setDia(int dia);
    int getDia() const;
private:
    int _dia=0; ///< Dia dentro de un mes
    int _mes=0; ///< Mes dentro de un año
    int _anio=0; ///< Año de la fecha almacenada
};

#endif	/* FECHA_H */
