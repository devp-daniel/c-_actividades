#include <iostream>     
#include <fstream>      // Libreria para manejo de archivos (log.txt)
#include <cmath>        
#include <limits>

using namespace std;

// Clase NumeroImaginario
class NumeroImaginario {
private:
    double parteEntera;        // Atributo tipo double para la parte entera
    double parteImaginaria;  // Atributo tipo double para la parte imaginaria

public:
    // Constructor por defecto
    NumeroImaginario() : parteEntera(0), parteImaginaria(0) {}

    // Constructor parametrizado
    NumeroImaginario(double e, double i) : parteEntera(e), parteImaginaria(i) {}

    // Métodos de acceso
    double getParteReal() const { return parteEntera; }
    double getParteImaginaria() const { return parteImaginaria; }

    // Métodos modificador
    void setParteReal(double e) { parteEntera = e; }
    void setParteImaginaria(double i) { parteImaginaria = i; }

    // Sobrecarga del operador para sumar dos numeros imaginarios
    NumeroImaginario operator+(const NumeroImaginario& otro) const {
        return NumeroImaginario(parteEntera + otro.parteEntera, parteImaginaria + otro.parteImaginaria);
    }

    // Sobrecarga del operador para restar dos numeros imaginarios
    NumeroImaginario operator-(const NumeroImaginario& otro) const {
        return NumeroImaginario(parteEntera - otro.parteEntera, parteImaginaria - otro.parteImaginaria);
    }

    // Sobrecarga del operador para multiplicar dos numeros imaginarios
    NumeroImaginario operator*(const NumeroImaginario& otro) const {

        double ent = parteEntera * otro.parteEntera - parteImaginaria * otro.parteImaginaria;
        double imag = parteEntera * otro.parteImaginaria + parteImaginaria * otro.parteEntera;
        return NumeroImaginario(ent, imag);
    }

    // Sobrecarga del operador para dividir dos numeros imaginarios
    NumeroImaginario operator/(const NumeroImaginario& otro) const {
      double denominador = otro.parteEntera * otro.parteEntera + otro.parteImaginaria * otro.parteImaginaria;
      double ent = (parteEntera * otro.parteEntera + parteImaginaria * otro.parteImaginaria) / denominador;
      double imag = (parteImaginaria * otro.parteEntera - parteEntera * otro.parteImaginaria) / denominador;
      return NumeroImaginario(ent, imag);
  }

    // Metodo para representar el numero en formato de texto
    string toString() const {
        string signo = (parteImaginaria >= 0) ? "+" : "-";
        return to_string(parteEntera) + " " + signo + " " + to_string(fabs(parteImaginaria)) + "i";
    }
};

// Funcion para registrar las operaciones en un archivo de texto (log.txt)
void registrarOperacion(const string& operacion) {
    ofstream archivo("log.txt", ios::app);  // Abre el archivo en modo agregar
    if (archivo.is_open()) {
        archivo << operacion << endl;       // Escribe la operacion en el archivo
        archivo.close();                    // Cierra el archivo
    }
}

// Funcion para limpiar el buffer de entrada en caso de error
void limpiarBuffer() {
    cin.clear(); 
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Funcion principal del programa
int main() {
    int opcion;
    char continuar;

    // Bucle menu de opciones
    do {
        cout << "\n----------- Calculadora de Numeros Imaginarios -----------\n";
        cout << "1. Suma\n";
        cout << "2. Resta\n";
        cout << "3. Multiplicacion\n";
        cout << "4. Division\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Verificación de la opcion ingresada sea valida
        if (opcion < 1 || opcion > 5 || cin.fail()) {
            cout << "Opcion invalida. Intente de nuevo.\n";
            limpiarBuffer(); // Limpia la entrada erronea
            continue;
        }

        if (opcion == 5) {
            cout << "Saliendo del programa. Hasta luego!\n";
            break;
        }

        // Solicita datos de los dos numeros
        double e1, i1, e2, i2;
        cout << "Ingrese la parte real del primer numero: ";
        cin >> e1;
        cout << "Ingrese la parte imaginaria del primer numero: ";
        cin >> i1;

        cout << "Ingrese la parte real del segundo numero: ";
        cin >> e2;
        cout << "Ingrese la parte imaginaria del segundo numero: ";
        cin >> i2;

        // Crea objetos de la clase NumeroImaginario
        NumeroImaginario a(e1, i1);
        NumeroImaginario b(e2, i2);
        NumeroImaginario resultado;
        string operacionStr;

        // Realiza la operacion segun la opcion seleccionada
        switch (opcion) {
            case 1:
                resultado = a + b;
                operacionStr = "Suma";
                break;
            case 2:
                resultado = a - b;
                operacionStr = "Resta";
                break;
            case 3:
                resultado = a * b;
                operacionStr = "Multiplicacion";
                break;
            case 4:
                resultado = a / b;
                operacionStr = "Division";
                break;
        }

        // Muestra y registra el resultado
        string registro = operacionStr + ": " + a.toString() + " y " + b.toString() + " = " + resultado.toString();
        cout << registro << "\n";
        registrarOperacion(registro);

        // Pregunta si desea hacer otra operacion
        cout << "\nDesea hacer otra operacion? (s/n): ";
        cin >> continuar;

        if (continuar == 's' || continuar == 'S') {
            system("cls"); 
        } else {
            cout << "Saliendo del programa. Gracias por usar la calculadora!\n";
            break;
        }

    } while (true);

    return 0;
}
