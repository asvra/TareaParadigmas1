#ifndef CARDIO_H
#define CARDIO_H
#include "Ejercicio.h"

class Cardio: public Ejercicio{
public:
Cardio(int c,string n,string i,int t,string d,int s)
:Ejercicio(c,n,"Cardio",i,t,d,s){}
};

#endif
