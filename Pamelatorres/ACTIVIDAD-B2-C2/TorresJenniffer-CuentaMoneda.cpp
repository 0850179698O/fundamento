//================================================
//==>Nombre del programa:Comparacion de 2 numeros //==>Archivo:CuentaMoneda.cpp
//==>Autor:Jenniffer Torres
//==>Fecha de elaboracion:2022-05-02
//==>Fecha de actulizacion:2022-05-16
#include <iostream>
using namespace std;
int main(void)
{
    int jt_c=0,jt_a=0,jt_c1=0,jt_c2=0,jt_a1=0,jt_a2=0;
    float jt_x,jt_n;
    do
    {
   cout<<"//Programa creado por Torres Jenniffer//ingresa una noneda:";
   cin>>jt_x;
   jt_c=jt_c+1;
   jt_a=jt_a+1;
   
    }while (jt_x==0.10);
cout<<"total de dinero:";
cin>>jt_a;
cout<<endl;
cout<<"total de dinero 0.10:";
cin>>jt_a1;
cout<<endl;
cout<<"total de dinero 0.25:";
cin>>jt_a2;
cout<<endl;
return 0;
}
