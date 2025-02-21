#include <iostream>

using namespace std;

int main ()
{
    float base, altura, area;

    cout << "Programa que calcula el area de un rectangulo" << endl << endl;
    cout << "Introduce la base del rectangulo: ";
    cin >> base;
    cout << "Introduce la altura del rectangulo: ";
    cin >> altura;
    area = base * altura;
    cout << "El area del rectangulo es: " << area << endl;
    cout << endl;
    cout << "Daniel Alba" << endl << endl;

    system("pause");

    return EXIT_SUCCESS;
}