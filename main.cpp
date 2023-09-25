#include <iostream>
using namespace std;

class Samochod;

class Samochod{
int speed;
// pola
    // kwantyfikatory dostepu:
        // pivate(domyslny specygikator)

string make; // p prywatne
private:
    string color; //p prywatne:
    float weight;
    // metoda prywatne
    float kgToLbs(float _kg){
        return 2.2046*_kg;
    }
    
// protected - pola dostepne tylko w klasie i w klaasach i funkcjach zaprzyjaznonych oraz  w klasach pochodnych
protected:
    string vin;
// public - pola i metody dostepne w klasie, w klasach pochodnych, klasach i funkcjach zaprzyjaznionych oraz poza klasa
public:
    float spalanie;
// metody
    // MEtody dostepowe do pol prywatnych i chronionych:
    void setMake(string);
    string getMake();
    void setWeight(float); // to sa tylko deklaracje
    void setColor(string);
    float getWeight();
    string getColor();
    void retDejta(){ //delaracka i definicja
        cout<<"Czesc przyjacielu "<< endl;
        cout<<"I'only "<< getMake();
        cout<<"I " << getColor(); 
        cout<<"Ma waga to: "<< kgToLbs(getWeight())<<endl;

    }
// metody konstruktora i destruktora
};

// definicja metod klasy Samochod

void Samochod::setWeight(float _weight){
if (weight > 0)
{
    weight = _weight;
}

};

void Samochod::setColor(string _color){
    color = _color;
};

void Samochod::setMake(string _make){
make = _make;
};

string Samochod::getMake(){
    return make;
};

string Samochod::getColor(){
    return color;
};

float Samochod::getWeight(){
    return weight;
};

int main(int argc, char const *argv[])
{
    Samochod multipla;
    // multipla.color = "gren"; - :(
    // multipla.vin = "rfew3"; - :(
    multipla.spalanie = 7.02; // p publiczne
    multipla.setMake("Fiot");
    multipla.setColor("Green");
multipla.setWeight(43);
    multipla.retDejta();
    cout << " Witam 2P" << endl;
    return 0;
}

