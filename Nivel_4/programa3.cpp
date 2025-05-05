#include <iostream>
using namespace std;

// Función para pedir al usuario la cantidad de elementos del arreglo
int pedirCantidad() {
    int cantidad;
    cout << "Programa de aplicacion de arreglos como parametros" << endl;
    cout << "Ingrese la cantidad de elementos del arreglo: ";
    cin >> cantidad;
    return cantidad;
}

// Función para ingresar los elementos del arreglo
void ingresarElementos(int arreglo[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese el elemento numero " << i + 1 << ": ";
        cin >> arreglo[i];
    }
}

// Función para mostrar los elementos del arreglo
void mostrarArreglo(int arreglo[], int cantidad) {
    cout << "Elementos del arreglo: ";
    for (int i = 0; i < cantidad; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

// Función para elevar al cubo cada elemento del arreglo
void elevarAlCubo(int arreglo[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        arreglo[i] = arreglo[i] * arreglo[i] * arreglo[i];
    }
}

int main() {
    int cantidad = pedirCantidad();
    int arreglo[50];

    ingresarElementos(arreglo, cantidad);

    cout << "Arreglo inicial:" << endl;
    mostrarArreglo(arreglo, cantidad);

    elevarAlCubo(arreglo, cantidad);

    cout << "Arreglo con los elementos elevados al cubo:" << endl;
    mostrarArreglo(arreglo, cantidad);

    system("pause");
    return 0;
}
