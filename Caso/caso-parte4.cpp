#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variables
    char registro;
    string referencia, descripcion;
    int talla, costo;

    // Ingreso de datos
    cout << "Desea registrar un Zapato s/n: ";
    cin >> registro;

    // Ciclo While
    while (registro == 's') {
        cout << "Digite la referencia: ";
        cin >> referencia;
        cout << "Digite la descripcion: ";
        cin.ignore();
        getline(cin, descripcion);
        cout << "Digite la talla: ";
        cin >> talla;
        cout << "Costo: ";
        cin >> costo;
        cout << " " << endl;

        cout << "Desea registrar OTRO Zapato s/n: ";
        cin >> registro;
        cout << " " << endl;
    }

    cout << "FIN DE LA APLICACION" << endl;

    cout << "Daniel Alba" << endl;

    system("pause");

    return EXIT_SUCCESS;
}