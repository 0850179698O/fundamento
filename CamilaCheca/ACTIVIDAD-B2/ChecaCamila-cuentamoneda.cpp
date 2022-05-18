/* ===NOMBRE DEL PROGRAMA: CUENTA MONEDA
===AUTOR: Camila Checa
===ARCHIVO: ChecaCamila-cuentamoneda.cpp
===FECHA DE ELABORACION:01-05-2022
===FECHA ULTIMA DE ACTUALIZACION: 18-05-2022*/
#include<iostream>
using namespace std;
int main()
{
	//inicio del programa
	int Cch_n, Cch_c=0, Cch_c1=1, Cch_c2=0, Cch_cl, Cch_cz;
	float Cch_x, Cch_al, Cch_a=0, Cch_a1=0, Cch_a2=0, Cch_az;
	
	
	cout<<"\ningrese la cantidad de monedas: "<<endl;  cin>>Cch_n;
	
	
	//inicio del bucle
	do
	{
		
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): "<<endl;  cin>>Cch_x;
		Cch_c = Cch_c+1;
		Cch_a = Cch_a+Cch_x;
		
		
		//inicio de condicionales
		if(Cch_x==0.25)
		{
			Cch_c1 = Cch_c1+1;
			Cch_a1 = Cch_x+Cch_a1;
		}
		else
		{
			Cch_c2 = Cch_c2+1;
			Cch_a2 = Cch_a2+Cch_x;
		}
	}
	while(Cch_c<Cch_n);//fin del bucle
	
	cout<<" total de monedas ingresadas: "<<Cch_c<<endl;
	cout<<" total de dinero contado: "<<Cch_a<<endl;
	cout<<"total de monedas de$0.10 ingresadas: "<<Cch_c2<<endl;
	cout<<"total en dinero de las monedas de $0.10: "<<Cch_a2<<endl;
	cout<<"total de monedas de $0.25 ingresadas: "<<Cch_c1<<endl;
	cout<<" total en dinero de las monedas de $0.25: "<<Cch_a1<<endl;
	cout<<endl;
	cout<<endl<<"//========================================="<<endl;
	cout<<"//===> Nombre del programa: CUENTA MONEDA"<<endl;
	cout<<"//===> Archivo: ChecaCamila-cuentamoneda.cpp"<<endl;
	cout<<"//===> Autor: Camila Checa"<<endl;
	cout<<"//===> Fecha de elaboracion: 01-05-2022"<<endl;
	cout<<"//===> Fecha de actualizacion: 18-05-2022"<<endl;
	cout<<"//========================================="<<endl;
	
	return 0;
}
