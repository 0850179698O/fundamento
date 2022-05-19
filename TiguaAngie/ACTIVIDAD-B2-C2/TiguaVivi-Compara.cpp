#include<iostream>
using namespace std;
int main ()
{
        float t,r;
        cout<<"Ingrese el valor de T: ";
        cin>>t;
        cout<<"Ingrese el valor de R: ";
        cin>>r;
        if (t==r){                                                    cout<<"El valor de T: "<<t<<" es igual a R: "<<r<<endl;
        }else{
        if (t>r){                                                     cout<<"El valor de T: "<<t<<" es mayor a R: "<<r<<endl;
        }else{                                                        cout<<"El valor de R: "<<r<<" es mayor a T: "<<t<<endl;
        }
        }
        return 0;
}
