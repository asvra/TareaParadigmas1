#ifndef SISTEMA_H
#define SISTEMA_H
#include "Cardio.h"
#include "Fuerza.h"

class Sistema{
private:
Ejercicio* lista[100];
int total;

public:
Sistema();
void crear();
void mostrar();
void buscar();
void actualizar();
void eliminar();
void rutina();
};

#endif
