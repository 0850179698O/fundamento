// ================================================

// ==> Nombre del programa: Edad de una persona

// ==> Archivo : ChecaCamila-laedad.cpp
// ==>Autor: Camila Checa
// ==>Fecha de elaboración: 2022-04-29
// ==>Fecha última actualización: 2022-05-18
// ================================================ =


#include<iostream>
using namespace std;
int main(){
	int Cch_edad,Cch_diaActual,Cch_mesActual,Cch_anoActual,Cch_anoNaci,Cch_mesNaci,Cch_diaNaci;
	

	cout<<"ingrese el ano naci"<<endl;
	cin>>Cch_anoNaci;
    cout<<"ingrese el mes de nacimiento"<<endl;
    cin>>Cch_mesNaci;
	
	cout<<"ingrese el dia de nacimiento"<<endl;
	cin>>Cch_diaNaci;
	             
	cout<<endl;
	cout<<endl;
			
    cout<<"ingrese el ano actual"<<endl;
	cin>>Cch_anoActual;
	cout<<"ingrese el mes actuaL"<<endl;
	cin>>Cch_mesActual;
	cout<<"ingrese el dia actal"<<endl;
	 cin>>Cch_diaActual;
	if(Cch_mesNaci <Cch_ mesActual){
	    Cch_edad=Cch_anoActual-Cch_anoNaci;
		}else if(Cch_mesNaci<=Cch_mesActual & Cch_diaNaci<=Cch_diaActual){


cout<<endl<< " //========================================= ======= " <<endl;
cout<< " //==> Nombre del programa: Edad de una persona " <<endl;
cout<< " //==> Archivo : ChecaCamila-laedad.cpp " <<endl;
cout<< " //==>Autor: Camila Checa" <<endl;
cout<< " //==>Fecha de elaboración: 2022-04-29 " <<endl;
cout<< " //==>Fecha ultima actualización: 2022-05-18 " <<endl;
cout<< " //============================================ ===== " <<endl;


			edad=anoNaci-anoActual;
	}else if(Cch_mesNaci>Cch_mesActual&Cch_ diaNaci>Cch_mesActual){(Cch_edad=Cch_anoActual-Cch_anoNaci)-1;
	}
	
	cout<< edad;
	

	return 0;
}
