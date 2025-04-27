#include <iostream>
#include <string>

using namespace std;

// Función para mostrar la nómina

void mostrarNomina(string nombre, float salario, float extras, float prestamo, float ahorro, float seguro) {
    float total_extras = extras * 10;
    float total = salario + total_extras - prestamo - ahorro - seguro;
    
    cout << "------------------------------------------------------------" << endl;
    cout << "Nomina de " << nombre << endl;
    cout << "Salario base: $" << salario << endl;
    cout << "Horas extras (" << extras << " horas): $" << total_extras << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "Descuentos:" << endl;
    cout << "Prestamo: $" << prestamo << endl;
    cout << "Ahorro: $" << ahorro << endl;
    cout << "Seguro: $" << seguro << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "Total a pagar: $" << total << endl;
}

int main() {
    string nombre, cedula, cargo;
    float salario, extras, prestamo, ahorro, seguro;
    char otro;
    
    do {
        cout << "Software de Nomina" << endl;
        cout << "--------------------------------" << endl;
        
        // Datos básicos del empleado
        cout << "Nombre del empleado: ";
        getline(cin, nombre);
        cout << "Cedula del empleado: ";
        getline(cin, cedula);
        cout << "Cargo del empleado: ";
        getline(cin, cargo);
        cout << "Salario base: $";
        cin >> salario;
        
        // Datos adicionales del empleado
        cout << "--------------------------------" << endl;
        cout << "Informacion adicional:" << endl;
        cout << "Horas extras trabajadas ($10): ";
        cin >> extras;
        cout << "Descuento por prestamo: $";
        cin >> prestamo;
        cout << "Monto hacia el ahorro voluntario: $";
        cin >> ahorro;
        cout << "Decuento por seguridad social: $";
        cin >> seguro;
        
        // Mostrar nómina
        mostrarNomina(nombre, salario, extras, prestamo, ahorro, seguro);
        
        // Preguntar por otro empleado
        cout << "Desea calcular otra nomina? (s/n): ";
        cin >> otro;
        cin.ignore();
    } while(otro == 's' || otro == 'S');
    
    cout << "Gracias por usar el software de nomina." << endl;
    return 0;
}