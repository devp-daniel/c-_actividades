#include <iostream>
#include <conio.h>
#include <string>
#include <limits>
#include <vector>

using namespace std;

int main() {
    char continuar = 'S';
    cout << "Modulo de Empleados" << endl;
    
    while (continuar == 'S' || continuar == 's') {
        int x, opcion;
        
        cout << "\nCuantos productos desea calcular?: ";
        cin >> x;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        vector<string> productos(x);
        vector<int> cantidades(x);
        vector<double> valoresUnitarios(x);
        vector<double> descuentos(x);
        
        for (int i = 0; i < x; i++) {
            cout << "\nProducto " << i+1 << ":\n";
            cout << "Nombre: ";
            getline(cin, productos[i]);
            
            cout << "Cantidad: ";
            cin >> cantidades[i];
            
            cout << "Valor unitario: ";
            cin >> valoresUnitarios[i];
            
            cout << "Porcentaje de descuento (0-100): ";
            cin >> descuentos[i];
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        system("cls");
        
        cout << "Detalle de productos ingresados:\n";
        for (int i = 0; i < x; i++) {
            cout << "Producto " << i+1 << ": " << productos[i] 
                 << ", Cantidad: " << cantidades[i] 
                 << ", Valor unitario: $" << valoresUnitarios[i] 
                 << ", Descuento: " << descuentos[i] << "%\n";
        }

        do {
            cout << "\nQue desea hacer?\n"
                 << "1. Calcular el valor total de cada producto (sin descuento)\n"
                 << "2. Calcular el valor total de cada producto (con descuento)\n"
                 << "3. Ingresar nueva lista de productos\n"
                 << "4. Salir\n"
                 << "Opcion: ";
            cin >> opcion;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            switch(opcion) {
                case 1:
                    cout << "\nValores totales sin descuento:\n";
                    for (int i = 0; i < x; i++) {
                        double total = cantidades[i] * valoresUnitarios[i];
                        cout << productos[i] << ": $" << total << endl;
                    }
                    break;
                case 2:
                    cout << "\nValores totales con descuento:\n";
                    for (int i = 0; i < x; i++) {
                        double subtotal = cantidades[i] * valoresUnitarios[i];
                        double desc = subtotal * (descuentos[i]/100);
                        double total = subtotal - desc;
                        cout << productos[i] << ": $" << total 
                             << " (Descuento: $" << desc << ")\n";
                    }
                    break;
                case 3:
                    break;
                case 4:
                    cout << "Gracias por usar el modulo de empleados.\n";
                    getch();
                    return 0;
                default:
                    cout << "Opcion no valida. Intente de nuevo.\n";
            }
        } while (opcion != 3);

        system("cls");
    }
    
    cout << "Gracias por usar el modulo de empleados.\n";
    getch();
    return 0;
}