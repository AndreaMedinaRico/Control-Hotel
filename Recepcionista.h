#include <sstream>
#include <iostream>
#include <fstream>
#include "Visitante.h"

using namespace std;

class Recepcionista {
    private:
        string nombre;
        string id;
        string horario;

    public:
        Recepcionista(string _nombre, string _id, string _horario, string _nombreArchivo);
        string registrarEntrada(Visitante _visitante, string _nombreArchivo);
        string registrarSalida(Visitante _visitante, string _nombreArchivo);
};

Recepcionista::Recepcionista(string _nombre, string _id, string _horario, string _nombreArchivo) {
    nombre = _nombre;
    id = _id;
    horario = _horario;
    
    ofstream archivo;
    archivo.open(_nombreArchivo);
    archivo << "Información del recepcionista: " << endl;
    archivo << "Nombre: " << nombre << endl;
    archivo << "ID: " << id << endl;
    archivo << "Horario: " << horario << endl;
    archivo.close();
};

string Recepcionista::registrarEntrada(Visitante _visitante, string _nombreArchivo) {
    ofstream archivo;
    archivo.open(_nombreArchivo);
    archivo << "El recepcionista " << nombre << " registró la entrada del visitante " << _visitante.getNombre() 
    << " el " << _visitante.getFechaEntrada() << endl;
    archivo.close();
};

string Recepcionista::registrarSalida(Visitante _visitante, string _nombrearchivo) {
    ofstream archivo;
    archivo.open(_nombrearchivo);
    archivo << "El recepcionista " << nombre << " registró la salida del visitante " << _visitante.getNombre() 
    << " el " << _visitante.getFechaSalida() << endl;
    archivo.close();
};


