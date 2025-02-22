#include <iostream>

using namespace std;

int main()
{
    // Variables
    float radio, area, perimetro;
    
    // Ingreso de datos
    cout << "Programa que calcula el area de un circulo" << endl << endl;
    cout << "Introduce el radio del circulo: ";
    cin >> radio;

    system("cls");

    // Algoritmo
    area = 3.1416 * radio * radio;

    // Salida de datos
    cout << "El area del circulo es: " << area << endl;
    cout << endl;
    cout << "Daniel Alba" << endl << endl;
    
    system("pause");
    
    return EXIT_SUCCESS;

}