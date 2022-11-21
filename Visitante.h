#include "Habitacion.h"
#include <sstream>
#include <iostream>
#include <fstream>

using namespace std;

class Visitante {
    private:
        string nombre;
        string fechaEntrada;
        string fechaSalida;
        Habitacion habitacion;

    public:
        Visitante(string _nombre, string _fechaEntrada, string _fechaSalida, string _nombreArchivo);
        string setHabitacion(Habitacion _habitacion, string _nombreArchivo);
        string getNombre();
        string getFechaEntrada();
        string getFechaSalida();
};  

Visitante::Visitante(string _nombre, string _fechaEntrada, string _fechaSalida, string _nombreArchivo) {
    nombre = _nombre;
    fechaEntrada = _fechaEntrada;
    fechaSalida = _fechaSalida;

    ofstream archivo;
    archivo.open(_nombreArchivo);
    archivo << "Información del visitante: " << endl;
    archivo << "Nombre: " << nombre << endl;
    archivo << "Fecha de entrada: " << fechaEntrada << endl;
    archivo << "Fecha de salida: " << fechaSalida << endl;
    archivo << "Habitación: " << habitacion.getNumero() << endl;
    archivo.close();
};

string Visitante::setHabitacion(Habitacion _habitacion, string _nombreArchivo) {
    habitacion = _habitacion;

    ofstream archivo;
    archivo.open(_nombreArchivo);
    archivo << "El visitante " << nombre << " se queda en la habitación" << habitacion.getNumero() 
    << " del piso" << habitacion.getPiso() << endl;
    archivo.close();
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