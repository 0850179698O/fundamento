
	int JT_compara ()		
{
	int jt_x,jt_y;
	cout<<"suma de varios numeros:";
	
	cout<<"\n ingrese numero x:";

cin>>jt_x;
cout<<"\n ingrese numero y:";
cin>>jt_y;

if(jt_x==jt_y){
	cout<<"\n Son iguales";
}
	

else
{
	cout<<"no son iguales";
}
	if(jt_x>jt_y){
		cout<<"\n el mayor es:"<<jt_x;
}else{
		cout<<"\n el mayor es:"<<jt_y;}
	cout<<"==================================";
	cout<<"//==>Autora:Jenniffer Torres:";
	cout<< " //==> Archivo :Comapara.cpp " <<endl;
	cout<<"//==>Fecha de elaboracion:2022-05-02:";
	cout<<"//==>Fecha de actulizacion:2022-05-16:";
	cout<<"==================================";
return 0;
}


	int JT_sumaN()
{
	int jt_a,jt_b,jt_suma;
	cout<<"suma de varios numeros:";
cout<<"\n ingrese numero a Torres Jenniffer:";
cin>>jt_a;
cout<<"\n ingrese numero b Torres Jenniffer:";
cin>>jt_b;
jt_suma=jt_a+jt_b;                                  
cout<<"\n la suma de "<<jt_a<<"+"<<jt_b<<" es:"<<jt_suma;
cout<<"==================================";
cout<<"//==>Autora:Jenniffer Torres:";
cout<< " //==> Archivo :sumaN.cpp " <<endl;
cout<<"//==>Fecha de elaboracion:2022-05-02:";
cout<<"//==>Fecha de actulizacion:2022-05-16:";
cout<<"==================================";

return 0;
}

 int JT_laedad ()
{
	int jt_anioAct,jt_mesAct,jt_fechAct,jt_anioNac, jt_mesNac,jt_fechNac,jt_calcularEdad,jt_respFech,jt_respMes,jt_calculaEdad;
	
	cout << "calcula la Edad, Mes y Dia:";
	cout << "Ingrese Año Actual: "; 
	cin >> jt_anioAct;
	cout << "Ingrese Mes Actual: ";   
	cin >> jt_mesAct;
	cout << "Ingrese Fecha Actual: ";  
	cin >> jt_fechAct;
	cout << "\nIngrese Año Nacimiento: ";  
	cin >> jt_anioNac;                          
	cout << "Ingrese Mes de Nacimiento: ";  
	cin >> jt_mesNac;
	cout << "Ingrese Fecha de Nacimiento: "; 
	cin >> jt_fechNac;
	
	
	if ( jt_fechAct < jt_fechNac  )
	{
		jt_fechAct = jt_fechAct + 30;
		jt_mesAct = jt_mesAct - 1;
		jt_respFech =  jt_fechAct - jt_fechNac;
	}
	else
		jt_respFech =  jt_fechAct - jt_fechNac;
	
	if( jt_mesAct < jt_mesNac )
	{
		jt_mesAct = jt_mesAct + 12;
		jt_anioAct = jt_anioAct - 1 ;
		jt_respMes = jt_mesAct - jt_mesNac;
	}
	else
	   jt_respMes = jt_mesAct - jt_mesNac;
	
	cout << "\nUd. tiene:\n";
	cout << " Edad: " <<jt_anioAct - jt_anioNac << endl;
	cout << " Mes: " << jt_respMes << endl;
	cout << " Dia: " << jt_respFech << endl;  
	cout<<"==================================";
	cout<<"//==>Autora:Jenniffer Torres:";
	cout<< " //==> Archivo :laedad.cpp " <<endl;
	cout<<"//==>Fecha de elaboracion:2022-05-02:";
	cout<<"//==>Fecha de actulizacion:2022-05-16:";
	cout<<"==================================";
                                                                                              
	return 0;
}

int JT_cuentamoneda()
{
int jt_c=0,jt_a=0,jt_c1=0,jt_c2=0,jt_a1=0,jt_a2=0;
float jt_x,jt_n;
do
{
	cout<<"maquina de cuenta moneda :";
	
		
	cout<<"ingresa una noneda:";
	cin>>jt_x;
	jt_c=jt_c+1;
	jt_a=jt_a+1;
	
}while (jt_x==0.10);
cout<<"total de dinero:";
cin>>jt_a;
cout<<endl;
cout<<"total de dinero 0.10:";
cin>>jt_a1;
cout<<endl;
cout<<"total de dinero 0.25:";
cin>>jt_a2;
cout<<endl;
cout<<"==================================";
cout<<"//==>Autora:Jenniffer Torres:";
cout<< "//==>Archivo : cuentamoneda.cpp " <<endl;
cout<<"//==>Fecha de elaboracion:2022-05-02:";
cout<<"//==>Fecha de actulizacion:2022-05-16:";
cout<<"==================================";
return 0;
}

int JT_puntoventa()
{
float jt_x,jt_c=0,jt_a=0,jt_n,jt_vb,jt_iva,jt_vdes,jt_vf;
cout<<"punto y venta de un producto:";
cout<<" ingrece la cantidad de producto que quiera sumar:";
cin>>jt_x;
jt_c=jt_c+1;
jt_a=jt_a+jt_x;
{ while(jt_c<jt_n)
	jt_vb=jt_a;
jt_iva=jt_vb*0.12;
jt_vdes=jt_vb*0.10;
jt_vf=jt_vb+jt_iva-jt_vdes;
cout<<"el valor final a pagar es:";
cout<<jt_vf<<endl;
cout<<"==================================";
cout<<"//==>Autora:Jenniffer Torres:";
cout<< "//==>Archivo :puntoveta.cpp " <<endl;
cout<<"//==>Fecha de elaboracion:2022-05-02:";
cout<<"//==>Fecha de actulizacion:2022-05-16:";
cout<<"==================================";
}
return 0;
}
	
