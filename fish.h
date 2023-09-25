// pliczek nagłówkowy - definicja klasy Fish, informacja o polach i metodach

#include <iostream>
using namespace std;
// gatunek
// rozmiar
// data zlowienia
// waga

// getinfo

class Fish{
    private: //prywaciarze
        string species;
        int size;
        float weight;
    public: //metody publiczne
            // kinstruktory:
        Fish(string, int, float);
        Fish();
        Fish(string, int);    
        // metody dostepowe    
        
        string getSpecies();
        int getSize();
        float getWeight();
        void setWeight(float);
         string toString();
        

};