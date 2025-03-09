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
    cout << "Desea registrar un Zapato s/n: " << endl;
    cin >> registro;

    // Ciclo While
    while (registro == 's') {
        cout << "Digite la referencia: " << endl;
        cin >> referencia;
        cout << "Digite la descripcion: " << endl;
        cin.ignore();
        getline(cin, descripcion);
        cout << "Digite la talla: " << endl;
        cin >> talla;
        cout << "Costo: " << endl;
        cin >> costo;

        cout << "Desea registrar OTRO Zapato s/n: " << endl;
        cin >> registro;
    }

    cout << "FIN DE LA APLICACION" << endl;

    system("pause");

    return EXIT_SUCCESS;
}