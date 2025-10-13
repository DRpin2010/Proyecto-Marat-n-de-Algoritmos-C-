// Ejercicio 290
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Juego de cartas demo: baraja 4 cartas y reparte 2 manos\n";
vector<int> deck(52); iota(deck.begin(),deck.end(),1); random_shuffle(deck.begin(),deck.end());
cout<<"Mano1: "<<deck[0]<<","<<deck[1]<<"\n";

    return 0;
}
