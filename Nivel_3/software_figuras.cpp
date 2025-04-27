#include <iostream>
#include <string>

using namespace std;

// Constante de PI
const float PI = 3.1416;

float perimetro_cuadrado(float lado);
float area_cuadrado(float lado);
float perimetro_rectangulo(float base, float altura);
float area_rectangulo(float base, float altura);
float perimetro_triangulo(float lado1, float lado2, float base);
float area_triangulo(float base, float altura);
float perimetro_circulo(float radio);
float area_circulo(float radio);
void mostrar_resultado(string figura, float area, float perimetro);

// Programa
int main()
{
    int opcion;
    float lado, base, altura, radio, lado1, lado2;
    float area, perimetro;

    do {
        cout << "Software para calcular el area y el perimetro de las figuras geometricas" << endl;
        cout << "---------------------------------------------------------" << endl;
        cout << "1. Cuadrado" << endl;
        cout << "2. Rectangulo" << endl;
        cout << "3. Triangulo" << endl;
        cout << "4. Circulo" << endl;
        cout << "5. Salir" << endl;
        cout << "---------------------------------------------------------" << endl;
        cout << "Seleccione una figura: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            area = area_cuadrado(lado);
            perimetro = perimetro_cuadrado(lado);
            mostrar_resultado("cuadrado", area, perimetro);
            break;
        case 2:
            cout << "Ingrese la base del rectangulo: ";
            cin >> base;
            cout << "Ingrese la altura del rectangulo: ";
            cin >> altura;
            area = area_rectangulo(base, altura);
            perimetro = perimetro_rectangulo(base, altura);
            mostrar_resultado("rectangulo", area, perimetro);
            break;
        case 3:
            cout << "Ingrese el lado 1 del triangulo: ";
            cin >> lado1;
            cout << "Ingrese el lado 2 del triangulo: ";
            cin >> lado2;
            cout << "Ingrese la base del triangulo: ";
            cin >> base;
            cout << "Ingrese la altura del triangulo: ";
            cin >> altura;
            area = area_triangulo(base, altura);
            perimetro = perimetro_triangulo(lado1, lado2, base);
            mostrar_resultado("triangulo", area, perimetro);
            break;
        case 4:
            cout << "Ingrese el radio del circulo: ";
            cin >> radio;
            area = area_circulo(radio);
            perimetro = perimetro_circulo(radio);
            mostrar_resultado("circulo", area, perimetro);
            break;
        case 5:
            cout << "Gracias por usar el software." << endl;
            break;
        default:
            cout << "Opcion no valida. Por favor, seleccione una opcion valida." << endl;
            break;
        }

    } while (opcion != 5);
}

// Funciones

float perimetro_cuadrado(float lado)
{
    return 4 * lado;
}

float area_cuadrado(float lado)
{
    return lado * lado;
}

float perimetro_rectangulo(float base, float altura)
{
    return 2 * (base + altura);
}

float area_rectangulo(float base, float altura)
{
    return base * altura;
}

float perimetro_triangulo(float lado1, float lado2, float base)
{
    return lado1 + lado2 + base;
}

float area_triangulo(float base, float altura)
{
    return (base * altura) / 2;
}

float perimetro_circulo(float radio)
{
    return 2 * PI * radio;
}

float area_circulo(float radio)
{
    return PI * radio * radio;
}

void mostrar_resultado(string figura, float area, float perimetro)
{
    cout << "-----------------------------------------------" << endl;
    cout << "El area del " << figura << " es: " << area << endl;
    cout << "El perimetro del " << figura << " es: " << perimetro << endl;
    cout << "-----------------------------------------------" << endl;
}
