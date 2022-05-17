/* ===NOMBRE DEL PROGRAMA: PUNTO DE VENTA 
===AUTOR: CALDAANGULO ERICK PATRICIO
===ARCHIVO: PUNTO DE VENTA.cpp
===FECHA DE ELABORACION:01-05-2022
===FECHA ULTIMA DE ACTUALIZACION: 16-05-2022*/
#include<iostream>
using namespace std;/*programa realizado punto de venta*/
int main(){
	int C_Ea=0,C_Ec=0;
	float C_Ex, C_En, C_Evb, C_Eviva, C_Evdes, C_Evfi, C_Evft;
	
	cout<<"\n\t\t***programa de Erick***"<<endl;
	cout<<"Ingrese la cantidad de los pruductos";   
	cin>>C_En;
	//inicio del bucle
	do
	{cout<<"\ningrese el precio del producto ";  
	cin>> C_Ex;
	C_Ec = C_Ec+1;
	C_Ea = C_Ea+C_Ex;
	}
	while(C_Ec<C_En);//fin del bucle
	
	
	// se saca la cuenta
	C_Evb = C_Ea;
	C_Eviva = C_Evb*0.12;
	C_Evdes = C_Evb*0.10;
	C_Evfi = C_Evb+C_Eviva;
	C_Evft = C_Evfi-C_Evdes;
	
	cout<<"\nValor a pagar solo del iva : "<<C_Evfi<<endl;
	cout<<"\nvalor tital a pagar"<<C_Evft;
	cout<<"//========================================="<<endl;
	cout<<"//===> Nombre del programa: PUNTO DE VENTA"<<endl;
	cout<<"//===> Archivo: PUNTO DE VENTA.cpp"<<endl;
	cout<<"//===> Fecha de elaboracion: 01-05-2022"<<endl;
	cout<<"//===> Fecha de actualizacion: 16-05-2022"<<endl;
	cout<<"//========================================="<<endl;
	return 0;
}

