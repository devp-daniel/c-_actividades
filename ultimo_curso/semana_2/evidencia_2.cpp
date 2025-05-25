#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Clase para la calculadora
class Calculadora {
private:
    double a, b, c; // Variables para los números a operar
    bool tieneTresValores; // Verificador para saber si se usan 2 o 3 números en la operación

    // Conversión de cadenas de texto char a números
    double charANumero(char ch) {
        return ch - '0';
    }

public:
    
    // Constructor inicial en 0
    Calculadora() {
        a = b = c = 0;
        tieneTresValores = false;
    }

    // Constructor con dos números
    Calculadora(double x, double y) {
        a = x;
        b = y;
        tieneTresValores = false;
    }

    // Constructor con tres números
    Calculadora(double x, double y, double z) {
        a = x;
        b = y;
        c = z;
        tieneTresValores = true;
    }

    // Sobrecarga de métodos int, double y char
    // Operaciones con int (2 y 3 numeros)
    int suma(int x, int y) { return x + y; }
    int suma(int x, int y, int z) { return x + y + z; }

    int resta(int x, int y) { return x - y; }
    int resta(int x, int y, int z) { return x - y - z; }

    int multiplicacion(int x, int y) { return x * y; }
    int multiplicacion(int x, int y, int z) { return x * y * z; }

    double division(int x, int y) { return (double)x / y; }
    double division(int x, int y, int z) { return (double)x / y / z; }

    double potenciacion(int base, int exponente) {
        return pow(base, exponente);
    }

    // Operaciones con double (2 y 3 numeros)
    double suma(double x, double y) { return x + y; }
    double suma(double x, double y, double z) { return x + y + z; }

    double resta(double x, double y) { return x - y; }
    double resta(double x, double y, double z) { return x - y - z; }

    double multiplicacion(double x, double y) { return x * y; }
    double multiplicacion(double x, double y, double z) { return x * y * z; }

    double division(double x, double y) { return x / y; }
    double division(double x, double y, double z) { return x / y / z; }

    double potenciacion(double base, double exponente) {
        return pow(base, exponente);
    }

    // Operaciones con caracteres char (2 y 3 numeros)
    double suma(char x, char y) {
        return charANumero(x) + charANumero(y);
    }

    double suma(char x, char y, char z) {
        return charANumero(x) + charANumero(y) + charANumero(z);
    }
    
    double resta(char x, char y) {
        return charANumero(x) - charANumero(y);
    }
    
    double resta(char x, char y, char z) {
        return charANumero(x) - charANumero(y) - charANumero(z);
    }

    double multiplicacion(char x, char y) {
        return charANumero(x) * charANumero(y);
    }

    double multiplicacion(char x, char y, char z) {
        return charANumero(x) * charANumero(y) * charANumero(z);
    }
    
    double division(char x, char y) {
        return charANumero(x) / charANumero(y);
    }
    
    double division(char x, char y, char z) {
        return charANumero(x) / charANumero(y) / charANumero(z);
    }

    double potenciacion(char base, char exponente) {
        return pow(charANumero(base), charANumero(exponente));
    }    
    

    // Operacion de variables y muestra de resultados
    void mostrarResultados() {
        cout << "Suma: " << (tieneTresValores ? suma(a, b, c) : suma(a, b)) << endl;
        cout << "Resta: " << (tieneTresValores ? resta(a, b, c) : resta(a, b)) << endl;
        cout << "Multiplicacion: " << (tieneTresValores ? multiplicacion(a, b, c) : multiplicacion(a, b)) << endl;
        cout << "Division: " << (tieneTresValores ? division(a, b, c) : division(a, b)) << endl;
        cout << "Potenciacion: " << potenciacion(a, b) << endl;
    }
};

// Función principal
int main() {
    // Calculadora int y double para 2 numeros
    Calculadora calc1(4, 2);
    cout << "Resultados con 2 valores (int/double):" << endl;
    calc1.mostrarResultados();

    // Calculadora int y double para 3 numeros
    Calculadora calc2(2, 3, 2);
    cout << "\nResultados con 3 valores (int/double):" << endl;
    calc2.mostrarResultados();

    // Calculadora char para 2 y 3 numeros
    Calculadora calc3;
    cout << "\nOperaciones con char a numero:" << endl;
    cout << "Suma (char): " << calc3.suma('1', '2', '3') << endl;
    cout << "Multiplicacion (char): " << calc3.multiplicacion('2', '5') << endl;
    cout << "Resta (char): " << calc3.resta('9', '4') << endl;
    cout << "Division (char): " << calc3.division('8', '2') << endl;
    cout << "Potenciacion (char): " << calc3.potenciacion('2', '3') << endl;

    return 0;
}
