#include "Sistema.h"

Sistema::Sistema(){ total=0; }

void Sistema::crear(){
int c,t,s,op;
string n,i,d;

cout<<"Codigo: "; cin>>c;
cin.ignore();

cout<<"Nombre: ";
getline(cin,n);

cout<<"1 Cardio / 2 Fuerza: ";
cin>>op;
cin.ignore();

cout<<"Intensidad: ";
getline(cin,i);

cout<<"Tiempo: ";
cin>>t;
cin.ignore();

cout<<"Descripcion: ";
getline(cin,d);

cout<<"Semana usada: ";
cin>>s;

if(op==1)
lista[total]=new Cardio(c,n,i,t,d,s);
else
lista[total]=new Fuerza(c,n,i,t,d,s);

total++;
}

void Sistema::mostrar(){
for(int x=0;x<total;x++){
lista[x]->mostrar();
cout<<"-------------"<<endl;
}
}

void Sistema::buscar(){
string i;
cin.ignore();
cout<<"Intensidad: ";
getline(cin,i);

for(int x=0;x<total;x++)
if(lista[x]->getIntensidad()==i)
lista[x]->mostrar();
}

void Sistema::actualizar(){
int c,t;
string n,i;

cout<<"Codigo: ";
cin>>c;

for(int x=0;x<total;x++){
if(lista[x]->getCodigo()==c){
cin.ignore();
cout<<"Nuevo nombre: ";
getline(cin,n);
cout<<"Nueva intensidad: ";
getline(cin,i);
cout<<"Nuevo tiempo: ";
cin>>t;

lista[x]->setNombre(n);
lista[x]->setIntensidad(i);
lista[x]->setTiempo(t);
}
}
}

void Sistema::eliminar(){
int c;
cout<<"Codigo: ";
cin>>c;

for(int x=0;x<total;x++){
if(lista[x]->getCodigo()==c){
for(int y=x;y<total-1;y++)
lista[y]=lista[y+1];
total--;
}
}
}

void Sistema::rutina(){
int cant=0,suma=0;
string i;

cout<<"Cantidad ejercicios: ";
cin>>cant;
cin.ignore();

cout<<"Intensidad: ";
getline(cin,i);

for(int x=0;x<total && cant>0;x++){
if(lista[x]->getIntensidad()==i){
lista[x]->mostrar();
suma+=lista[x]->getTiempo();
cant--;
}
}

cout<<"Tiempo total: "<<suma<<" min"<<endl;
}
