#include <sstream>
#include <iostream>
#include <fstream>
#include "Habitacion.h"

using namespace std;

class Botones {
    private:
        string nombre;
        string id;
        string horario;

    public:
        Botones(string _nombre, string _id, string _horario, string _nombreArchivo);
        string llevarMaletas(Habitacion _habitacion, string _nombreArchivo);
};

Botones::Botones(string _nombre, string _id, string _horario, string _nombreArchivo) {
    nombre = _nombre;
    id = _id;
    horario = _horario;
    
    ofstream archivo;
    archivo.open(_nombreArchivo);
    archivo << "Información del botón: " << endl;
    archivo << "Nombre: " << nombre << endl;
    archivo << "ID: " << id << endl;
    archivo << "Horario: " << horario << endl;
    archivo.close();
};

string Botones::llevarMaletas(Habitacion _habitacion, string _nombreArchivo) {

    cout << "Maletas llevadas a la habitación " << _habitacion.getNumero() << " con éxito" << endl;

    ofstream archivo;
    archivo.open(_nombreArchivo);
    archivo << "El botones " << nombre << " llevó las maletas a la habitación " << _habitacion.getNumero() 
    << " del piso " << _habitacion.getPiso() << endl;
    archivo.close();
};