//==>Nombre del programa:Comparacion de 2 numeros //==>Archivo:PuntoVenta.cpp
//==>Autor:Jenniffer Torres                       //==>Fecha de elaboracion:2022-05-02
//==>Fecha de actualizacion:2022-06-16
#include <iostream>                   
 using namespace std;
int main()
{
 float jt_x,jt_c=0,jt_a=0,jt_n,jt_vb,jt_iva,jt_vdes,jt_vf;
cout<<"//Programa creado por Pamela Torres// ingrece la cantidad de producto que quiera sumar";
cin>>jt_x;                                     
jt_c=jt_c+1;
jt_a=jt_a+jt_x;
{ while(jt_c<jt_n)
jt_vb=jt_a;                                     
  jt_iva=jt_vb*0.12;
jt_vdes=jt_vb*0.10;
jt_vf=jt_vb+jt_iva-jt_vdes;                            
 cout<<"el valor final a pagar es:";
cout<<jt_vf<<endl;
}                                           
return 0;
}
