// Test1NinjaOne.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "Job.h"
#include <iostream>
#include <stdlib.h>
#include <string>


using namespace std;

int main() {

    Programmer cpp;
    cpp.DoWork();

    Pilot pilot;
    pilot.DoWork();

    //auto* programmer = new Programmer("cpp");
    Programmer programmer("cpp");
    programmer.DoWork("CPP", "Witing cpp Code ", 8);

    auto* programmer1 = new Programmer("PLC");
    programmer1->DoWork("PLC", "Witing PLC Code ", 8);

    auto* pilot1 = new Pilot;
    pilot1->DoWork("Airplane", "Flying ", 10);

    auto* pilot2 = new Pilot("Helicopter");
    pilot2->DoWork("Helicopter", "Flying ", 10);

    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
