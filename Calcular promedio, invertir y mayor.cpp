#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double promedio(const vector<double> &v) {
    double suma = 0;
    for (double x : v) suma += x;
    return suma / v.size();
}

double mayor(const vector<double> &v) {
    return *max_element(v.begin(), v.end());
}

void invertir(vector<double> &v) {
    reverse(v.begin(), v.end());
}

int main() {
    int n;
    cout << "Cuantos numeros desea ingresar? ";
    cin >> n;
    vector<double> datos(n);

    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> datos[i];
    }

    cout << "Promedio: " << promedio(datos) << endl;
    cout << "Mayor: " << mayor(datos) << endl;

    invertir(datos);
    cout << "Array invertido: ";
    for (double x : datos) cout << x << " ";
    cout << endl;

    return 0;
}
