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

    return 0 ;

    }
