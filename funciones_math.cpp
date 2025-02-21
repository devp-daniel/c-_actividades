#include <iostream>
#include <cmath>

using namespace std;

int main()

{
    cout << "DEMOSTRACION DE FUNCIONES MATEMATICAS EN C++" << endl << endl;
    cout << "Funcion fmax para hallar el Mayor de dos numeros: fmax(18.9, 18) = ";
    cout << fmax(18.9, 18) << endl << endl;
    cout << "Funcion fmin para hallar el Menor de dos numeros: fmin(18.9, 18) = ";
    cout << fmin(18.9, 18) << endl << endl;
    cout << "Funcion ceil para redondear a una cifra superior: ceil(18.7) = ";
    cout << ceil(18.7) << endl << endl;
    cout << "Funcion floor para redondear a una cifra inferior: floor(18.7) = ";
    cout << floor(18.7463) << endl << endl;
    cout << "Funcion pow para elevar un numero a una potencia: pow(9, 2) = ";
    cout << pow(9, 2) << endl << endl;
    cout << "Funcion sqrt para hallar la raiz cuadrada de un numero: sqrt(81) = ";
    cout << sqrt(81) << endl << endl;
    cout << "Funcion hypot para hallar la hipotenusa de un triangulo: hypot(3, 4) = ";
    cout << hypot(3, 4) << endl << endl;

    system("pause");
    return EXIT_SUCCESS;

}