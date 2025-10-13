// Ejercicio 275
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Integrity check demo: compute simple sum of bytes of file\n";
string fn; cin >> fn;
ifstream f(fn, ios::binary);
unsigned long sum=0; char c;
while(f.get(c)) sum += (unsigned char)c;
cout << "Checksum: " << sum << "\n";

    return 0;
}
