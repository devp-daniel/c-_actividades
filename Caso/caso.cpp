#include <iostream>
using namespace std;

// Definicion de la funcion main

int main ()
{
    // Variables
    int referencia;
    char descripcion[50];
    int talla;
    char disponibilidad;
    int costo;
    int precio_venta;

    cout<<"ADMINISTRAR VENTA DE ZAPATOS" << endl;
    cout<<"Digite la referencia del zapato... " << endl;
    cin>>referencia;
    cin.ignore(256, '\n');
    cout<<"Digite una descripcion del zapato... " << endl;
    cin.getline(descripcion, 50);
    cout<<"Digita la talla... " << endl;
    cin>>talla;
    cout<<"Digita la letra si esta disponible o no para la venta S/N... " << endl;
    cin>>disponibilidad;
    cout<<"Digita el costo del zapato... " << endl;
    cin>>costo;
    cout<<"Digita el precio de venta del zapato... " << endl;
    cin>>precio_venta;

    system("cls");

    // Datos obtenidos
    cout<<"LOS DATOS REGISTRADOS SON LOS SIGUIENTES" << endl;
    cout<<" " << endl;
    cout<<"REFERENCIA: "<< referencia << endl;
    cout<<"DESCRIPCION: "<< descripcion << endl;
    cout<<"TALLA: "<< talla << endl;
    cout<<"DISPONIBILIDAD: "<< disponibilidad << endl;
    cout<<"COSTO: "<< costo << endl;
    cout<<"PRECIO: "<< precio_venta << endl;
    cout<<" " << endl;
    cout<<"Gracias por digitar la informacion" << endl;
    cout<<" " << endl;
    cout<<"Daniel Alba" << endl;

    system("pause");
    return EXIT_SUCCESS;
}