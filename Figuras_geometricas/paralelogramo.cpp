#include <iostream>

using namespace std;

int main()

{
    float base, altura, area;

    cout << "Programa que calcula el area de un paralelogramo" << endl << endl;
    cout << "Introduce la base del paralelogramo: ";
    cin >> base;
    cout << "Introduce la altura del paralelogramo: ";
    cin >> altura;
    area = base * altura;
    cout << "El area del paralelogramo es: " << area << endl;
    cout << endl;
    cout << "Daniel Alba" << endl << endl;
    
    system("pause");

    return EXIT_SUCCESS;

}