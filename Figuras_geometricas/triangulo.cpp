#include <iostream>

using namespace std;

int main() 
{
    // Variables
    float base, altura, area;

    // Ingreso de datos
    cout << "Programa que calcula el area de un triangulo" << endl << endl;
    cout << "Introduce la base del triangulo: ";
    cin >> base;
    cout << "Introduce la altura del triangulo: ";
    cin >> altura;

    system("cls");

    // Algoritmo
    area = (base * altura) / 2;

    // Salida de datos
    cout << "El area del triangulo es: " << area << endl;
    cout << endl;
    cout << "Daniel Alba" << endl << endl;

    system("pause");

    return EXIT_SUCCESS;
}