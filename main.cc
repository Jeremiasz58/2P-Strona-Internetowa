#include <iostream>
#include "fish.h"
using namespace std;


Fish loadFishData(){
    string species;
    int size;
    float weight;
    cout << "Podaj nazwę species: ";
    cin >> species;
    cout << "Podaj rozmiar ochronny: ";
    cin >> size;
    cout << "Podaj wagę: ";
    cin >> weight;
    Fish okaz(species, size, weight);
    return okaz;
}

int main(int argc, char const *argv[])
{
    Fish base[3];
    for (int i = 0; i < 3; i++)
        base[i] = loadFishData();

    return 0;
}