/* ===NOMBRE DEL PROGRAMA: COMPARA
===AUTOR: CALDA ANGULO ERICK PATRICIO
===ARCHIVO: COMPARA.cpp
===FECHA DE ELABORACION:01-05-2022
===FECHA ULTIMA DE ACTUALIZACION: 16-05-2022*/
#include<iostream>/*programa de comparacion*compara */
using namespace std;
int main(){
	//inicio
	float C_Ea,C_Ee;
	cout<<"\t   \\Progrma de CALDAANGULO ERICK PATRIVIO\n\ningrese los el valor de **C_Ea***y el valor***C_Ee****"<<endl;
	cin>>C_Ea>>C_Ee;
	
	//inicii de condicional
	if(C_Ea==C_Ee)
	{cout<<"\n C_Ea  es igual C_Ee";
	}
	else{
		if(C_Ea>C_Ee){
			cout<<"C_Ee es mayor q C_Ea";
		}
		else{cout<<"C_Ee es mayor que C_Ea";
		}//fin de cindicional
	}
	cout<<endl<<"//========================================="<<endl;
	cout<<"//===> Nombre del programa: PUNTO DE VENTA"<<endl;
	cout<<"//===> Archivo: PUNTO DE VENTA.cpp"<<endl;
	cout<<"//===> Autor: CALDAANGULO ERICK PATRICIO"<<endl;
	cout<<"//===> Fecha de elaboracion: 01-05-2022"<<endl;
	cout<<"//===> Fecha de actualizacion: 16-05-2022"<<endl;
	cout<<"//========================================="<<endl;
	return 0;	
	
}
