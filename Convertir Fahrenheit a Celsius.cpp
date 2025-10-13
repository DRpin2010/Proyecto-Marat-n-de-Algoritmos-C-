#include <iostream>
using namespace std;
int main(){
    double f,c;
    cout<<"Ingrese grados Fahrenheit: "; cin>>f;
    c = (f - 32.0) * 5.0 / 9.0;
    cout<<f<<" F = "<<c<<" C\n";
    return 0;
}


