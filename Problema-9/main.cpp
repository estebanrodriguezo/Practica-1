/*Problema 9. Escriba un programa que pida un número entero N e imprima el resultado de la suma
de todos sus dígitos elevados a sí mismos.
Ej: si se ingresa 1223 el resultado sería 1

1 + 2^2 + 2^2 + 3^3 = 36
Nota: la salida del programa debe ser: El resultado de la suma es: 36.
*/

#include <iostream>


using namespace std;
static int potencia(int base, int exp);
static int sumaDigitosE(int numero, int nDigitos);
int main()
{
    int x,nDigitos=1,z;
    cout << "Ingrese un numero: " << endl;
  cin>>x;

    z=x;

    while(z>=10){
        z=z/10;
        nDigitos++;
    }

    cout<<sumaDigitosE(x,nDigitos)<<endl;

    //cout<<potencia(10,0)<<endl;
    //cout<<10%potencia(10,0)<<endl;
   /* cout<<potencia(10,3)<<endl;
    cout<<potencia(25,1)<<endl;
    cout<<potencia(2,7)<<endl;
    cout<<potencia(3,3)<<endl;
    cout<<potencia(0,3)<<endl;
    cout<<potencia(0,0)<<endl;
    cout<<potencia(4,0)<<endl;
  //  cout<<x<<endl;

   // int mostrar=sumaDigitosE(x,i);
   // cout<<mostrar;
*/
}


static int sumaDigitosE(int numero,int nDigitos){
    int suma=0;
    int digitoActual=0;
    for(int j=nDigitos;j>=1;j--){
    digitoActual=numero/(potencia(10,j-1));
    suma= suma+ potencia(digitoActual,digitoActual);
    numero= numero%(potencia(10,j-1));
    }
    return suma;
}


static int potencia(int base, int exp){
 int ayuda=base;
    if(exp>1){
        for(int i=1;i<exp;i++){
            base = base *ayuda ;
        }
        return base;
    }
    else{
        if (exp==1){
            return base;
        }else{
            return 1;
        }
    }
}
