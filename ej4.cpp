#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    string matriz[3][4];//Definición de la matriz
    string nombre;//String para introducir por consola los parámetros
    int control;
    int posicion;//Posición a elegir puntuación
    for(int i=0;i<3;i++){//Mover por filas con el tamaño max como limite
        for(int j=0;j<4;j++){//Mover por columnas con el tamaño max como limite
            cout << "Introduce valor: ";
            cin >> nombre; //Solicita el nombre
            matriz[i][j]=nombre;//Asigna el valor recibido a la posición actual de la matriz
        }
    }
    for(int j=0;j<4;j++){//Mover por filas con el tamaño max como limite
        cout << endl;
        for(int i=0;i<3;i++){//Mover por columnas con el tamaño max como limite
            cout << matriz[i][j] << " ";//Muestra por pantalla los valores introducidos
        }
    }

    do {
        cout << "1. Mostrar el nombre de todas las asignaturas." << endl;
        cout << "2. Mostrar las puntuaciones de una asignatura." << endl;
        cout << "3. Mostar la puntuación media de una asignatura." << endl;
        cout << "4. Mostar la puntuación más alta de una asignatura." << endl;
        cout << "0. Salir." << endl;

        cin>>control;
        switch (control) {
            case 0:
                cout << "El programa finaliza." <<endl;
                break;
            case 1:
                for(int i=0;i<3;i++){//Recorre las columas
                    cout << matriz[i][0] << " ";//Muestra el nombre de las asignaturas
                }
                cout << endl;
                break;
            case 2:
                do{
                    cout << "Posición asignatura a elegir: " << endl;
                    cin >> posicion;
                }while(posicion<1 || posicion>3);
                for(int i=1;i<4;i++){//Recorre las filas con la posicion elegida
                    cout << matriz[posicion-1][i] << " ";//Muestra la puntuación de la asginatura elegida.
                }
                break;
                cout << endl;
            default:
                cout <<"Valor introducido incorrecto." << endl;
                break;
        }
    }while(control!=0);

    return 0;
}
