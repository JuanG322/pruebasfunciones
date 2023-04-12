#include <iostream>
#include "milibreria.h"

using namespace std;

int main()
{
    int opcion = 1;

    while(opcion != 0){
        cout<<"Elige un ejercicio "<<endl;
        cout<<"1. Numero mayor"<<endl;
        cout<<"2. Valor absouluto de un numero"<<endl;
        cout<<"3. Multiplicacion de dos numeros"<<endl;
        cout<<"4. Numero elevado al cuadrado"<<endl;
        cout<<"5. Numero elevado a la potecia N"<<endl;
        cout<<"6. devolver la parte fracionaria de un numero"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Escoje: ";
        cin>>opcion;

        switch(opcion){
        case 1:{
            int num1, num2;
            cout << "Digite 2 numeros: " << endl;
            cin>>num1>>num2;
            int max = encontrarmax(num1, num2);
            cout<<"El numero mayor es: "<<max<<endl;
            break;
        }

        case 2:{
            int num1 = -4;
            mostrarabs(num1);
            break;
        }

        case 3:{
            float n1, n2;
            pedirDatos(n1, n2);
            mult(n1,n2);
            break;
        }

        case 4:{
            float num = 0;
            cout<<"Ingrese un numero: ";cin>>num;
            al_cuadrado(num);
            break;
        }

        case 5:{
            int num = 0, potencia = 0;
            cout<<"Ingrese el numero: ";cin >> num;
            cout<<"Ingrese la potencia: ";cin >> potencia;
            funpot(num, potencia);
            break;
        }

        case 6:{
            double num = 0;
            cout<<"Ingrese un numero: ";cin >> num;
            decimales(num);
        }

        }
    }

    return 0;
}
