#ifndef LIMPIEZA__H_
#define LIMPIEZA__H_

#include "Trabajador.h"
#include "Habitacion.h"

using namespace std;

class Limpieza: public Trabajador {
    private:
        Habitacion habitacion;

    public:
        Limpieza(string _nombre, string _fechaEntrada, string _fechaSalida);
        void setHabitacion(Habitacion _habitacion, ManejadorArchivo _archivo);
        void limpiarHabitacion(ManejadorArchivo _archivo);
};

Limpieza::Limpieza(string _nombre, string _id, string _horario): Trabajador(_nombre, _id, _horario) {
    
};

void Limpieza::setHabitacion(Habitacion _habitacion, ManejadorArchivo _archivo) {
    habitacion = _habitacion;
    _archivo.escribir("Fue asignada la habitación " + habitacion.getNumero());
};

void Limpieza::limpiarHabitacion(ManejadorArchivo _archivo) {
    _archivo.escribir("Fue limpiada la habitación" + habitacion.getNumero());
};

#endif /* LIMPIEZA_H_ */