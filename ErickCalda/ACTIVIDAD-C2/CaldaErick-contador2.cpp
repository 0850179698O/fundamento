/* ===NOMBRE DEL PROGRAMA: CONTADOR
===AUTOR: CALDA ANGULO ERICK PATRICIO
===ARCHIVO: CCONTADOR.cpp
===FECHA DE ELABORACION:01-05-2022
===FECHA ULTIMA DE ACTUALIZACION: 16-05-2022*/
#include<iostream>/*programa q iso el profesor cuenta monetas */
using namespace std;
int main()
{
	//inicio del programa
	int C_En, C_Ec=0, C_Ec1=1, C_Ec2=0, C_Ecl, C_Ecz;
	float C_Ex, C_Eal, C_Ea=0, C_Ea1=0, C_Ea2=0, C_Eaz;
	
	
	cout<<"\ningrese la cantidad de monedas: "<<endl;  cin>>C_En;
	
	
	//inicio del bucle
	do
	{
		
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): "<<endl;  cin>>C_Ex;
		C_Ec = C_Ec+1;
		C_Ea = C_Ea+C_Ex;
		
		
		//inicio de condicionales
		if(C_Ex==0.25)
		{
			C_Ec1 = C_Ec1+1;
			C_Ea1 = C_Ex+C_Ea1;
		}
		else
		{
			C_Ec2 = C_Ec2+1;
			C_Ea2 = C_Ea2+C_Ex;
		}
	}
	while(C_Ec<C_En);//fin del bucle
	
	cout<<" total de monedas ingresadas: "<<C_Ec<<endl;
	cout<<" total de dinero contado: "<<C_Ea<<endl;
	cout<<"total de monedas de$0.10 ingresadas: "<<C_Ec2<<endl;
	cout<<"total en dinero de las monedas de $0.10: "<<C_Ea2<<endl;
	cout<<"total de monedas de $0.25 ingresadas: "<<C_Ec1<<endl;
	cout<<" total en dinero de las monedas de $0.25: "<<C_Ea1<<endl;
	cout<<endl;
	cout<<endl<<"//========================================="<<endl;
	cout<<"//===> Nombre del programa: CONTADOR"<<endl;
	cout<<"//===> Archivo: CONTADOR.cpp"<<endl;
	cout<<"//===> Autor: CALDAANGULO ERICK PATRICIO"<<endl;
	cout<<"//===> Fecha de elaboracion: 01-05-2022"<<endl;
	cout<<"//===> Fecha de actualizacion: 16-05-2022"<<endl;
	cout<<"//========================================="<<endl;
	
	return 0;
}
