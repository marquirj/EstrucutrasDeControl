#include <iostream>

using namespace std;

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
