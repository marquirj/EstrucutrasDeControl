#include <iostream>

using namespace std;
/*
3. Ejercicio03.cpp: escribe un programa que pida al usuario las 5 números que (pueden contener decimales).
Se deben almacenar a un array y mostrarlas por consola. Seguidamente se pedirá al usuario si se quiere:
1- Modificar un valor: en este caso se pedirá qué posición del array se quiere modificar y su nuevo valor.
 A continuación ha de mostrar todos los valores almacenados en el array.
2- Mostrar el valor más bajo: ha de buscar mediante un bucle  el valor más bajo y después mostrarlo.
3- Mostrar el valor medio almacenado: ha de calcular el valor medio mediante un bucle y  mostrarlo por consola.
0- finalizar el programa.
El programa no ha de finalizar hasta que el usuario seleccione la  opción 0.
*/
int main(int argc, char *argv[]){
    float miArray[5];
    int contador=0; //valor para no pasarse ddel tamño del array
    float valor=0; //Valor solicitado por consola
    int control;//Valor para controlar el do/while
    int posicionModificar;//Valor para posición a modificar
    float nuevoValor; //Nuevo valor a modificar
    float masBajo=10000;//Numero muy alto para calcular el mas masBajo
    float media=0;//igual a 0 para añadir la suma
    do {
        cout <<"Introduce un valor: " ;//Pide un valor para introducir
        cin >> valor;//VAlor a introducir
        miArray[contador]=valor;//Se asigna el valor introducido a la posición correspondiente del array
        contador++;//Aumenta el contador
    }while(contador<5);
    for (int i=0;i<5;i++){
        cout << "Posicion " << i+1 << ": " << miArray[i] << endl ; //Muestra los valores del array segun posición.
    }
    do {
        cout << "1. Modificar un valor." << endl;
        cout << "2. Mostrar valor más bajo." << endl;
        cout << "3. Mostar valor medio." << endl;
        cout << "0. Finalizar." << endl;

        cin>>control;
        switch (control) {
            case 0:
                cout << "El programa finaliza." <<endl;
                break;
            case 1:
                do{
                    cout << "Posición a modificar: " << endl;
                    cin >> posicionModificar;
                }while(posicionModificar<0 || posicionModificar>    5);

                cout << "Nuevo valor de la posición " << posicionModificar << ": ";
                cin >> nuevoValor;
                miArray[posicionModificar-1]=nuevoValor;
                for (int i=0;i<5;i++){
                    cout << "Posicion " << i+1 << ": " << miArray[i] << endl ; //Muestra los valores del array segun posición.
                }
                break;
            case 2:

                for(int i=0;i<5;i++){//Recorremos le array
                    if(miArray[i]<masBajo){//Si el valor de la posicion correspondiente es mas bajo que el valor anterior se sustituye
                        masBajo=miArray[i];//Se asigna el valor mas bajo encontrado
                    }
                }
                cout<< "El valor más bajo es: " << masBajo << endl;//Muestra por pantalla el valor más bajo
                break;
            case 3:

                for(int i=0;i<5;i++){//Recorremos le array
                    media+=miArray[i];
                }
                media/=5;
                cout<< "La media es " << media << endl;
                media=0;
                break;

            default:
                cout <<"Valor introducido incorrecto." << endl;
                break;
        }
    }while(control!=0);


    return 0;
}
