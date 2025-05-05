#include <iostream>
using namespace std;

// Función que calcula el nuevo salario mensual con aumento según la antigüedad
void calcularSalario(float salarioAnual, int antiguedad, float &nuevoSalario) {
    float porcentajeAumento;

    if (antiguedad >= 0 && antiguedad < 5) {
        porcentajeAumento = 0.06;
    } else if (antiguedad >= 5 && antiguedad <= 10) {
        porcentajeAumento = 0.08;
    } else {
        porcentajeAumento = 0.10;
    }

    float salarioAumentado = salarioAnual + (salarioAnual * porcentajeAumento);
    nuevoSalario = salarioAumentado / 12;
}

int main() {
    float salarioAnual, nuevoSalario;
    int antiguedad;

    // Solicitud de datos al usuario
    cout << "Calculadora de Aumento de Salario" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Ingrese el salario anual actual del empleado: ";
    cin >> salarioAnual;
    
    cout << "Ingrese la antiguedad del empleado en anios: ";
    cin >> antiguedad;

    // Cálculo del nuevo salario mensual
    calcularSalario(salarioAnual, antiguedad, nuevoSalario);

    // Resultados
    cout << "----------------------------------------------" << endl;
    cout << "Salario mensual actual: $" << salarioAnual / 12 << endl;
    cout << "Salario mensual para el proximo anio (con aumento): $" << nuevoSalario << endl;

    system("pause");
    return 0;
}
