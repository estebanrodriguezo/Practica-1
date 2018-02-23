#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << "Escriba Un Numero: ";
    cin >> numero;

    cout << "El Numero  Que Escibrio Es: " <<numero<<endl;

    if(numero%2==0){
        cout<<"El numero es par"<<endl;

    }
    else{
        cout<<"El numero es impar"<< endl;
    }
}
