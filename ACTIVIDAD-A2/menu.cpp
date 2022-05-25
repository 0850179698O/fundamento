#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
#include"CamilaCheca.h"
#include"CaldaErick.h"
#include"malo.h"


int main(){
	int a,d,r,M;
	
	system("color 1f ");
	cout<<"\n\t\t\t\t\tINGRESE LA OPCION QUE DECEA EXPLORAR:"<<endl;
	
	
	cout<<"\n\n\n\n\t\t\t\t\t1|->CALDA ANGULO ERICK PATRICIO"<<endl;
	cout<<"\n\t\t\t\t\t2.|->TOORES AYOVI JENNIFFER PAMELA "<<endl;
	cout<<"\n\t\t\t\t\t3.|->CHECA CHILA CAMILA IRENE"<<endl;
	cout<<"\n\t\t\t\t\t4.|->TIGUA RODRIGUEZ ANGIE VIVIANA "<<endl;
	cout<<"\n\t\t\t\t\t5.|->REALPE ESTUPIÑAN EMILY MAILY"<<endl;
	cout<<"\n\t\t\t\t\t6.|->salir"""<<endl;
	cout<<""<<endl;
	
	cout<<"                                        ";cin>>a;
	system("cls");
	
	
	do{
		switch(a){
			
		case 1: {cout<<"\n\t\t\t\tAQUI PODRAS ENCONTRAS TODOS LOS EJERCIOS DE CALDA ERICK  "<<endl;
		
							cout<<"\n\n\n\n\t\t\t\t\t1|->1Suma de dos numeros:"<<endl;
							cout<<"\n\t\t\t\t\t2.|->Compara dos numeros:"<<endl;
							cout<<"\n\t\t\t\t\t3.|->Punto de venta:"<<endl;
							cout<<"\n\t\t\t\t\t4.|->Contador de monedas:"<<endl;
							cout<<"\n\t\t\t\t\t5.|->Cacular la edad de una persona :"<<endl;
							cout<<"\n\t\t\t\t\t6.|->Salir :"<<endl;
							cout<<""<<endl;
							
							cout<<"                                        ";cin>>d;
							system("cls");
							switch(d){
							case 1:{C_E_suma();}break;
							
							case 2:{C_E_comapara();}break;
							case 3:{C_E_puntoventa();}break;
							case 4:{C_E_contadorMonedas();}break;
							case 5:{C_E_laedad();}break;
							case 6:{cout<<"si esta seguro de salir dijite (-1-)";cout<<"     ";cout<<"Si decea regresar al menu principal     "<<endl;
							cout<<"                                      ";cin>>r;
							if(r==1){
								return 0;
							}else{
								return sub();
							}
							
								
							}break;
							}
		
		}break;
		case 2:{ cout<<"\n\t\t\t\tAQUI PODRAS ENCONTRAS TODOS LOS EJERCIOS DE TORRES JENNIFFER "<<endl;
		
							cout<<"\n\n\n\n\t\t\t\t\t1|->1Suma de dos numeros:"<<endl;
							cout<<"\n\t\t\t\t\t2.|->Compara dos numeros:"<<endl;
							cout<<"\n\t\t\t\t\t3.|->Punto de venta:"<<endl;
							cout<<"\n\t\t\t\t\t4.|->Contador de monedas:"<<endl;
							cout<<"\n\t\t\t\t\t5.|->Cacular la edad de una persona :"<<endl;
							cout<<"\n\t\t\t\t\t6.|->Salir :"<<endl;
							cout<<""<<endl;
							cout<<"                                        ";cin>>d;
							system("cls");
							switch(d){
							case 1:{}break;
							
							case 2:{}break;
							case 3:{}break;
							case 4:{}break;
							case 5:{}break;
							case 6:{cout<<"si esta seguro de salir dijite (-1-)";cout<<"     ";cout<<"Si decea regresar al menu principal     "<<endl;
							cout<<"                                      ";cin>>r;
							if(r==1){
								return 0;
							}else{
								return sub();
							}
							
								
							}break;
							}

		}break;
		case 3: {cout<<"\n\t\t\t\tAQUI PODRAS ENCONTRAS TODOS LOS EJERCIOS DE CHECA CAMILA  "<<endl;
							
							cout<<"\n\n\n\n\t\t\t\t\t1|->1Suma de dos numeros:"<<endl;
							cout<<"\n\t\t\t\t\t2.|->Compara dos numeros:"<<endl;
							cout<<"\n\t\t\t\t\t3.|->Punto de venta:"<<endl;
							cout<<"\n\t\t\t\t\t4.|->Contador de monedas:"<<endl;
							cout<<"\n\t\t\t\t\t5.|->Cacular la edad de una persona :"<<endl;
							cout<<"\n\t\t\t\t\t6.|->Salir :"<<endl;
							cout<<""<<endl;
							cout<<"                                        ";cin>>d;
							system("cls");
							switch(d){
							case 1:{C_C_sumaNumeros();}break;
							
							case 2:{C_C_compara();}break;
							case 3:{C_C_puntoventa();}break;
							case 4:{ C_C_cuentaMonedas();}break;
							case 5:{laedad();}break;
							case 6:{
								cout<<"si esta seguro de salir dijite (-1-)";cout<<"     ";cout<<"Si decea regresar al menu principal     "<<endl;
								cout<<"                                      ";cin>>r;
								if(r==1){
									return 0;
								}else{
									return sub();
								}
								
							}break;
							}
							
		}break;
		case 4: {cout<<"\n\t\t\t\tAQUI PODRAS ENCONTRAS TODOS LOS EJERCIOS DE TIGUA ANGIE  "<<endl;
						
						cout<<"\n\n\n\n\t\t\t\t\t1|->1Suma de dos numeros:"<<endl;
						cout<<"\n\t\t\t\t\t2.|->Compara dos numeros:"<<endl;
						cout<<"\n\t\t\t\t\t3.|->Punto de venta:"<<endl;
						cout<<"\n\t\t\t\t\t4.|->Contador de monedas:"<<endl;
						cout<<"\n\t\t\t\t\t5.|->Cacular la edad de una persona :"<<endl;
						cout<<"\n\t\t\t\t\t6.|->Salir :"<<endl;
						cout<<""<<endl;
						cout<<"                                        ";cin>>d;
						system("cls");
						switch(d){
						case 1:{}break;
						
						case 2:{}break;
						case 3:{}break;
						case 4:{}break;
						case 5:{}break;
						case 6:{cout<<"si esta seguro de salir dijite (-1-)";cout<<"     ";cout<<"Si decea regresar al menu principal     "<<endl;
						cout<<"                                      ";cin>>r;
						if(r==1){
							return 0;
						}else{
							return sub();
						}
						
							
						}break;
						}
						
		}break;
		case 5:{cout<<"\n\t\t\t\tAQUI PODRAS ENCONTRAS TODOS LOS EJERCIOS DE REALPE AMILY  "<<endl;
		
						cout<<"\n\n\n\n\t\t\t\t\t1|->1Suma de dos numeros:"<<endl;
						cout<<"\n\t\t\t\t\t2.|->Compara dos numeros:"<<endl;
						cout<<"\n\t\t\t\t\t3.|->Punto de venta:"<<endl;
						cout<<"\n\t\t\t\t\t4.|->Contador de monedas:"<<endl;
						cout<<"\n\t\t\t\t\t5.|->Cacular la edad de una persona :"<<endl;
						cout<<"\n\t\t\t\t\t6.|->Salir :"<<endl;
						cout<<""<<endl;
						cout<<"                                        ";cin>>d;
						system("cls");
						switch(d){
						case 1:{}break;
						
						case 2:{}break;
						case 3:{}break;
						case 4:{}break;
						case 5:{}break;
						case 6:{cout<<"si esta seguro de salir dijite (-1-)";cout<<"     ";cout<<"Si decea regresar al menu principal (-2-)    "<<endl;
						cout<<"                                      ";cin>>r;
						if(r==1){
							return 0;
						}else{
							return sub();
						}
							
						}break;
						}
						
						}break;
						case 6: {
							
		

		}break;
		
		
		

		
		}
		
	}while(a<0&&a>6);{cout<<"si esta seguro de salir dijite (-1-)";cout<<"     ";cout<<"Si decea regresar al menu principal (-2-)    "<<endl;

	cout<<"                                      ";cin>>M;

	if(M<=0&&M>6){
		return sub();
	}else{
	}
	}
	
	
	
	
	
	
	
	
	return 0;
	
}
	
	
	

