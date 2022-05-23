//================================================
//==> Nombre del programa: Comparación de dos números
//==> Archivo : TiguaVivi-Compara.cpp
//==>Autor: Viviana Tigua
//==>Fecha de elaboración: 2022-04-25
//==>Fecha ultima actualización: 2022-05-18
//=================================================

#include<iostream>
using namespace std;
int main ()
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
cout<<"//==> Archivo : TiguaVivi-Compara.cpp"<<endl;
cout<<"//==>Autor: Viviana Tigua"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-25"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;
cout<<"//================================================="<<endl;

	cout<<"El valor de T: "<<AR_t<<" es mayor a R: "<<AR_r<<endl;
        }else{  
	cout<<"El valor de R: "<<AR_r<<" es mayor a T: "<<AR_t<<endl;
        }

        }
        return 0;
}
