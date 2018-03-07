/*Problema 1. Escriba un programa que identique si un carácter ingresado es una vocal, una con-
sonante o ninguna de las 2 e imprima un mensaje según el caso.

Nota: el formato de salida debe ser:
no es una letra.
a es una vocal.
C es una consonante.
*/

#include <iostream>

using namespace std;

int main()
{
    char x;
    cout<<"Ingrese una letra: "<<endl;
    cin>>x;
    if((x<65) or (x>=91 && x<=96) or (x>122)){
        cout<<x<<" no es una letra"<<endl;
    }
    while((x>=65 && x<=85) or (x>=97 && x<=122) ){
        if(x==65 or x==69 or x==73 or x==79 or x==85 or x==97 or x==101 or x==105 or x==111 or x==117){
            cout<<"La letra "<<x<<" es vocal"<<endl;
            break;
                                                    }
        else{
            cout<<"La letra "<<x<<" es consonante"<<endl;
            break;
            }
    }
}
