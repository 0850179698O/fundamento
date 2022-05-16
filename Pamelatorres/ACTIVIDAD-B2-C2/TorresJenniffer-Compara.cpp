//================================================
//==>Nombre del programa:Comparacion de 2 numeros //==>Archivo:Compara.cpp
//==>Autor:Jenniffer Torre
//==>Fecha de elaboracion:2022-05-02
//==>Fecha de actulizacion:2022-05-16
#include <iostream>
using namespace std;
int main ()

{int jt_x,jt_y;

cout<<"\n ingrese numero x:";

cin>>jt_x;

cout<<"\n ingrese numero y:";

cin>>jt_y;

if(jt_x==jt_y)

cout<<"\n Son iguales";

else

{

if(jt_x>jt_y)

cout<<"Creado por Jenniffer Torres \n el mayor es:"<<jt_x;

else

cout<<"\n el mayor es:"<<jt_y;

}

return 0;

}
