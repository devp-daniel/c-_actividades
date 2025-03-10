#include <iostream>

using namespace std;

int main ()
{
    //Variables
    int edad;

    cout<<"Digite la edad de su hijo: ";
    cin>>edad;

    if (edad >= 0 && edad <= 6)
    {
        cout<<"El niño pertence al grupo de la primera infancia"<<endl;
    }
    else if (edad >= 7 && edad <= 12)
    {
        cout<<"El niño pertenece al grupo de la segunda infancia"<<endl;
    }
    else if (edad >= 13 && edad <= 18)
    {
        cout<<"El niño pertence al grupo de los adolescentes"<<endl;
    }

    system("pause");

    return 0;

}

