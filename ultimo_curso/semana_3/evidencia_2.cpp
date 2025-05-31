#include <iostream>
#include <string>
#include <iomanip> // Aplicación de fixed y setprecision
using namespace std;

int main() {
    int cantidadVendedores;

    // Solicita al usuario la cantidad de vendedores que se van a ingresar
    cout << "Ingrese la cantidad de vendedores: ";
    cin >> cantidadVendedores;
    cin.ignore();

    // Arreglo para almacenar los nombres de los vendedores
    string nombres[cantidadVendedores];

    // Arreglo para guardar las ventas de cada vendedor por 4 meses
    double ventas[cantidadVendedores][4];

    // Arreglo para guardar el promedio de ventas de cada vendedor
    double promedios[cantidadVendedores];

    // Variable para acumular el total de los promedios y luego calcular el promedio general
    double sumaGeneral = 0.0;

    // Bucle for para obtener los datos de cada vendedor
    for (int i = 0; i < cantidadVendedores; i++) {
        // Solicita el nombre del vendedor
        cout << "\nIngrese el nombre del vendedor #" << (i + 1) << ": ";
        getline(cin, nombres[i]);

        double sumaVentas = 0.0;

        // Almacenar las ventas de los 4 meses
        for (int mes = 0; mes < 4; mes++) {
            cout << "Ingrese las ventas del mes " << (mes + 1) << " para " << nombres[i] << ": $";
            cin >> ventas[i][mes];         
            sumaVentas += ventas[i][mes];
        }

        cin.ignore();

        // Calcula el promedio de ventas del vendedor
        promedios[i] = sumaVentas / 4.0;

        // Acumula el promedio en la suma general
        sumaGeneral += promedios[i];
    }

    // Muestra el informe de promedio de ventas por cada vendedor
    cout << "\n---- Informe de Promedios por Vendedor ----\n";
    for (int i = 0; i < cantidadVendedores; i++) {
        cout << "Vendedor: " << nombres[i] << " - Promedio de ventas: $"
             << fixed << setprecision(2) << promedios[i] << endl; // Uso de fixed y setprecision para corregir la notación cientifica de cout
    }

    // Calcula y muestra el promedio general de todos los vendedores
    double promedioGeneral = sumaGeneral / cantidadVendedores;
    cout << "\nPromedio general de todos los vendedores: $"
         << fixed << setprecision(2) << promedioGeneral << endl;

    system("pause");
    return 0;
}
