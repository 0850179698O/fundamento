#include<iostream>/*programa q iso el profesor*/
using namespace std;
int main()
{
//inicio del programa
int n, c=0, c1=1, c2=0, cl, cz;
	float x, al, a=0, a1=0, a2=0, az;
	
	
	cout<<"\ningrese la cantidad de monedas: "<<endl;  cin>>n;


	//inicio del bucle
	do
	{
	
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): "<<endl;  cin>>x;
		c = c+1;
		a = a+x;
	

		//inicio de condicionales
		if(x==0.25)
		{
			c1 = c1+1;
			a1 = x+a1;
		}
		else
			{
				c2 = c2+1;
				a2 = a2+x;
			}
   }
	while(c<n);//fin del bucle
	
	cout<<" total de monedas ingresadas: "<<c<<endl;
	cout<<" total de dinero contado: "<<a<<endl;
	cout<<"total de monedas de$0.10 ingresadas: "<<c2<<endl;
	cout<<"total en dinero de las monedas de $0.10: "<<a2<<endl;
	cout<<"total de monedas de $0.25 ingresadas: "<<c1<<endl;
	cout<<" total en dinero de las monedas de $0.25: "<<a1<<endl;
	
return 0;
}
