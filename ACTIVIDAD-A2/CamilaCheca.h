
int C_C_cuentaMonedas(){
	
	
	int c=0,a=0,c1=0,c2=0,a1=0,a2=0;
    float d,e;
    do
    {
   cout<<"ingresa una noneda:";
   cin>>d;
   c=c+1;
   a=a+1;
   
    }while (d==0.10);
cout<<"total de dinero:";
cin>>a;
cout<<endl;
cout<<"total de dinero 0.10:";
cin>>a1;
cout<<endl;
cout<<"total de dinero 0.25:";
cin>>a2;
cout<<endl;
return 0;
	
	
	
	
	return 0;
}
int laedad(){
	
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
	if(Cch_mesNaci < Cch_mesActual){
		
	    Cch_edad=Cch_anoActual-Cch_anoNaci;
	    
		}else if(Cch_mesNaci<=Cch_mesActual & Cch_diaNaci<=Cch_diaActual){
	 cin>>Cch_diaActual;
	}if(Cch_mesNaci < Cch_mesActual){
	    Cch_edad=Cch_anoActual-Cch_anoNaci;
		}else if(Cch_mesNaci<=Cch_mesActual & Cch_diaNaci<=Cch_diaActual){




			Cch_edad=Cch_anoNaci-Cch_anoActual;
	}else if(Cch_mesNaci>Cch_mesActual & Cch_diaNaci>Cch_mesActual){(Cch_edad=Cch_anoActual-Cch_anoNaci)-1;
	}else if(Cch_mesNaci>Cch_mesActual & Cch_diaNaci>Cch_mesActual){(Cch_edad=Cch_anoActual-Cch_anoNaci)-1;
	}
	

	cout<< Cch_edad;
	
			cout<<endl<< " //========================================= ======= " <<endl;
		cout<< " //==> Nombre del programa: Edad de una persona " <<endl;
		cout<< " //==> Archivo : ChecaCamila-laedad.cpp " <<endl;
		cout<< " //==>Autor: Camila Checa" <<endl;
		cout<< " //==>Fecha de elaboración: 2022-04-29 " <<endl;
		cout<< " //==>Fecha ultima actualización: 2022-05-18 " <<endl;
		cout<< " //============================================ ===== " <<endl;


return 0;

	}
	
	
float C_C_puntoventa(){

	
int Cch_a=0,Cch_c=0;
	float Cch_x, Cch_n, Cch_vb, Cch_viva, Cch_vdes, Cch_vfi, Cch_vft;
	
	cout<<"\n\t\t***programa de Camila***"<<endl;
	cout<<"Ingrese la cantidad de los pruductos";   
	cin>>Cch_n;
	//inicio del bucle
	do
	{cout<<"\ningrese el precio del producto ";  
	cin>> Cch_x;
	Cch_c = Cch_c+1;
	Cch_a = Cch_a+Cch_x;
	}
	while(Cch_c<Cch_n);//fin del bucle
	
	
	// se saca la cuenta
	Cch_vb = Cch_a;
	Cch_viva = Cch_vb*0.12;
	Cch_vdes = Cch_vb*0.10;
	Cch_vfi = Cch_vb+Cch_viva;
	Cch_vft = Cch_vfi-Cch_vdes;
	
	cout<<"\nValor a pagar solo del iva : "<<Cch_vfi<<endl;
	cout<<"\nvalor tital a pagar"<<Cch_vft;
	cout<<"//========================================="<<endl;
	cout<<"//===> Nombre del programa: PUNTO DE VENTA"<<endl;
	cout<<"//===> Archivo: ChecaCamila-PuntoVenta.cpp"<<endl;
	cout<<"//===> Fecha de elaboracion: 01-05-2022"<<endl;
	cout<<"//===> Fecha de actualizacion: 18-05-2022"<<endl;
	cout<<"//========================================="<<endl;
	return 0;
}

float C_C_compara(){


float CCh_a,CCh_b;
	cout<<"ingrse los valores de CCh_a y CCh_ b "<<endl;
	cin>>CCh_a>>CCh_b;
	if(CCh_a==CCh_b)
	{cout<<"CCh_a  es igual CCh_b";
	}
	else{
cout<<endl<< " //========================================= ======= " <<endl;
cout<< " //==> Nombre del programa: Punto de Venta " <<endl;
cout<< " //==> Archivo : ChecaCamila-compara.cpp " <<endl;
cout<< " //==>Autor: Camila Checa " <<endl;
cout<< " //==>Fecha de elaboración: 2022-04-2 " <<endl;
cout<< " //==>Fecha ultima actualización: 2022-05-17 " <<endl;
cout<< " //============================================ ===== " <<endl;	


	if(CCh_a>CCh_b){
	cout<<"CCh_b es mayor q CCh_a";
	}
	else{cout<<"CCh_b es mayor que CCh_a";
	}
}
return 0;	

}

	
int C_C_sumaNumeros(){


int Cch_n1,Cch_n2,Cch_suma;
cout <<"ingrese la primera varible";
cin>>Cch_n1;
cout <<"ingrese la segunda varible";
cin>>Cch_n2;


cout<<endl<< " //========================================= ======= " <<endl;
cout<< " //==> Nombre del programa: SumaN " <<endl;
cout<< " //==> Archivo : ChecaCamila-suma.cpp " <<endl;
cout<< " //==>Autor: Camila Checa" <<endl;
cout<< " //==>Fecha de elaboración: 2022-04-29 " <<endl;
cout<< " //==>Fecha ultima actualización: 2022-05-18 " <<endl;
cout<< " //============================================ ===== " <<endl;


Cch_suma=Cch_n1+Cch_n2;

cout <<"La Cch_suma es:"<<Cch_suma <<endl;

return 0;
}	
		
		
