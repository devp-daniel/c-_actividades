#include <iostream>
#include <conio.h>
#include <string>
#include <limits>

using namespace std;

int main() {
    char continuar = 'S';
    
    cout << "Modulo Clientes" << endl;
    
    while (continuar == 'S' || continuar == 's') {
        string *producto;
        int x;
        
        cout << "\nCuantos productos desea ingresar?: ";
        cin >> x;
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        producto = new string[x];

        for (int i = 0; i < x; i++) {
            cout << "Ingrese el producto " << i+1 << ": ";
            getline(cin, producto[i]);
        }

        system("cls");

        cout << "Los productos ingresados son:\n";
        for (int i = 0; i < x; i++) {
            cout << producto[i] << endl;
        }

        cout << "\nDesea generar otra lista de productos? (S/N): ";
        cin >> continuar;
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        delete[] producto;
        system("cls");
    }
    
    cout << "Gracias por usar el modulo de clientes." << endl;
    getch();
    return 0;
}