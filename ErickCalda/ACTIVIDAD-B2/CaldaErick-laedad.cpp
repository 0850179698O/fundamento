#include<iostream>
using namespace std;
int main(){
	int edad,diaactual,mesactual,anoactual, anonaci,mesnaci,dianaci;
	

	cout<<"ingrese el ano naci"<<endl;
	cin>>anonaci;
    cout<<"ingrese el mes de nacimiento"<<endl;
    cin>>mesnaci;
	
	cout<<"ingrese el dia de nacimiento"<<endl;
	cin>>dianaci;
	             
	cout<<endl;
	cout<<endl;
			
    cout<<"ingrese el ano actual"<<endl;
	cin>>anoactual;
	cout<<"ingrese el mes actuaL"<<endl;
	cin>>mesactual;
	cout<<"ingrese el dia actal"<<endl;
	 cin>>diaactual;
	if(mesnaci < mesactual){
	    edad=anoactual-anonaci;
		}else if(mesnaci<=mesactual & dianaci<=diaactual){
			edad=anonaci-anoactual;
	}else if(mesnaci>mesactual& dianaci>mesactual){(edad=anoactual-anonaci)-1;
	}
	
	cout<< edad;
	

	return 0;
}
							
						
