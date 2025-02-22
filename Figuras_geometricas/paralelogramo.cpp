#include <iostream>

using namespace std;

int main()

{
    // Variables
    float base, altura, area;

    // Ingreso de datos
    cout << "Programa que calcula el area de un paralelogramo" << endl << endl;
    cout << "Introduce la base del paralelogramo: ";
    cin >> base;
    cout << "Introduce la altura del paralelogramo: ";
    cin >> altura;

    system("cls");

    // Algoritmo
    area = base * altura;

    // Salida de datos
    cout << "El area del paralelogramo es: " << area << endl;
    cout << endl;
    cout << "Daniel Alba" << endl << endl;
    
    system("pause");

    return EXIT_SUCCESS;

}