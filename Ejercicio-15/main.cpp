/*Ejercicio 15. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla la suma de todos los números ingresados.
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El resultado de la sumatoria es: 6*/

#include <iostream>

using namespace std;

int main()
{
    int N,C=0;
    while(N!=0){
        cout<<"Ingrese un numero: "<<endl;
        cin>>N;
        C+=N;
    }
    cout<<C<<endl;
}
