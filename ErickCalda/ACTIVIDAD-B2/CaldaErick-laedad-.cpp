#include<iostream>
using namespace std;
int main(){
	int edad,diaactual,mesactual,anoactual, anonaci,mesnaci,dianaci;;


	              cout<<"\ningrese su ano de nacimiento"<<endl;
	                 cin>>anonaci;
	                    cout<<"\ningrese su mes de nacimiento"<<endl;
	                        cin>>mesnaci;
	                           cout<<"ingrese el dia de nacimiento"<<endl;
	                               cin>>dianaci;
	                                 cout<<endl;
		                        cout<<endl;
		                          
	                           cout<<endl;
	                       cout<<endl;
			
                      cout<<"ingrese el ano actual"<<endl;
	                cin>>anonaci;
	            cout<<"ingrese el mes actuaL"<<endl;
		    cin>>mesnaci;
		cout<<"ingrese el dia actal"<<endl;
	    cin>>dianaci;
	if(mesnaci < mesactual){
		edad=anoactual-anonaci;
													
    }else if(mesnaci==mesactual)
		if(dianaci<=diaactual){
		
		 edad=anoactual-anonaci;
	}else 
		{ edad=(anoactual-anonaci)-1;
		}else if(mesactual>mesnaci)	
			{edad=(anoactual-anonaci)-1;
	        }
		     cout<<edad;
	return 0;
}
							
						
