#ifndef HABITACION_H_
#define HABITACION_H_

#include "ManejadorArchivo.h"

using namespace std;

class Habitacion {
    private:
        int numero;
        int piso;

    public:
        Habitacion(){};
        Habitacion(int _numero, int _piso, ManejadorArchivo _archivo);
        int getNumero();
        int getPiso();
};

Habitacion::Habitacion(int _numero, int _piso, ManejadorArchivo _archivo) {
    numero = _numero;
    piso = _piso;

    _archivo.escribir("Información de la habitación: ");
    _archivo.escribir("Número: " + to_string(numero));
    _archivo.escribir("Piso: " + to_string(piso));
};

int Habitacion::getNumero() {
    return numero;
};

int Habitacion::getPiso() {
    return piso;
};

#endif