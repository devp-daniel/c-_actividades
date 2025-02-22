#include <iostream>

using namespace std;

int main ()
{
    // Variables
    float base, altura, area;

    // Ingreso de datos
    cout << "Programa que calcula el area de un rectangulo" << endl << endl;
    cout << "Introduce la base del rectangulo: ";
    cin >> base;
    cout << "Introduce la altura del rectangulo: ";
    cin >> altura;

    system("cls");

    // Algoritmo
    area = base * altura;

    // Salida de datos
    cout << "El area del rectangulo es: " << area << endl;
    cout << endl;
    cout << "Daniel Alba" << endl << endl;

    system("pause");

    return EXIT_SUCCESS;
}