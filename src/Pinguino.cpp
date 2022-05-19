#include "Pinguino.h"

Pinguino::Pinguino(std::string name, int edad, double peso) :
    Animal(name, edad, peso) {

}

std::string Pinguino::camina() {
    return "Camino como pinguino";
}

std::string Pinguino::hasUnSonido() {
    return "Sonido de Pinguino";
}


