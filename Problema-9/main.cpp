/*Problema 9. Escriba un programa que pida un número entero N e imprima el resultado de la suma
de todos sus dígitos elevados a sí mismos.
Ej: si se ingresa 1223 el resultado sería 1

1 + 2^2 + 2^2 + 3^3 = 36
Nota: la salida del programa debe ser: El resultado de la suma es: 36.
*/

#include <iostream>


using namespace std;
static int potencia(int base, int exp);//funcion creada para generar las potencias
static int sumaDigitosE(int numero, int nDigitos);//funcion creada para acomular la suma de los digitos ya potenciados
int main()
{
    int x,nDigitos=1,z;
    cout << "Ingrese un numero: " << endl;
    cin>>x;
    z=x;
    while(z>=10){//este while tiene como funcion hallar el numeros de digitos del numero ingresado
        z=z/10;
        nDigitos++;
    }

    cout<<sumaDigitosE(x,nDigitos)<<endl;
}


static int sumaDigitosE(int numero,int nDigitos){
    int suma=0;
    int digitoActual=0;
    for(int j=nDigitos;j>=1;j--){//lo que hace este for es sacar digito por digito mientras a suvez llama la funcion potencia para potenciarlo por el mismo
    digitoActual=numero/(potencia(10,j-1));//se saca el primer digito haciendo una division entera por 10^numero de digitos menos uno
    suma= suma+ potencia(digitoActual,digitoActual);
    numero= numero%(potencia(10,j-1));//para ir eliminando digitos se hace una division modulo
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
