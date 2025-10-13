// Ejercicio 263
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

// 2048-like game simplified: initialize board and print
vector<vector<int>> b(4, vector<int>(4,0));
b[0][0]=2; b[0][1]=2;
for(auto &r:b){ for(auto v:r) cout<<v<<" "; cout<<"\n"; }

    return 0;
}
