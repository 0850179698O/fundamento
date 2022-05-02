#include<iostream>
using namespace std;
int main(){
	int edad,diaActual,mesActual,anoActual, anoNaci,mesNaci,diaNaci;
	
	cout<<"Ingrese el año nacimiento."<<endl;
	cin>>anoNaci;
    cout<<"Ingrese el mes de nacimiento."<<endl;
    cin>>mesNaci;
	
	cout<<"Ingrese el dia de nacimiento"<<endl;
	cin>>diaNaci;
	             
	cout<<endl;
	cout<<endl;
			
    cout<<"Ingrese el ano actual"<<endl;
	cin>>anoActual;
	cout<<"Ingrese el mes actual."<<endl;
	cin>>mesActual;
	cout<<"Ingrese el dia actal"<<endl;
	 cin>>diaActual;
	if(mesNaci < mesActual){
	    edad=anoActual-anoNaci;
		}else if(mesNaci<=mesActual & diaNaci<=diaActual){
			edad=anoNaci-anoActual;
	}else if(mesNaci>mesActual& diaNaci>mesActual){(edad=anoActual-anoNaci)-1;
	}
	
	cout<< edad;
	

	return 0;
}
		
