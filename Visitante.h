#ifndef VISITANTE_H_
#define VISITANTE_H_

#include "Habitacion.h"
#include "ManejadorArchivo.h"

using namespace std;

class Visitante {
    private:
        string nombre;
        string fechaEntrada;
        string fechaSalida;
        Habitacion habitacion;

    public:
        Visitante(string _nombre, string _fechaEntrada, string _fechaSalida, ManejadorArchivo archivo);
        void setHabitacion(Habitacion _habitacion, ManejadorArchivo archivo);
        string getNombre();
        string getFechaEntrada();
        string getFechaSalida();
};  

Visitante::Visitante(string _nombre, string _fechaEntrada, string _fechaSalida, ManejadorArchivo archivo) {
    nombre = _nombre;
    fechaEntrada = _fechaEntrada;
    fechaSalida = _fechaSalida;

    archivo.escribir("Información del visitante: ");
    archivo.escribir("Nombre: " + nombre);
    archivo.escribir("Fecha de entrada: " + fechaEntrada);
    archivo.escribir("Fecha de salida: " + fechaSalida);
};

void Visitante::setHabitacion(Habitacion _habitacion, ManejadorArchivo archivo) {
    habitacion = _habitacion;
    
    archivo.escribir("Habitación asignada al vistante: " + habitacion.getNumero());
};

string Visitante::getNombre() {
    return nombre;
};

string Visitante::getFechaEntrada() {
    return fechaEntrada;
};

string Visitante::getFechaSalida() {
    return fechaSalida;
};

#endif /* VISITANTE_H_ */