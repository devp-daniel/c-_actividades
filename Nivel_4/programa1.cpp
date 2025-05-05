#include <iostream>
using namespace std;

// Función para calcular el costo de envío
float calcularCosto(float peso) {
    float costo = 0;
    
    // Validar el peso y calcular el costo según las tarifas

    if (peso > 0 && peso <= 10) {
        costo = 28000;
    } 
    else if (peso > 10 && peso < 30) {
        costo = 34000 + (peso - 10) * 1600;
    } 
    else if (peso >= 30 && peso < 50) {
        costo = 34000;
    }
    else if (peso >= 50) {
        costo = 60000 + (peso - 50) * 1900;
    }
    
    return costo;
}

int main() {
    float peso;
    
    cout << "Calculadora de Costo de Envio" << endl;
    cout << "----------------------------" << endl;
    
    // Solicitar el peso del paquete
    cout << "Ingrese el peso del paquete en kilogramos: ";
    cin >> peso;
    
    // Calcular y mostrar el costo
    float costo = calcularCosto(peso);
    
    if (costo > 0) {
        cout << "El costo total del envio es: $" << costo << endl;
    } else {
        cout << "Peso no valido." << endl;
    }
    
    system("pause");
    return 0;
}
