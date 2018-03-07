/*Ejercicio 11. Escriba un programa que pida un número N e imprima en pantalla su tabla de mul-
tiplicar hasta 10xN.

Ej: si se ingresa 7 se debe imprimir:
1x7=7

2

2x7=14
3x7=21
4x7=28
5x7=35
6x7=42
7x7=49
8x7=56
9x7=63
10x7=70*/

#include <iostream>

using namespace std;

int main()
{
    int N, i=1;
    cout<<"Ingrese un numero: "<<endl;
    cin>>N;
    while (i<=10){
           int C;
           C=N*i;
           cout<<i<<"*"<<N<<"= "<<C<<endl;
           i+=1;


    }
}
