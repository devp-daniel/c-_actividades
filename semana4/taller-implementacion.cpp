#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i = 1;
    int cantidad;
    float nota, promedio;

    cout << "Digite la cantidad de notas: ";
    cin >> cantidad;
    cout << " " << endl;

    cout << "Por favor digite " << cantidad <<" notas:" << endl;

    while (i <= cantidad)
    {
        cout << "Digite la nota " << i << ": ";
        cin >> nota;
        promedio += nota;
        i++;
    }

    promedio = promedio / cantidad;

    cout << " " << endl;
    cout << "El promedio de las notas es: " << promedio << endl;

    system("pause");

    return 0;
}