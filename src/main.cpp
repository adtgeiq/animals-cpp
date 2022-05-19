#include "Animal.h"
#include "Cliente.h"

int main() {
    Cliente cliente;
    Animal *animal;
    animal = cliente.getAnimal("gato", "Michi", 12, 5.42);

}