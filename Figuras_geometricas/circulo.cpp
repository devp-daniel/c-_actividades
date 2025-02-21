#include <iostream>

using namespace std;

int main()
{
    
    float radio, area, perimetro;
    
    cout << "Programa que calcula el area de un circulo" << endl << endl;
    cout << "Introduce el radio del circulo: ";
    cin >> radio;
    area = 3.1416 * radio * radio;
    cout << "El area del circulo es: " << area << endl;
    cout << endl;
    cout << "Daniel Alba" << endl << endl;
    
    system("pause");
    
    return EXIT_SUCCESS;

}