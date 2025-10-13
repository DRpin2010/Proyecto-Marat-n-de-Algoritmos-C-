#include <iostream>
using namespace std;
int main(){
    double notas[5], suma=0;
    for(int i=0;i<5;i++){
        cout<<"Nota "<<i+1<<": "; cin>>notas[i];
        suma += notas[i];
    }
    cout<<"Promedio: "<<(suma/5.0)<<"\n";
    return 0;
}


