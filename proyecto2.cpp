#include <iostream>
using namespace std;

int main ()
{
    char nombre_apellido[30];
    char sexo;
    int edad;

    cout<<"Digita tu nombre y apellido: " << endl;
    cin.getline(nombre_apellido, 30);
    cout<<"Digita tu edad: " << endl;
    cin>>edad;
    cout<<"Digita tu sexo M o F: " << endl;
    cin>>sexo;

    system("cls");

    cout<<"Tu nombre es: "<< nombre_apellido << endl;
    cout<<"Tu edad es: "<< edad <<" años " << endl;
    cout<<"Tu sexo es: "<< sexo << endl;

    system("pause");
    return EXIT_SUCCESS;
}
