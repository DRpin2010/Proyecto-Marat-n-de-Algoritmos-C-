#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32;
    cout << "Equivale a " << fahrenheit << " grados Fahrenheit." << endl;
    return 0;
}
