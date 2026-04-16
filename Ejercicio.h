#ifndef EJERCICIO_H
#define EJERCICIO_H
#include <iostream>
using namespace std;

class Ejercicio{
protected:
int codigo;
string nombre;
string tipo;
string intensidad;
int tiempo;
string descripcion;
int semana;

public:
Ejercicio();
Ejercicio(int,string,string,string,int,string,int);

int getCodigo();
string getIntensidad();
int getTiempo();

void setNombre(string);
void setIntensidad(string);
void setTiempo(int);

virtual void mostrar();
};

#endif
