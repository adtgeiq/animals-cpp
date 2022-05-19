#include "Animal.h"
#include "Gato.h"
#include "Delfin.h"
#include "Pinguino.h"

Animal::Animal() {

}

Animal::Animal(std::string name, int edad, double peso) :
 n(name), e(edad), p(peso) {
}

Animal::~Animal() {

}

std::string Animal::getName() {
    return n;
}

int Animal::getEdad() {
    return e;
}

double Animal::getPeso() {
    return p;
}

void Animal::setName(std::string name) {
    n = name;
}

void Animal::setEdad(int edad) {
    e = edad;
}

void Animal::setPeso(double peso) {
    p = peso;
}

Animal * Animal::create(AnimalType tipo, std::string name, int edad, double peso) {
    if (tipo == GATO) {
        return new Gato(name, edad,peso, "");
    }
    else if (tipo == DELFIN) {
        return new Delfin(name, edad, peso);
    }
    else if (tipo == PINGUINO) {
        return new Pinguino(name, edad, peso);
    }
    else {
        return NULL;
    }
}
