/* ===NOMBRE DEL PROGRAMA: PUNTO DE VENTA 
===AUTOR: Camila Checa Chila
===ARCHIVO: ChecaCamila-PuntoVenta.cpp
===FECHA DE ELABORACION:01-05-2022
===FECHA ULTIMA DE ACTUALIZACION: 18-05-2022*/
#include<iostream>
using namespace std;/*programa realizado punto de venta*/
int main(){
	int Cch_a=0,Cch_c=0;
	float Cch_x, Cch_n, Cch_vb, Cch_viva, Cch_vdes, Cch_vfi, Cch_vft;
	
	cout<<"\n\t\t***programa de Camila***"<<endl;
	cout<<"Ingrese la cantidad de los pruductos";   
	cin>>Cch_n;
	//inicio del bucle
	do
	{cout<<"\ningrese el precio del producto ";  
	cin>> Cch_x;
	Cch_c = Cch_c+1;
	Cch_a = Cch_a+Cch_x;
	}
	while(Cch_c<Cch_n);//fin del bucle
	
	
	// se saca la cuenta
	Cch_vb = Cch_a;
	Cch_viva = Cch_vb*0.12;
	Cch_vdes = Cch_vb*0.10;
	Cch_vfi = Cch_vb+Cch_viva;
	Cch_vft = Cch_vfi-Cch_vdes;
	
	cout<<"\nValor a pagar solo del iva : "<<Cch_vfi<<endl;
	cout<<"\nvalor tital a pagar"<<Cch_vft;
	cout<<"//========================================="<<endl;
	cout<<"//===> Nombre del programa: PUNTO DE VENTA"<<endl;
	cout<<"//===> Archivo: ChecaCamila-PuntoVenta.cpp"<<endl;
	cout<<"//===> Fecha de elaboracion: 01-05-2022"<<endl;
	cout<<"//===> Fecha de actualizacion: 18-05-2022"<<endl;
	cout<<"//========================================="<<endl;
	return 0;
}
