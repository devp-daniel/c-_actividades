#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 1; 

    // Opciones de la tabla
    while (n <= 9)
    {
        cout << "Tabla del " << n << endl;
        n++;
    }

    // Seleccion tabla de multiplicar

    int i;
    cout << "" << endl;
    cout << "Seleccione una tabla de multiplicar: ";
    cin >> i;

    // Tabla de multiplicar

    for (n=1; n<=9; n++)
    {
        cout << i << " x " << n << " = " << i*n << endl;
    }

    cout << "" << endl;
    cout << "Daniel Alba" << endl;

    system("pause");

    return EXIT_SUCCESS;
}