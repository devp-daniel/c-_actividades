#include <iostream>
#include <cmath>

using namespace std;

// Definicion de la funcion main

int main ()
{
    // Variables

    int referencia, talla, cantidad, costo_unidad, precio_unidad;
    char descripcion[50], disponibilidad;
    float costo_total, precio_total, utilidad_unidad, utilidad_total, porcentaje_utilidad;

    // Ingreso de datos

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
    cout<<"Digita la cantidad solicitada..." << endl;
    cin>>cantidad;
    cout<<"Digita el costo por unidad... " << endl;
    cin>>costo_unidad;
    cout<<"Digita el precio por unidad... " << endl;
    cin>>precio_unidad;

    system("cls");

    // Calculos

    costo_total = cantidad * costo_unidad;
    precio_total = cantidad * precio_unidad;
    utilidad_unidad = precio_unidad - costo_unidad;
    utilidad_total = precio_total - costo_total;
    porcentaje_utilidad = (utilidad_total / costo_total) * 100;

    // Datos obtenidos
    
    cout<<"LOS DATOS REGISTRADOS SON LOS SIGUIENTES" << endl;
    cout<<" " << endl;
    cout<<"REFERENCIA: "<< referencia << endl;
    cout<<"DESCRIPCION: "<< descripcion << endl;
    cout<<"TALLA: "<< talla << endl;
    cout<<"DISPONIBILIDAD: "<< disponibilidad << endl;
    cout<<"CANTIDAD DE ZAPATOS: "<< cantidad << endl;
    cout<<"COSTO UNIDAD: "<< costo_unidad << endl;
    cout<<"COSTO TOTAL: "<< costo_total << endl;
    cout<<"PRECIO UNIDAD: "<< precio_unidad << endl;
    cout<<"PRECIO TOTAL DE "<< cantidad && cout <<" UNIDADES: "<< precio_total << endl;
    cout<<"UTILIDAD POR UNIDAD: "<< utilidad_unidad << endl;
    cout<<"UTILIDAD TOTAL: "<< utilidad_total << endl;
    cout<<"PORCENTAJE DE UTILIDAD: "<< porcentaje_utilidad << endl;
    cout<<" " << endl;
    cout<<"Gracias por digitar la informacion" << endl;
    cout<<" " << endl;
    cout<<"Daniel Alba" << endl;

    system("pause");
    return EXIT_SUCCESS;
}