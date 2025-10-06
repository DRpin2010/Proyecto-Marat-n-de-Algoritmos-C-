#include <iostream>
#include <string>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    Persona(string n, int e) {
        nombre = n;
        edad = e;
    }

    void saludar() {
        cout << "Hola, soy " << nombre << " y tengo " << edad << " años." << endl;
    }
};

int main() {
    string nombre;
    int edad;

    cout << "Ingrese el nombre: ";
    getline(cin, nombre);
    cout << "Ingrese la edad: ";
    cin >> edad;

    Persona p(nombre, edad);
    p.saludar();
    return 0;
}

