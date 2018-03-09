/*Ejercicio 23. Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo
común múltiplo entre los dos.
Ej: si se ingresan 4 y 6 se debe imprimir:
El MCM de 4 y 6 es: 12*/

# include <iostream>
using namespace std;

int mcd(int a, int b);
int mcm(int a, int b);

int main()
{
    int a, b;

    cout << "Introduce el primer numero: ";
    cin >> a;
    cout << "Introduce el segundo numero: ";
    cin >> b;
    cout << "El m.c.m. de " << a << " y " << b << " es " << mcm(a,b) << endl;
}

int mcd(int a, int b)
{
    int aux;
    while(b!=0)
    {
        aux = b;
        b = a % b;
        a = aux;
    }
    return a;
}
int mcm(int a, int b)
{
    return (a * b)/mcd(a, b);
}

