/* ===NOMBRE DEL PROGRAMA: LA EDAD
===AUTOR: CALDA ANGULO ERICK PATRICIO
===ARCHIVO: LA EDAD.cpp
===FECHA DE ELABORACION:01-05-2022
===FECHA ULTIMA DE ACTUALIZACION: 16-05-2022*/
#include<iostream>/*calcula la edad de una persona*/
using namespace std;
int main(){//inicio del programa
	int C_Eedad,C_Ediaactual,C_Emesactual,C_Eanoactual, C_Eanonaci,C_Emesnaci,C_Edianaci;
	// declarando 
	
	cout<<"ingrese el ano naci"<<endl;
	cin>>C_Eanonaci;
	cout<<"ingrese el mes de nacimiento"<<endl;
	cin>>C_Emesnaci;
	
	cout<<"ingrese el dia de nacimiento"<<endl;
	cin>>C_Edianaci;
	
	cout<<endl;
	cout<<endl;
	
	cout<<"ingrese el ano actual"<<endl;
	cin>>C_Eanoactual;
	cout<<"ingrese el mes actuaL"<<endl;
	cin>>C_Emesactual;
	cout<<"ingrese el dia actal"<<endl;
	cin>>C_Ediaactual;
	
	
	//inicio del condicional 
	if(C_Emesnaci < C_Emesactual){
		C_Eedad=C_Eanoactual-C_Eanonaci;
	}else if(C_Emesnaci<=C_Emesactual & C_Edianaci<=C_Ediaactual){
		C_Eedad=C_Eanonaci-C_Eanoactual;
	}else if(C_Emesnaci>C_Emesactual& C_Edianaci>C_Emesactual){(C_Eedad=C_Eanoactual-C_Eanonaci)-1;
	}//fin del condicional
	
	
	// mostrando edad 
	cout<< C_Eedad;
	cout<<endl<<"//========================================="<<endl;
	cout<<"//===> Nombre del programa: LA EDAD"<<endl;
	cout<<"//===> Archivo: LA EDAD.cpp"<<endl;
	cout<<"//===> Autor: CALDAANGULO ERICK PATRICIO"<<endl;
	cout<<"//===> Fecha de elaboracion: 01-05-2022"<<endl;
	cout<<"//===> Fecha de actualizacion: 16-05-2022"<<endl;
	cout<<"//========================================="<<endl;
	
	
	return 0;
}
	
