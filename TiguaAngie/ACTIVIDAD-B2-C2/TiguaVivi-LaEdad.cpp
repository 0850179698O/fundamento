
//================================================
//==> Nombre del programa: La Edad
//==> Archivo : TiguaVivi-LaEdad.cpp
//==>Autor: Viviana Tigua
//==>Fecha de elaboración: 2022-04-25
//==>Fecha ultima actualización: 2022-05-19
//=================================================

#include<iostream>
using namespace std;
int main()
{
	int AR_dd,AR_mm,AR_yy,AR_dd1,AR_mm1,AR_yy1,AR_da,AR_ma,AR_ya;
	
	cout<<"Ingresa la Fecha Actual: Dia Mes y Año "<<endl;
	cin>>AR_dd>>AR_mm>>AR_yy;
	cout<<"Ingresa la Fecha de Nacimiento: Dia Mes y Año "<<endl;
	cin>>AR_dd1>>AR_mm1>>AR_yy1;
	if(AR_dd<AR_dd1){
		AR_dd=AR_dd+30;
		AR_mm=AR_mm-1;
		AR_da=AR_dd-AR_dd1;
	}
	else{
		AR_da=AR_dd-AR_dd1;
	}
	if(AR_mm<AR_mm1){
		AR_mm=AR_mm+12;
		AR_yy=AR_yy-1;
		AR_ma=AR_mm-AR_mm1;
	}
	else{
		AR_ma=AR_mm-AR_mm1;
	}
	AR_ya=AR_yy-AR_yy1;


cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: La Edad"<<endl;
cout<<"//==> Archivo : TiguaVivi-LaEdad.cpp"<<endl;
cout<<"//==>Autor: Viviana Tigua"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-25"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-19"<<endl;
cout<<"//================================================="<<endl;


	cout<<"Usted Tiene "<<AR_ya<<" años "<<AR_ma<<" meses "<<" y "<<AR_da<<" dias "<<endl;
	return 0;
}
