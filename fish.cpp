#include <iostream>
#include "fish.h"
#include <string> // to_string()
using namespace std;

Fish::Fish(){
    species = "Keinien info";
    size = weight = 0;
};

Fish::Fish(string spec, int siz){
    species = spec;
    size = siz;
}

Fish::Fish(string spec, int siz, float wei){
    species = spec;
    size = siz;
    weight = wei;
}

string Fish::getSpecies(){
    return species;
}

int Fish::getSize(){
    return size;
}

float Fish::getWeight(){
    return weight;
}

void Fish::setWeight(float wei){
    weight = wei;
}

string Fish::toString(){
    string text = "\n FISH: ";
    text += "\n SPECIES: " + species;
    text += "\n SIZE: " + to_string(size);
    text += "\n WEIGHT: " + to_string(weight);
    return text;
}