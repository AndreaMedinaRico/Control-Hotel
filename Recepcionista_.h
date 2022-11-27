#ifndef RECEPCIONISTA__H_
#define RECEPCIONISTA__H_

#include "Trabajador.h"
#include "Visitante.h"

using namespace std;

class Recepcionista: public Trabajador {
    public:
        Recepcionista(string _nombre, string _id, string _horario);
        void registrarEntrada(Visitante _visitante, ManejadorArchivo _archivo);
        void registrarSalida(Visitante _visitante, ManejadorArchivo _archivo);
};

Recepcionista::Recepcionista(string _nombre, string _id, string _horario): Trabajador(_nombre, _id, _horario) {    
    
};

void Recepcionista::registrarEntrada(Visitante _visitante, ManejadorArchivo _archivo) {
    _archivo.escribir("El visitante " + _visitante.getNombre() + " ingresó al hotel");
};

void Recepcionista::registrarSalida(Visitante _visitante, ManejadorArchivo _archivo) {
    _archivo.escribir("El visitante " + _visitante.getNombre() + " salió del hotel");
};

#endif /* RECEPCIONISTA_H_ */