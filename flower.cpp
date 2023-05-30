#include "flower.h"

Flower::Flower(string name){
    this->name = name;
}

Flower::Flower(string name, string description){
    this->name = name;
    this->description = description;
}

Flower::~Flower(){
}    