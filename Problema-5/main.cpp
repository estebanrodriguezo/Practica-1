/*Problema 5. Escriba un programa que muestre el siguiente patrón en la pantalla:
                                     *
                                    ***
                                   *****
                                  *******
                                   *****
                                    ***
                                     *
El tamaño del patrón estará determinado un número entero impar que ingrese el usuario. En el
ejemplo mostrado, el tamaño de la gura es 7.
*/

#include <iostream>

using namespace std;

int main()
{
    int x,i=1,esp,ast;
    cout<<"Ingrese un numero impar: "<<endl;
    cin>>x;
    while(i<=x-2){
        esp=(x-i)/2;
        while(esp>=1){

            cout<<" ";
            esp--;
        }
        ast=1;
        while(ast<=i){

            cout<<"*";
            ast++;
        }
        esp=(x-i)/2;
        while(esp>=1){
            cout<<" ";
            esp--;
        }
        cout<<endl;
        i=i+2;
    }

        ast=1;
        while(ast<=x){

            cout<<"*";
            ast++;
        }
        cout<<endl;

    i=x-2;
    while(i>=1){
        esp=(x-i)/2;
        while(esp>=1){
            cout<<" ";
            esp--;
        }
        ast=1;
        while(ast<=i){
            cout<<"*";
            ast++;
        }
        esp=(x-i)/2;
        while(esp>=1){
            cout<<" ";
            esp--;
        }
        cout<<endl;
        i=i-2;
    }

}

