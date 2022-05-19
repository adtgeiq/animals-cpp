#include "Gato.h"

Gato::Gato(std::string name, int edad, double peso, std::string color) : 
    Animal (name, edad, peso) {
    c = color;
}

std::string Gato::hasUnSonido() {
    return "miau miau";
}

std::string Gato::camina() {
    return "Camino como gato";
}

