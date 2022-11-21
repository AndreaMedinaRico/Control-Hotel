#include "Habitacion.h"
#include "Botones.h"
#include "Visitante.h"
#include "Limpieza.h"
#include "Recepcionista.h"

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {

    // Creación de objetos
    Botones botones1("Juan Hernández", "B123", "8:00 a.m. - 5:00 p.m.", "Reporte.txt");
    Botones botones2("Rafael García", "B456", "9:00 a.m. - 3:00 p.m.", "Reporte.txt");

    Habitacion habitacion1(101, 1, "Reporte.txt");
    Habitacion habitacion2(102, 1, "Reporte.txt");
    Habitacion habitacion3(103, 1, "Reporte.txt");
    Habitacion habitacion4(201, 2, "Reporte.txt");

    Visitante visitante1("Andrea Medina", "7 de noviembre", "11 de noviembre", "Reporte.txt");
    Visitante visitante2("Carlos López", "8 de noviembre", "12 de noviembre", "Reporte.txt");

    Limpieza limpieza1("Sebastián López", "L123", "7:00 a.m. - 1:00 p.m.", "Reporte.txt");
    Limpieza limpieza2("Gabriela Pérez", "L456", "8:00 a.m. - 4:00 p.m.", "Reporte.txt");

    Recepcionista recepcionista1("Valeria Fernández", "R123", "11:00 a.m. - 7:00 p.m.", "Reporte.txt");
    return 0;
}