/*Ejercicio 19. Escriba un programa que pida un número N e imprima si es o no un número primo.
Ej: si se ingresa 7 se debe imprimir:
7 es un numero primo.
y si se ingresa 8 se debe imprimir:
8 NO es un numero primo.*/

#include <iostream>

using namespace std;

int main()
{
    int n,c=1,div=0;
    cout<<"ingrese numero: "; cin>>n;
    while(c<=n){
        if(n%c==0){
            div++;
            c++;
        }
        else{
            c++;
        }
    }
    if(div==2){
        cout<<n<<" es primo!"<<endl;
    }
    else{
        cout<<n<<" no es primo :("<<endl;
    }

}
