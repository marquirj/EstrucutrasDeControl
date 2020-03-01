#include <iostream>

using namespace std;
/*
Ejercicio01.cpp: Crea un programa que con un Do/While pida por consola un número hasta que se introduzca un número superior a 7.
Cuando el usuario introduzca un valor superior a 7 muestra por consola los números del 0 al número introducido (ambos incluidos) utilizando la estructura WHILE.
 Luego utilizando la estructura FOR muestra por consola los números del número introducido al 0 (ambos incluidos).*/
int main(int argc, char *argv[]){
    int numeroSolicitado=0;//Valor que pide al usuario un número que debe ser mayor que 7.
    int contador=0;//Entero para recorrer, como dice que empiece en 0 se inicializa a 0.
    do{
        cout<<"Introduce un número superior a 7: ";//Muestra por pantalla la frase entre paréntesis.
        cin >> numeroSolicitado;//Pide por pantalla un número
    }while(numeroSolicitado<7);//Si el número es menor que 7 se vuelve a repetir la petición, si es mayor termina la ejecución del do/while.
    while(contador <= numeroSolicitado){
        cout << contador << " "; //Muestras los números desde el valor de contador hasta el valor introducido en numeroSolitado.
        contador++; //Aumenta el valor de contador en 1.
    }
    cout << "\n";//Salto de linea;
    for(int i=numeroSolicitado; i>=0; i--){//Recorre los valores desde el número contenido en numeroSolitado hasta 0.
        cout << i << " ";
    }
    cout << "\n";//Salto de linea;

    return 0;
}
