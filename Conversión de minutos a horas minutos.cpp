#include <iostream>
using namespace std;
int main(){
    int min; cout<<"Ingrese minutos: "; cin>>min;
    if(min<0){ cout<<"Error\n"; return 1;}
    int h = min / 60;
    int m = min % 60;
    cout<<h<<":"<< (m<10? "0":"") << m <<"\n";
    return 0;
}

