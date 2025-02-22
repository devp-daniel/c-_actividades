#include <iostream>

using namespace std;

int main ()
{
    // Variables
    float base_menor, base_mayor, altura, area;

    // Ingreso de datos
    cout << "Programa que calcula el area de un trapecio" << endl << endl;
    cout << "Introduce la base menor: ";
    cin >> base_menor;
    cout << "Introduce la base mayor: ";
    cin >> base_mayor;
    cout << "Introduce la altura: ";
    cin >> altura;

    system("cls");

    // Algoritmo
    area = (base_menor + base_mayor) * altura / 2;

    // Salida de datos
    cout << "El area del trapecio es: " << area << endl << endl;
    cout << endl;
    cout << "Daniel Alba" << endl << endl;

    system("pause");

    return EXIT_SUCCESS;
}