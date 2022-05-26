//***** Funciones Tigua Rodríguez Angie Viviana
//
//
//
//
//

int TV_SumaN()
{

	int AR_a=0,AR_v;
	float AR_t=0,AR_r;
	cout<<"Ingresar la cantidad de números a sumar: ";
	cin>>AR_v;
	do{
	cout<<"Ingresar un número: ";
	cin>>AR_r;
	AR_a=AR_a+1;
	AR_t=AR_t+AR_r;
	}
	while(AR_a<AR_v);


cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Suma de varios números"<<endl;
cout<<"//==> Archivo: TiguaVivi-SumaN.cpp"<<endl;
cout<<"//==>Autor: Viviana Tigua"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-25"<<endl;
cout<<"//==>Fecha última actualización: 2022-05-18"<<endl;
cout<<"//================================================="<<endl;


	cout<<"La suma total es: "<<AR_t<<endl;
	return 0;

}

int TV_Compara()
{

        float AR_t,AR_r;
        cout<<"Ingrese el valor de T: ";
        cin>>AR_t;
        cout<<"Ingrese el valor de R: ";
        cin>>AR_r;
        if (AR_t==AR_r){  
        cout<<"El valor de T: "<<AR_t<<" es igual a R: "<<AR_r<<endl;
        }else{
        if (AR_t>AR_r){   

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Comparación de dos números"<<endl;
cout<<"//==> Archivo: TiguaVivi-Compara.cpp"<<endl;
cout<<"//==>Autor: Viviana Tigua"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-25"<<endl;
cout<<"//==>Fecha última actualización: 2022-05-18"<<endl;
cout<<"//================================================="<<endl;

        cout<<"El valor de T: "<<AR_t<<" es mayor a R: "<<AR_r<<endl;
        }else{  
        cout<<"El valor de R: "<<AR_r<<" es mayor a T: "<<AR_t<<endl;
        }

        }
        return 0;
}

int TV_PuntoVenta()
{

        int AR_b=0,AR_q;
        float AR_e=0,AR_m,AR_vt,AR_tiva,AR_tdes,AR_iva=0.12,AR_dsc=0.10,AR_pt;
        cout<<"Ingresar la cantidad de productos a comprar: ";
        cin>>AR_q;
        do{
        cout<<"Ingresar el valor del producto: ";
        cin>>AR_m;
        AR_b=AR_b+1;
        AR_e=AR_e+AR_m;
        AR_tiva=AR_e*AR_iva;
        cout<<"El valor del iva de su compra es: $ " <<AR_tiva<<endl;
        AR_tdes=AR_e*AR_dsc;
        AR_vt=AR_tiva+AR_tdes;
        }
        while(AR_b<AR_q);
        if(AR_vt==AR_b){
        cout<<"Su compra obtiene descuento de: "<<AR_vt<<endl;
        AR_iva=AR_vt*AR_tiva/100;
        AR_dsc=AR_vt*AR_tdes/100;
        }else{
        AR_pt=AR_e+AR_tiva-AR_tdes;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Punto de Venta"<<endl;
cout<<"//==> Archivo: TiguaVivi-PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Viviana Tigua"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-25"<<endl;
cout<<"//==>Fecha última actualización: 2022-05-18"<<endl;
cout<<"//================================================="<<endl;


        cout<<"El valor total a pagar de su compra es: $ "<<AR_pt<<endl;
        }
        return 0;
}

int TV_CuentaMoneda()
{

                  int AR_n, AR_c=0, AR_c1=0, AR_c2=0;
	float AR_x, AR_a=0, AR_a1=0, AR_a2=0, AR_m=0.10;
	cout<<"Cantidad de monedas a ingresar: ";
	cin>>AR_n;
	do{
		cout<<"Ingrese el valor de la moneda (0.10, 0.25) : ";
		cin>>AR_x;
		AR_c=AR_c+1;
		AR_a=AR_a+AR_x;
		if (AR_x==AR_m){
			AR_c1=AR_c1+1;
			AR_a1=AR_a1+AR_x;
		}else{
			AR_c2=AR_c2+1;
			AR_a2=AR_a2+AR_x; 
		}
}while(AR_c<AR_n);


cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Cuenta Moneda"<<endl;
cout<<"//==> Archivo: TiguaVivi-CuentaMoneda"<<endl;
cout<<"//==>Autor: Viviana Tigua"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-25"<<endl;
cout<<"//==>Fecha última actualización: 2022-05-18"<<endl;
cout<<"//================================================="<<endl;



cout<<"El resultado fue:"<<endl;
cout<<"Cantidad de monedas ingresadas: "<<AR_c<<endl;
cout<<"Cantidad total en dinero contado: "<<AR_a<<endl;
cout<<"Cantidad de monedas de 0.10c ingresadas: "<<AR_c1<<endl;
cout<<"Cantidad total en dinero de monedas de 0.10cc: "<<AR_a1<<endl;
cout<<"Cantidad de monedas de 0.25cc ingresadas: "<<AR_c2<<endl;
cout<<"Cantidad total en dinero de monedas de 0.25cc: "<<AR_a2<<endl;
return 0;
}


int TV_LaEdad()
{

	int AR_dd,AR_mm,AR_yy,AR_dd1,AR_mm1,AR_yy1,AR_da,AR_ma,AR_ya;
	
	cout<<"Ingresa la Fecha Actual: Dia Mes y Año "<<endl;
	cin>>AR_dd>>AR_mm>>AR_yy;
	cout<<"Ingresa la Fecha de Nacimiento: Dia Mes y Año "<<endl;
	cin>>AR_dd1>>AR_mm1>>AR_yy1;
	if(AR_dd<AR_dd1){
		AR_dd=AR_dd+30;
		AR_mm=AR_mm-1;
		AR_da=AR_dd-AR_dd1;
	}
	else{
		AR_da=AR_dd-AR_dd1;
	}
	if(AR_mm<AR_mm1){
		AR_mm=AR_mm+12;
		AR_yy=AR_yy-1;
		AR_ma=AR_mm-AR_mm1;
	}
	else{
		AR_ma=AR_mm-AR_mm1;
	}
	AR_ya=AR_yy-AR_yy1;


cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: La Edad"<<endl;
cout<<"//==> Archivo: TiguaVivi-LaEdad.cpp"<<endl;
cout<<"//==>Autor: Viviana Tigua"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-25"<<endl;
cout<<"//==>Fecha última actualización: 2022-05-19"<<endl;
cout<<"//================================================="<<endl;


	cout<<"Usted Tiene "<<AR_ya<<" años "<<AR_ma<<" meses "<<" y "<<AR_da<<" dias "<<endl;
	return 0;
}

