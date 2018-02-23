/*Ejercicio 7. Escriba un programa que pida un número N e imprima en pantalla la suma de todos
los números entre 0 y N (incluyéndose el mismo).
Ej: si se ingresa 5: 1+2+3+4+5=15, por lo que se debe imprimir:
La sumatoria desde 0 hasta 5 es: 15*/

#include <iostream>

using namespace std;
int N, i=0,X=0;
int main()
{
    cout<<"Escriba un numero: "<<endl;
    cin >>N;
    while(i!=N){
        i+=1;
        X+=i;
    }
    cout<<"la suma de los numeros de cero al numero introducido es: "<<X<<endl;

}
