#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

class Habitacion {
    private:
        int numero;
        int piso;

    public:
        Habitacion(int _numero, int _piso, string _nombreArchivo);
        int getNumero();
        int getPiso();
};

Habitacion::Habitacion(int _numero, int _piso, string _nombreArchivo) {
    numero = _numero;
    piso = _piso;

    ofstream archivo;
    archivo.open(_nombreArchivo);
    archivo << "Información de la habitación: " << endl;
    archivo << "Número: " << numero << endl;
    archivo << "Piso: " << piso << endl;
    archivo.close();
};

int Habitacion::getNumero() {
    return numero;
};

int Habitacion::getPiso() {
    return piso;
};