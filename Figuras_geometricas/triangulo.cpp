#include <iostream>

using namespace std;

int main() {

    float base, altura, area;

    cout << "Programa que calcula el area de un triangulo" << endl << endl;
    cout << "Introduce la base del triangulo: ";
    cin >> base;

    cout << "Introduce la altura del triangulo: ";
    cin >> altura;

    area = (base * altura) / 2;

    cout << "El area del triangulo es: " << area << endl;
    cout << endl;
    cout << "Daniel Alba" << endl << endl;

    system("pause");

    return EXIT_SUCCESS;
}