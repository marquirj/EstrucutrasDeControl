#include <iostream>

using namespace std;
/*
2. Ejercicio02.cpp: Crea un programa que mantenga la cantidad de café y leche en una taza inicialmente vacía.
Mediante un SWITCH, el programa debe mostrar el siguiente mensaje al usuario:
Introduzca la operación a realizar del siguiente menú de opciones:
1- Añadir café a taza.
2- Añadir leche a la taza.
3- Beber de la taza
0-Finalizar

    a. Si el usuario introduce un 1, el programa ha de pedir un número decimal al usuario y sumarlo a la cantidad de café que tiene la taza.
    b. Si el usuario introduce un 2, el programa ha de pedir un número decimal al usuario y sumarlo de la cantidad de leche que tiene la taza.
    c. Si el usuario introduce un 3, el programa ha de pedir un número al usuario y dividirlo entre 2.
    El resultado ser restará de la cantidad de café y la cantidad de leche que tiene la taza. Si la cantidad de leche llega a 0 pero aún queda café,
    resta el resto de leche de la cantidad de café. Si la cantidad de café llega a 0 pero aún queda leche, resta el resto de café de la cantidad de leche.
    En el caso que no quede suficiente café ni leche, ambos quedaran a 0.
    d. Si el usuario introduce un 0, se ha de mostrar un mensaje de despedida y finalizar el programa.

Cada vez que se realice la operación 1, 2, 3  se ha de mostrar por pantalla la cantidad de café y leche que tiene la taza.
Controla mediante un DO WHILE que una vez realizada la operación seleccionada  se vuelva a mostrar el menú de operacione
s excepto si el usuario ha introducido un 0.
Si se introduce un valor menor a 0, indica que se ha introducido un valor incorrecto y vuelve a mostrar el menú.
*/
int main(int argc, char *argv[]){
    float cantidadCafe=0, cantidadLeche=0;
    int control=-1;//Valor a introducir para seleccionar una opción. Si es 0 finalizará;
    float valorPedido;
    do{
        cout << "1. Añadir cafe a la taza." << endl;
        cout << "2. Añadir leche a la taza." << endl;
        cout << "3. Beber de la taza." << endl;
        cout << "0. Finalizar." << endl;
        cin>>control;
        switch (control) {
            case 0:
                cout << "El programa finaliza." <<endl;
                break;
            case 1:
                cout << "Añadir cafe(numero entero o decimal): ";
                cin >> valorPedido;//Pide el valor a añadir
                cantidadCafe+= valorPedido; //Suma el valor recibido al que ya se tenía.
                cout << "Cantidad de cafe disponible: "  << cantidadCafe << endl;//Muestra la cantidad de cafe
                cout << "Cantidad de leche disponible: "  << cantidadLeche << endl;//Muestra la cantidad de leche
                break;
            case 2:
                cout << "Añadir leche(numero entero o decimal): ";
                cin >> valorPedido;//Pide el valor a añadir
                cantidadLeche+= valorPedido; //Suma el valor recibido al que ya se tenía.
                cout << "Cantidad de cafe disponible: "  << cantidadCafe << endl;//Muestra la cantidad de cafe
                cout << "Cantidad de leche disponible: "  << cantidadLeche << endl;//Muestra la cantidad de leche
                break;
            case 3:
                cout << "Beber de la taza(numero entero o decimal): ";
                cin >> valorPedido;//Pide el valor a añadir
                valorPedido= valorPedido/2;//Divide ese valor entre dos
                cantidadCafe-= valorPedido; //Resta el valor recibido al que ya se tenía.
                cantidadLeche-= valorPedido;//Resta el valor recibido al que ya se tenía.
                if(cantidadLeche<0 && cantidadCafe>0){//Si la leche es menor que 0 y aun queda cafe
                    cantidadCafe+=cantidadLeche; // Resta esa cantidad al cafe
                    cantidadLeche=0; // Y se pone a 0 la leche
                    if(cantidadCafe<0) cantidadCafe=0; //Si ahora es menor que 0 el cafe tambien se pone a 0 el cafe
                }else if(cantidadCafe<0 && cantidadLeche>0){ //Si el cafe es menor que 0 y aun queda leche
                    cantidadLeche+=cantidadCafe;
                    cantidadCafe=0;// Y se pone a 0 el cafe
                    if(cantidadLeche<0) cantidadLeche=0;//Si ahora es menor que 0 la leche tambien se pone a 0 la leche
                }else if(cantidadLeche <0 && cantidadCafe<0){
                    cantidadCafe=0;
                    cantidadLeche=0;
                }
                cout << "Cantidad de cafe disponible: "  << cantidadCafe << endl;//Muestra la cantidad de cafe
                cout << "Cantidad de leche disponible: "  << cantidadLeche << endl;//Muestra la cantidad de leche
                break;
            default:
                cout << "Valor incorrecto.";
                break;
        }
    }while (control!=0);

    return 0;
}
