#include "Sistema.h"

int main(){

Sistema s;
int op;

do{
cout<<"\n1 Crear"<<endl;
cout<<"2 Mostrar"<<endl;
cout<<"3 Buscar intensidad"<<endl;
cout<<"4 Actualizar"<<endl;
cout<<"5 Eliminar"<<endl;
cout<<"6 Generar rutina"<<endl;
cout<<"0 Salir"<<endl;
cout<<"Opcion: ";
cin>>op;

switch(op){
case 1: s.crear(); break;
case 2: s.mostrar(); break;
case 3: s.buscar(); break;
case 4: s.actualizar(); break;
case 5: s.eliminar(); break;
case 6: s.rutina(); break;
}

}while(op!=0);

return 0;
}
