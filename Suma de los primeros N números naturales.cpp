#include <iostream>
using namespace std;
int main(){
    long long n;
    cout<<"Ingrese N: "; cin>>n;
    if(n<0){ cout<<"Error\n"; return 1;}
    long long suma = n*(n+1)/2;
    cout<<"Suma = "<<suma<<"\n";
    return 0;
}


