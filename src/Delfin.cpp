#include "Delfin.h"

Delfin::Delfin(std::string name, int edad, double peso) : 
    Animal(name, edad, peso) {
    
}

std::string Delfin::camina() {
    return "En realidad el delfin nada";
}

std::string Delfin::hasUnSonido() {
    return "Sonido de delfin";
}