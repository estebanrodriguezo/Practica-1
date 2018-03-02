/*Ejercicio 27. Escriba un programa que actúe como una calculadora con operaciones de suma,
resta, multiplicación y división, el usuario debe ingresar los operandos y la operación a realizar.
Ej: si se ingresan 3, + y 5 se debe imprimir:
3+5=8*/

#include <iostream>

using namespace std;

int main()
{
    char x=43,y=45,z=158,v=246,s;
    int a,b,n;
    cout<<"ingrese un numero: "<<endl;
    cin>>a;
    cout<<"ingrese el operando: "<<endl;
    cin>>s;
    cout<<"ingrese un numero: "<<endl;
    cin>>b;


    if(s==x){
        n=a+b;
        cout<<"la suma entre los numeros es:"<<n<<endl;
        }
    else if(s==y){
        n=a-b;
        cout<<"la resta entre los numeros es:"<<n<<endl;
        }
    else if(s==z){
        n=a*b;
        cout<<"la multiplicacion entre los numeros es:"<<n<<endl;
        }
    else if(s==v){
        n=a/b;
        cout<<"la division entre los numeros es:"<<n<<endl;
        }




}
