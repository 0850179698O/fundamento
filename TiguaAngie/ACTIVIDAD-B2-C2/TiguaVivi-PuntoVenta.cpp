//================================================
//==> Nombre del programa: Precio de varios productos
//==> Archivo : TiguaVivi-PuntoVenta.cpp
//==>Autor: Viviana Tigua
//==>Fecha de elaboración: 2022-04-25
//==>Fecha ultima actualización: 2022-05-18
//=================================================


#include<iostream>
using namespace std;
int main()
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

//================================================
//==> Nombre del programa: Precio de varios productos
//==> Archivo : TiguaVivi-PuntoVenta.cpp
//==>Autor: Viviana Tigua
//==>Fecha de elaboración: 2022-04-25
//==>Fecha ultima actualización: 2022-05-18
//=================================================

        cout<<"El valor total a pagar de su compra es: $ "<<AR_pt<<endl;
        }
        return 0;
}
