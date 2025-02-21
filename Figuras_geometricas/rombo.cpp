#include <iostream>

using namespace std;

int main() {
    float d1, d2, area;

    cout << "Programa que calcula el area de un rombo" << endl << endl;
    cout << "Introduce la diagonal mayor: ";
    cin >> d1;
    cout << "Introduce la diagonal menor: ";
    cin >> d2;

    area = (d1 * d2) / 2;

    cout << "El area del rombo es: " << area << endl;
    cout << endl;
    cout << "Daniel Alba" << endl << endl;

    system("pause");

    return EXIT_SUCCESS;
}