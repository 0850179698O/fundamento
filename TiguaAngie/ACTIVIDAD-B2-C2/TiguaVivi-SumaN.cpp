//================================================
//==> Nombre del programa: Suma de varios número
//==> Archivo : TiguaVivi-SumaN.cpp
//==>Autor: Viviana Tigua
//==>Fecha de elaboración: 2022-04-25
//==>Fecha ultima actualización: 2022-05-18
//=================================================

#include<iostream>
using namespace std;
int main()
{
	int AR_a=0,AR_v;
	float AR_t=0,AR_r;
	cout<<"Ingresar la cantidad de numeros a sumar: ";
	cin>>AR_v;
	do{
	cout<<"Ingresar un numero: ";
	cin>>AR_r;
	AR_a=AR_a+1;
	AR_t=AR_t+AR_r;
	}
	while(AR_a<AR_v);


cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Suma de varios número"<<endl;
cout<<"//==> Archivo : TiguaVivi-SumaN.cpp"<<endl;
cout<<"//==>Autor: Viviana Tigua"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-25"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;
cout<<"//================================================="<<endl;


	cout<<"La suma total es: "<<AR_t<<endl;
	return 0;

}
