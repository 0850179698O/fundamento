//================================================
//==> Nombre del programa: Cuenta Moneda
//==> Archivo : TiguaVivi-CuentaMoneda.cpp
//==>Autor: Viviana Tigua
//==>Fecha de elaboración: 2022-04-25
//==>Fecha ultima actualización: 2022-05-18
//=================================================


#include<iostream> 
using namespace std;
int main()
{          
	int AR_n, AR_c=0, AR_c1=0, AR_c2=0;
	float AR_x, AR_a=0, AR_a1=0, AR_a2=0, AR_m=0.10;
	cout<<"Cantidad de monedas a ingresar : ";
	cin>>AR_n;
	do{
		cout<<"Ingrese el valor de la moneda (0.10, 0.25) : ";
		cin>>AR_x;
		AR_c=AR_c+1;
		AR_a=AR_a+AR_x;
		if (AR_x==AR_m){
			AR_c1=AR_c1+1;
			AR_a1=AR_a1+AR_x;
		}else{
			AR_c2=AR_c2+1;
			AR_a2=AR_a2+AR_x; 
		}
}while(AR_c<AR_n);


cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Cuenta Moneda"<<endl;
cout<<"//==> Archivo : TiguaVivi-CuentaMoneda"<<endl;
cout<<"//==>Autor: Viviana Tigua"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-25"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;
cout<<"//================================================="<<endl;



cout<<"El resultado fue:"<<endl;
cout<<"Cantidad de monedas ingresadas : "<<AR_c<<endl;
cout<<"Cantidad total en dinero contado : "<<AR_a<<endl;
cout<<"Cantidad de monedas de 0.10c ingresadas : "<<AR_c1<<endl;
cout<<"Cantidad total en dinero de monedas de 0.10cc : "<<AR_a1<<endl;
cout<<"Cantidad de monedas de 0.25cc ingresadas : "<<AR_c2<<endl;
cout<<"Cantidad total en dinero de monedas de 0.25cc : "<<AR_a2<<endl;
return 0;
}
