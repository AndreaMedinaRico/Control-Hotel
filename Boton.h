#ifndef BOTON_H_
#define BOTON_H_

#include "Habitacion.h"
#include "Trabajador.h"

using namespace std;

class Boton: public Trabajador {
    private:
        Habitacion habitacion;

    public:
        Boton(string _nombre, string _id, string _horario);
        void setHabitacion(Habitacion _habitacion, ManejadorArchivo _archivo);
        void llevarMaletas(ManejadorArchivo _archivo);
};

Boton::Boton(string _nombre, string _id, string _horario): Trabajador(_nombre, _id, _horario) {
    
};

void Boton::setHabitacion(Habitacion _habitacion, ManejadorArchivo _archivo) {
    habitacion = _habitacion;
    _archivo.escribir(habitacion.getNumero() + ": habitación asignada al boton: \n");
};

void Boton::llevarMaletas(ManejadorArchivo _archivo) {
    _archivo.escribir("Fue llevada la maleta a la habitación " + habitacion.getNumero());
};

#endif /* BOTON_H_ */