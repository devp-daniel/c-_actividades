#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// Definicion de la funcion main

int main ()
{
    // Variables

    int talla, cantidad, costo_unidad, precio_unidad;
    string referencia, descripcion;
    char disponibilidad, letra_zapato;
    float costo_total, precio_total, utilidad_unidad, utilidad_total, porcentaje_utilidad;

    // Ingreso de datos

    cout<<"ADMINISTRAR VENTA DE ZAPATOS" << endl;
    cout<<"Digite la referencia del zapato... " << endl;
    cin>>referencia;
    cin.ignore(256, '\n');
    cout<<"Digite una descripcion del zapato... " << endl;
    getline(cin, descripcion);
    cout<<"Digita la talla... " << endl;
    cin>>talla;
    cout<<"Digita la letra si esta disponible o no para la venta S/N... " << endl;
    cin>>disponibilidad;
    cout<<"Digita la cantidad de zapatos que existen de esta referencia..." << endl;
    cin>>cantidad;
    cout<<"Digita el costo del zapato... " << endl;
    cin>>costo_unidad;

    system("cls");

    // If anidado

    if (costo_unidad > 0 && costo_unidad < 99999999999999)
    {
        if (costo_unidad <= 30000)
        {
            letra_zapato = 'A';
            porcentaje_utilidad = 50;
            precio_unidad = costo_unidad + (costo_unidad * 0.50); 
        }

        else if (costo_unidad > 30000 && costo_unidad <= 60000)
        {
            letra_zapato = 'B';
            porcentaje_utilidad = 40;
            precio_unidad = costo_unidad + (costo_unidad * 0.40); 
        }
        else {
            letra_zapato = 'C';
            porcentaje_utilidad = 30;
            precio_unidad = costo_unidad + (costo_unidad * 0.30); 
        }
    }

    // Calculos

    costo_total = cantidad * costo_unidad;
    precio_total = cantidad * precio_unidad;
    utilidad_unidad = precio_unidad - costo_unidad;
    utilidad_total = precio_total - costo_total;

    // Datos obtenidos
    
    cout<<"LOS DATOS REGISTRADOS SON LOS SIGUIENTES" << endl;
    cout<<" " << endl;
    cout<<"REFERENCIA: "<< referencia << endl;
    cout<<"TIPO: "<< letra_zapato << endl;
    cout<<"DESCRIPCION: "<< descripcion << endl;
    cout<<"TALLA: "<< talla << endl;
    cout<<"DISPONIBILIDAD: "<< disponibilidad << endl;
    cout<<"CANTIDAD DE ZAPATOS: "<< cantidad << endl;
    cout<<"COSTO UNIDAD: "<< costo_unidad << endl;
    cout<<"COSTO TOTAL: "<< costo_total << endl;
    cout<<"PRECIO UNIDAD: "<< precio_unidad << endl;
    cout<<"PRECIO TOTAL DE "<< cantidad <<" UNIDADES: "<< precio_total << endl;
    cout<<"UTILIDAD POR UNIDAD: "<< utilidad_unidad << endl;
    cout<<"UTILIDAD TOTAL: "<< utilidad_total << endl;
    cout<<"PORCENTAJE DE UTILIDAD: "<< porcentaje_utilidad <<"%"<< endl;
    cout<<" " << endl;
    cout<<"Gracias por digitar la informacion" << endl;
    cout<<" " << endl;
    cout<<"Daniel Alba" << endl;

    system("pause");

    return EXIT_SUCCESS;
}