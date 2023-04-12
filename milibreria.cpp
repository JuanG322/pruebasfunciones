#include <iostream>
#include "milibreria.h"

using namespace std;

// Ejercicio 1
int encontrarmax(int x, int y){
    int mayor = 0;
    if(x>y) mayor = x;
    else mayor = y;
    return mayor;
}

// Ejercicio 2
template <class TIPOD>
void mostrarabs(TIPOD numero){
    if(numero < 0){
        numero = numero * -1;
    }
    cout<<"El valor absoluto es: "<<numero<<endl;
}

//Ejercicio 3
void pedirDatos(float& n1, float& n2){
    cout<<"Digite 2 numeros: ";
    cin>>n1>>n2;
}

void mult(float x,float y){
    float multiplicacion = x * y;
    cout<<"La multiplicacion es: "<<multiplicacion<<endl;
}

//ejercicio 4
void al_cuadrado(float a){
    double resultado = a * a;
    cout<<"El cuadrado es: "<<resultado<<endl<<endl;
}

int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

void funpot(int a, int b){
    long resultado = 1;
    for (int i = 0; i < b; i++) {
        resultado *= a;
    }
    cout<<a<<" elevado a "<<b<<" es igual a "<<resultado<<endl<<endl;
}

//ejercicio 6
void decimales(double num1){
    int sindecimales = num1;
    double resultado = 0;

    resultado = num1 - sindecimales;
    cout<<"La parte fracionaria del numero es "<<resultado<<endl<<endl;
}
template void mostrarabs<int>(int);
template void mostrarabs<float>(float);
template void mostrarabs<double>(double);
