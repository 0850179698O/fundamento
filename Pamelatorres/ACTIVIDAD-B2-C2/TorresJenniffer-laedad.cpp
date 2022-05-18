//================================================
//==>Nombre del programa:Comparacion de 2 numeros //==>Archivo:laedad.cpp
//==>Autor:Jenniffer Torre
//==>Fecha de elaboracion:2022-05-02
//==>Fecha de actulizacion:2022-05-16
#include <iostream>
using namespace std;
 
//Prototipo de la funcion
void jt_calcularEdad( int jt_anioAct , int jt_mesAct, int jt_fechAct, int jt_anioNac, int jt_mesNac, int jt_fechNac);
 
int main ()
{
    int jt_anioAct;  
    int jt_mesAct; 
    int jt_fechAct; 
 
    int jt_anioNac; 
    int jt_mesNac; 
    int jt_fechNac; 
 
    cout << "\n\tPrograma creado por Jenniffer Torres que calcula la Edad, Mes y Dia\n\n";
    cout << "Ingrese Año Actual: ";   cin >> jt_anioAct;
    cout << "Ingrese Mes Actual: ";   cin >> jt_mesAct;
    cout << "Ingrese Fecha Actual: ";  cin >> jt_fechAct;
 
    cout << "\nIngrese Año Nacimiento: ";  cin >> jt_anioNac;
    cout << "Ingrese Mes de Nacimiento: ";  cin >> jt_mesNac;
    cout << "Ingrese Fecha de Nacimiento: ";  cin >> jt_fechNac;
 
    jt_calcularEdad( jt_anioAct , jt_mesAct, jt_fechAct, jt_anioNac, jt_mesNac, jt_fechNac);
 
    
}
 

void jt_calcularEdad( int jt_anioAct , int jt_mesAct, int jt_fechAct, int jt_anioNac, int jt_mesNac, int jt_fechNac)
{
    int jt_respFech , jt_respMes;
 
    if ( jt_fechAct < jt_fechNac  )
    {   
        jt_fechAct = jt_fechAct + 30; 
        jt_mesAct = jt_mesAct - 1; 
        jt_respFech =  jt_fechAct - jt_fechNac; 
    }
    else 
        jt_respFech =  jt_fechAct - jt_fechNac;  
 
    if( jt_mesAct < jt_mesNac )
    {   
        jt_mesAct = jt_mesAct + 12; 
        jt_anioAct = jt_anioAct - 1 ; 
        jt_respMes = jt_mesAct - jt_mesNac; 
    }
    else 
        jt_respMes = jt_mesAct - jt_mesNac; 
 
    cout << "\nUd. tiene:\n";
    cout << " Edad: " <<jt_anioAct - jt_anioNac << endl; 
    cout << " Mes: " << jt_respMes << endl; 
    cout << " Dia: " << jt_respFech << endl; 

return ;
}
