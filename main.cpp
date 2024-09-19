#include <iostream>

using namespace std;

int main()
{

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


int numeros , minimoPositivos=0, maximoNegativos=0;

cout << "ingrese una lista de numeros : " << endl;
cin >> numeros ;


if(numeros>0){
    minimoPositivos=numeros;
} if (numeros<0) {
    maximoNegativos=numeros;
}

while(numeros!=0){
      cin >> numeros;

      if(numeros>0 && numeros<minimoPositivos) {
        minimoPositivos=numeros;
      }
      else if (numeros<0 && numeros>maximoNegativos && numeros!=0){
        maximoNegativos=numeros;
      }
      }

      cout << " el minimo de los positivos es : " << minimoPositivos << " mientras que el maximo de los negativos es : " << maximoNegativos << endl;


    return 0;
}
