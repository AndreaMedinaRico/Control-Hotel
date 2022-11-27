#ifndef TRABAJADOR_H_
#define TRABAJADOR_H_

#include <sstream>
#include <iostream>
#include <fstream>

using namespace std;

class Trabajador {
    private:
        string nombre;
        string id;
        string horario;

    public:
        Trabajador(string _nombre, string _id, string _horario);
        string getNombre();
        string getId();
        string getHorario();
        void setNombre(string _nombre2);
        void setId(string _id2);
        void setHorario(string _horario2);
};

Trabajador::Trabajador(string _nombre1, string _id1, string _horario1) {
    nombre = _nombre1;
    id = _id1;
    horario = _horario1;
};

string Trabajador::getNombre() {
    return nombre;
};

string Trabajador::getId() {
    return id;
};

string Trabajador::getHorario() {
    return horario;
};

void Trabajador::setNombre(string _nombre2) {
    nombre = _nombre2;
};

void Trabajador::setId(string _id2) {
    id = _id2;
};

void Trabajador::setHorario(string _horario2) {
    horario = _horario2;
};

#endif /* TRABAJADOR_H_ */