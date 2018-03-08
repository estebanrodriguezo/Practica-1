/*Problema 13. Escriba un programa que reciba un número y calcule la suma de todos los primos
menores que el número ingresado.
Ej: Si se recibe 10 el programa debe imprimir 17.
Nota: la salida del programa debe ser: El resultado de la suma es: 17.
*/
//cout<<"+"<<c;

#include<iostream>
using namespace std;

int main()
{
  int n=0,c=0,c2=0,res=0,nc=0,x=0;
  cout<<"Introduce el limite de numeros: ";
  cin>>n;
  for(c=1;c<=n;c++){

    for(c2=1;c2<=c;c2++){

      res=c%c2;
      if(res==0){

        nc=nc+1;
      }
    }
    if(nc==2){
      x+=c;
    }

    nc=0;
  }
    cout<<"La suma entre los todos los primos menores a "<<n<<" es igual a : "<<x<<endl;
}


