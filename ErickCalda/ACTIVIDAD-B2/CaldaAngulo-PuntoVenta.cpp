#include<iostream>
using namespace std;
int main()
{
	int a=0,c=0;
	float x, n, vb, viva, vdes, vfi, vft;
	
	cout<<"\n\t\t***programa de Erick***"<<endl;
	cout<<"Ingrese la cantidad de los pruductos";   
	cin>>n;
	
	do
	{cout<<"\ningrese el precio del producto ";  
		cin>> x;
		c = c+1;
		a = a+x;
	}
	while(c<n);
	vb = a;
	viva = vb*0.12;
	vdes = vb*0.10;
	vfi = vb+viva;
	vft = vfi-vdes;
	
	cout<<"\nValor a pagar solo del iva : "<<vfi<<endl;
	cout<<"\nvalor tital a pagar"<<vft;
	return 0;
}
