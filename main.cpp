#include "Habitacion.h"
#include "Trabajador.h"

#include "Boton.h"
#include "Visitante.h"
#include "Limpieza_.h"
#include "Recepcionista_.h"

using namespace std;

int main() {
    
    // Creación de archivo
    ManejadorArchivo archivo("Reporte.txt");

    // Creación de objetos
    Habitacion habitacion1(101, 1, archivo);
    Habitacion habitacion2(102, 1, archivo);
    Habitacion habitacion3(103, 1, archivo);
    Habitacion habitacion4(201, 2, archivo);

    Boton boton1("Juan", "1", "8:00 - 16:00");
    Boton boton2("Pedro", "2", "8:00 - 16:00");

    Visitante visitante1("Andrea Medina", "7 de noviembre", "11 de noviembre", archivo);
    Visitante visitante2("Carlos López", "8 de noviembre", "12 de noviembre", archivo);

    Limpieza limpieza1("Sebastián López", "L123", "7:00 a.m. - 1:00 p.m.");
    Limpieza limpieza2("Gabriela Pérez", "L456", "8:00 a.m. - 4:00 p.m.");

    Recepcionista recepcionista1("Valeria Fernández", "R123", "11:00 a.m. - 7:00 p.m.");

    // Botones 
    boton1.setHabitacion(habitacion1, archivo);
    boton1.llevarMaletas(archivo);

    // Visitantes
    visitante1.setHabitacion(habitacion1, archivo);
    visitante2.setHabitacion(habitacion2, archivo);

    // Limpieza
    limpieza1.setHabitacion(habitacion1, archivo);
    limpieza1.limpiarHabitacion(archivo);

    // Recepcionista
    recepcionista1.registrarSalida(visitante1, archivo);
    recepcionista1.registrarEntrada(visitante1, archivo);
    return 0;
}