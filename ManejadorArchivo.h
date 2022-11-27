#ifndef MANEJADORARCHIVO_H_
#define MANEJADORARCHIVO_H_

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class ManejadorArchivo {
    private:
        string nombreArchivo;

    public:
        ManejadorArchivo(string _nombreArchivo);
        void escribir(string _texto);
        string leer();  
};

ManejadorArchivo::ManejadorArchivo(string _nombreArchivo) {
    nombreArchivo = _nombreArchivo;
};

void ManejadorArchivo::escribir(string _texto) {
    ofstream archivo;
    archivo.open(nombreArchivo, fstream::app);
    archivo << _texto << endl;
    archivo.close();
};

#endif 