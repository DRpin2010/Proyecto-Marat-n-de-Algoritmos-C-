#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c;
    cout << "Ingrese cuantos numeros de Fibonacci desea: ";
    cin >> n;

    if (n <= 0) {
        cout << "Debe ingresar un numero positivo." << endl;
        return 1;
    }

    cout << "Serie: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
    return 0;
}

