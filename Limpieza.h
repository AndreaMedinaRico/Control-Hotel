#include <sstream>
#include <iostream>
#include <fstream>
#include "Habitacion.h"

using namespace std;

class Limpieza {
    private:
        Habitacion habitaciones[2];
        string nombre;
        string id;
        string horario;
    
    public:
        Limpieza(string _nombre, string _id, string _horario, string _nombreArchivo);
        string agregarHabitacion(Habitacion _habitacion, int _posicion, string _nombreArchivo);
        string limpiarHabitacion(string _nombreArchivo);
};

Limpieza::Limpieza(string _nombre, string _id, string _horario, string _nombreArchivo) {
    nombre = _nombre;
    id = _id;
    horario = _horario;
    
    ofstream archivo;
    archivo.open(_nombreArchivo);
    archivo << "Información del personal de limpieza: " << endl;
    archivo << "Nombre: " << nombre << endl;
    archivo << "ID: " << id << endl;
    archivo << "Horario: " << horario << endl;
    archivo.close();
};

string Limpieza::agregarHabitacion(Habitacion _habitacion, int posicion, string _nombreArchivo) {
    habitaciones[posicion] = _habitacion;

    ofstream archivo;
    archivo.open(_nombreArchivo);
    archivo << "La habitación " << _habitacion.getNumero() << " del piso " << _habitacion.getPiso() 
    << " le corresponde a " << nombre << endl;
    archivo.close();
};

string Limpieza::limpiarHabitacion(string _nombreArchivo) {
    for (int i = 0; i < 2; i++) {
        ofstream archivo;
        archivo.open(_nombreArchivo);
        archivo << "La habitación " << habitaciones[i].getNumero() << " del piso " 
        << habitaciones[i].getPiso() << " fue limpiada" << endl;
        archivo.close();
    }
};