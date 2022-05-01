#include<iostream>
using namespace std;
int main(){
	int edad,diaActual,mesActual,anoActual, anoNaci,mesNaci,diaNaci;
	

	cout<<"ingrese el ano naci"<<endl;
	cin>>anoNaci;
    cout<<"ingrese el mes de nacimiento"<<endl;
    cin>>mesNaci;
	
	cout<<"ingrese el dia de nacimiento"<<endl;
	cin>>diaNaci;
	             
	cout<<endl;
	cout<<endl;
			
    cout<<"ingrese el ano actual"<<endl;
	cin>>anoActual;
	cout<<"ingrese el mes actuaL"<<endl;
	cin>>mesActual;
	cout<<"ingrese el dia actal"<<endl;
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
