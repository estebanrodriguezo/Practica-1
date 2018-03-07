/*Ejercicio 3. Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.
Ej: si se ingresan 7 y 3 se debe imprimir:
El mayor es 7*/

#include <iostream>

using namespace std;

int main()
{
    int  A, B;
    cout <<"Ingrese un Numero: ";
    cin >> A;
    cout <<"Ingrese otro Numero: ";
    cin >>B;

    if(A>B){
        cout << "El numero mayor es: "<<A<<endl;
    }
    else{
            cout << "El numero mayor es: "<<B<<endl;
              }
}
