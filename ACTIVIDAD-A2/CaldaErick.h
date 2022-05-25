
float C_E_comapara(){

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
int C_E_contadorMonedas(){


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

int C_E_laedad(){
	
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

float C_E_puntoventa(){


int C_Ea=0,C_Ec=0;
	float C_Ex, C_En, C_Evb, C_Eviva, C_Evdes, C_Evfi, C_Evft;
	
	cout<<"\n\t\t***programa de Erick***"<<endl;
	cout<<"Ingrese la cantidad de los pruductos";   
	cin>>C_En;
	//inicio del bucle
	do
	{cout<<"\ningrese el precio del producto ";  
	cin>> C_Ex;
	C_Ec = C_Ec+1;
	C_Ea = C_Ea+C_Ex;
	}
	while(C_Ec<C_En);//fin del bucle
	
	
	// se saca la cuenta
	C_Evb = C_Ea;
	C_Eviva = C_Evb*0.12;
	C_Evdes = C_Evb*0.10;
	C_Evfi = C_Evb+C_Eviva;
	C_Evft = C_Evfi-C_Evdes;
	
	cout<<"\nValor a pagar solo del iva : "<<C_Evfi<<endl;
	cout<<"\nvalor tital a pagar"<<C_Evft;
	cout<<"//========================================="<<endl;
	cout<<"//===> Nombre del programa: PUNTO DE VENTA"<<endl;
	cout<<"//===> Archivo: PUNTO DE VENTA.cpp"<<endl;
	cout<<"//===> Fecha de elaboracion: 01-05-2022"<<endl;
	cout<<"//===> Fecha de actualizacion: 16-05-2022"<<endl;
	cout<<"//========================================="<<endl;
	return 0;
}


int C_E_suma(){


int C_Ea,C_Eresul,C_Eb;
	cout<<"ingrese la primera varible"<<endl;
	cin>>C_Ea;
	cout<<"ingrese la segunda varible"<<endl;
	cin>>C_Eb;
	// suma?
	C_Eresul=C_Ea+C_Eb;
	//resultado
	cout<<"La suma es:"<<C_Eresul<<endl;
	cout<<endl<<"//========================================="<<endl;
	cout<<"//===> Nombre del programa: SUMA"<<endl;
	cout<<"//===> Archivo: SUMA.cpp"<<endl;
	cout<<"//===> Autor: CALDAANGULO ERICK PATRICIO"<<endl;
	cout<<"//===> Fecha de elaboracion: 01-05-2022"<<endl;
	cout<<"//===> Fecha de actualizacion: 16-05-2022"<<endl;
	cout<<"//========================================="<<endl;
	
	return 0;
	
}
