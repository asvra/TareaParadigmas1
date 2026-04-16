#include "Ejercicio.h"

Ejercicio::Ejercicio(){}

Ejercicio::Ejercicio(int c,string n,string t,string i,int ti,string d,int s){
codigo=c;
nombre=n;
tipo=t;
intensidad=i;
tiempo=ti;
descripcion=d;
semana=s;
}

int Ejercicio::getCodigo(){ return codigo; }
string Ejercicio::getIntensidad(){ return intensidad; }
int Ejercicio::getTiempo(){ return tiempo; }

void Ejercicio::setNombre(string n){ nombre=n; }
void Ejercicio::setIntensidad(string i){ intensidad=i; }
void Ejercicio::setTiempo(int t){ tiempo=t; }

void Ejercicio::mostrar(){
cout<<"Codigo: "<<codigo<<endl;
cout<<"Nombre: "<<nombre<<endl;
cout<<"Tipo: "<<tipo<<endl;
cout<<"Intensidad: "<<intensidad<<endl;
cout<<"Tiempo: "<<tiempo<<" min"<<endl;
cout<<"Descripcion: "<<descripcion<<endl;
cout<<"Ultima semana: "<<semana<<endl;
}
