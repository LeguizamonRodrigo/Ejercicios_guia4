#include <iostream>

using namespace std;

int main()
{
//ejercicio_1

/*
int numeros=0;

while (numeros!=10) {
    numeros++;
    cout << numeros << endl;
}
*/

//ejercicio_2

/*
int numeros=1;

while (numeros <= 20) {
    cout << numeros << endl;
    numeros+=3;

}
*/

//ejercicio_3

/*

int numeros=20;

while (numeros<=20 && numeros>=1) {
 cout << numeros << endl;
    numeros--;


}
*/

//ejercicio_4

/*

int ingreso ,  numeros=0;

cout << "ingrese un numero positivo : " << endl;
cin >> ingreso;

while(ingreso>=1 && numeros <ingreso) {
    numeros++;
    cout << numeros << endl;
}
*/

//ejercicio_5

/*

int numero1 , numero2 , menor , mayor;

cout << "ingrese dos numeros : " << endl;
cin >> numero1 >> numero2;

if(numero1>numero2) {
    mayor=numero1;
    menor=numero2;
}
else {
    mayor=numero2;
    menor=numero1;
}

while (menor<mayor) {
        menor++;
        cout << menor << endl;

}
*/

//ejercicio_6

/*

int numeros=1;
int positivos=0 , negativos=0;

cout << "ingrese una lista de numeros que finalizara cuando presione 0 : " << endl;

while (numeros!=0){


cin >> numeros;

if(numeros>0) {
    positivos++;
}
else if ( numeros<0) {
    negativos++;
}

}


cout << "los positivos son : " << positivos << " mientras que los negativos son : " << negativos << endl;
*/

/*
//ejercicio_7

int numeros=1 , maximo;

cout << "ingrese una lista de numeros cuando presione 0" << endl;
cin >> numeros;
maximo=numeros;

while (numeros!=0) {
    cin >> numeros;



    if(numeros>maximo && numeros != 0) {
        maximo=numeros;
    }

}

cout << "el numero maximo es : " << maximo << endl;
*/

/*
    //ejercicio_8

    int numeros, posicion=0, maximo=0 , posicionMax=0;

    cout << "ingrese una lista de numeros : " << endl;
    cin >> numeros;
    maximo=numeros;
    posicion=1;
    posicionMax=1;
    while  (numeros!= 0) {
        cin >> numeros;
        posicion++;

        if(numeros>maximo && numeros!=0) {
            maximo=numeros;
            posicionMax=posicion;
        }
    }

    cout << "El numero maximo es " << maximo << " y fue ingresado en la posicion " << posicionMax << endl;
*/

//ejercicio_9

/*

int numeros , maximoPares=0;
bool parFounded = false;
cout << "ingrese una lista de numeros :" << endl;
cin >> numeros;

if(numeros%2 == 0 ){
    maximoPares=numeros;
    parFounded= true ;
}


while(numeros!=0){
    cin >> numeros;

    if(parFounded == false ) {
        if(numeros%2 == 0) {
            maximoPares=numeros;
            parFounded=true;
        }
    }

    if(numeros%2 == 0 && numeros>maximoPares && numeros!=0){
        maximoPares=numeros;
    }
}

cout << " el maximo de los pares es : " << maximoPares << endl;

*/

//ejercicio_10
/*

int numeros , maximo , minimo;

cout << "ingrese una lista de numeros : " << endl;
cin >> numeros;
maximo=numeros;
minimo=numeros;

while (numeros !=0 ) {
    cin >> numeros;

    if(numeros>maximo && numeros!=0){

        maximo=numeros;
    }
    else if (numeros<minimo && numeros!=0){
        minimo=numeros;
    }
}
cout << "el numero maximo es : " << maximo << " el numero minimo es : " << minimo << endl;
*/

//ejercicio_11

/*

int numeros , minimoPositivos=0, maximoNegativos=0;

cout << "ingrese una lista de numeros : " << endl;
cin >> numeros ;


if(numeros>0){
    minimoPositivos=numeros;
}

while(numeros!=0){
      cin >> numeros;

    if(numeros<0){
        maximoNegativos=numeros;
    }

      if(numeros>0 && numeros<minimoPositivos) {
        minimoPositivos=numeros;
      }
      else if (numeros<0 && numeros>maximoNegativos && numeros!=0){
        maximoNegativos=numeros;
      }
      }

      cout << " el minimo de los positivos es : " << minimoPositivos << " mientras que el maximo de los negativos es : " << maximoNegativos << endl;

*/

//ejercicio_12

int numeros , anterior=0 , segundoImpar=0;
bool parFounded=false , imparFounded=false;
int impares=0;
cout << "ingrese una lista de numeros que finaliza cuando ingrese un 0 : " << endl;
cin >>numeros;

while (numeros !=0) {
    cin >> numeros;

    if(numeros%2 == 0){
        parFounded=true;

    }
    else {
        imparFounded=true;
        anterior= numeros;
        impares++;
    }
    if (impares == 2 ){
        segundoImpar=numeros;
        impares=0;
    }
}

cout << " el primer impar encontrado es : " << anterior << " mientras que el segundo es : " << segundoImpar << endl;


    return 0 ;

    }
