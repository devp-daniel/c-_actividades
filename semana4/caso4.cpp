#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float nota1, nota2, nota3, nota4, promedio;
    int i = 1;

    while (i == 1)
    {
        cout << "Clase de Tecnologia" << endl;
        cout << " " << endl;
        cout << "Digite la primera nota: ";
        cin >> nota1;
        cout << "Digite la segunda nota: ";
        cin >> nota2;
        cout << "Digite la tercera nota: ";
        cin >> nota3;
        cout << "Digite la cuarta nota: ";
        cin >> nota4;
        cout << " " << endl;

        promedio = (nota1 + nota2 + nota3 + nota4) / 4.0;

        cout << "El promedio de las notas es: " << promedio << endl;

        if (promedio < 3.0)
        {
            cout << "No aprobado" << endl;
        }
        else if (promedio >= 3.0 && promedio <= 3.5)
        {
            cout << "En este momento no tiene aprobada la materia de tecnología, pero tiene la oportunidad de recuperar." << endl;
        }
        else if (promedio > 3.5 && promedio <= 5.0)
        {
            cout << "Aprobado" << endl;
        }

        cout << " " << endl;
        cout << "Desea digitar las notas de otro estudiante? (1: Si, 0: No): ";
        cin >> i;
    }

    cout << " " << endl;
    cout << "Gracias por usar la herramienta!" << endl;
    cout << " " << endl;
    cout << "Daniel Alba" << endl;

    system("pause");

    return 0;
}