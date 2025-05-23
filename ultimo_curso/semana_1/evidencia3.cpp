#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Clase base para animal
class Animal {
protected:
    string nombre;
    int edad;
public:
    Animal(string nombre, int edad) : nombre(nombre), edad(edad) {}
    virtual void mostrar() {
        cout << "Nombre: " << nombre << ", Edad: " << edad;
    }
    virtual void cambiarDatos() {
        cout << "Nuevo nombre: ";
        cin >> nombre;
        cout << "Nueva edad: ";
        cin >> edad;
    }
    virtual ~Animal() {}
};

// Clase mamifero
class Mamifero : public Animal {
private:
    // Atributos específicos de mamifero
    string colorPelo;
public:
    Mamifero(string nombre, int edad, string colorPelo)
        : Animal(nombre, edad), colorPelo(colorPelo) {}

    void mostrar() override {
        cout << "[Mamifero] ";
        Animal::mostrar();
        cout << ", Color de pelo: " << colorPelo << endl;
    }

    void cambiarDatos() override {
        Animal::cambiarDatos();
        cout << "Nuevo color de pelo: ";
        cin >> colorPelo;
    }
};

// Clase ave
class Ave : public Animal {
private:
    // Atributos específicos de ave
    string tipoAlas;
    string tipoPico;
public:
    Ave(string nombre, int edad, string tipoAlas, string tipoPico)
        : Animal(nombre, edad), tipoAlas(tipoAlas), tipoPico(tipoPico) {}

    void mostrar() override {
        cout << "[Ave] ";
        Animal::mostrar();
        cout << ", Tipo de alas: " << tipoAlas << ", Tipo de pico: " << tipoPico << endl;
    }

    void cambiarDatos() override {
        Animal::cambiarDatos();
        cout << "Nuevo tipo de alas: ";
        cin >> tipoAlas;
        cout << "Nuevo tipo de pico: ";
        cin >> tipoPico;
    }
};

// Clase reptil
class Reptil : public Animal {
private:
    // Atributos específicos de reptil
    int cantidadDientes;
    string alimentacion;
public:
    Reptil(string nombre, int edad, int cantidadDientes, string alimentacion)
        : Animal(nombre, edad), cantidadDientes(cantidadDientes), alimentacion(alimentacion) {}

    void mostrar() override {
        cout << "[Reptil] ";
        Animal::mostrar();
        cout << ", Cantidad de dientes: " << cantidadDientes << ", Herbivoro o Carnivoro?: " << alimentacion << endl;
    }

    void cambiarDatos() override {
        Animal::cambiarDatos();
        cout << "Nueva cantidad de dientes: ";
        cin >> cantidadDientes;
        cout << "Corregir si es herbivoro o carnivoro?: ";
        cin >> alimentacion;
    }
};

// Clase Inicio
class Inicio {
private:
    vector<Animal*> animales;
public:
    ~Inicio() {
        for (Animal* a : animales) delete a;
    }
    // Menu principal
    void menu() {
        int opcion;
        do {

            system("cls"); 

            cout << "\n----- MENU PRINCIPAL -----\n\n";
            cout << "1. Agregar mamifero\n";
            cout << "2. Agregar reptil\n";
            cout << "3. Agregar ave\n";
            cout << "4. Mostrar animales\n";
            cout << "5. Cambiar datos de un animal\n";
            cout << "6. Salir\n\n";
            cout << "Seleccione una opcion: \n";
            cin >> opcion;

            switch (opcion) {
                case 1: agregarMamifero(); break;
                case 2: agregarReptil(); break;
                case 3: agregarAve(); break;
                case 4: mostrarAnimales(); break;
                case 5: cambiarAnimal(); break;
                case 6: cout << "Salir\n"; break;
                default: cout << "Opcion no valida\n";
            }
        } while (opcion != 6);
    }

    void agregarMamifero() {
        string nombre, colorPelo;
        int edad;
        cout << "Nombre del mamifero: "; cin >> nombre;
        cout << "Edad: "; cin >> edad;
        cout << "Color de pelo: "; cin >> colorPelo;
        animales.push_back(new Mamifero(nombre, edad, colorPelo));
    }

    void agregarAve() {
        string nombre, tipoAlas, tipoPico;
        int edad;
        cout << "Nombre del ave: "; cin >> nombre;
        cout << "Edad: "; cin >> edad;
        cout << "Tipo de alas: "; cin >> tipoAlas;
        cout << "Tipo de pico: "; cin >> tipoPico;
        animales.push_back(new Ave(nombre, edad, tipoAlas, tipoPico));
    }

    void agregarReptil() {
        string nombre, alimentacion;
        int edad, cantidadDientes;
        cout << "Nombre del reptil: "; cin >> nombre;
        cout << "Edad: "; cin >> edad;
        cout << "Cantidad de dientes: "; cin >> cantidadDientes;
        cout << "Herbivoro o Carnivoro?: "; cin >> alimentacion;
        animales.push_back(new Reptil(nombre, edad, cantidadDientes, alimentacion));
    }

    void mostrarAnimales() {
        if (animales.empty()) {
            cout << "No hay animales registrados.\n";
        } else {
            for (size_t i = 0; i < animales.size(); ++i) { // size_t para evitar alertas de compilado
                cout << i + 1 << ". ";
                animales[i]->mostrar();
            }
        }
        system("pause");
    }

    void cambiarAnimal() {
        if (animales.empty()) {
            cout << "No hay animales para modificar.\n";
            return;
        }
        mostrarAnimales();
        int indice;
        cout << "Seleccione el numero del animal a modificar: ";
        cin >> indice;
        if (indice >= 1 && indice <= (int)animales.size()) {
            animales[indice - 1]->cambiarDatos();
        } else {
            cout << "Numero no valido.\n";
        }
    }
};

// Función principal
int main() {
    Inicio inicio;
    inicio.menu();
    return 0;
}
