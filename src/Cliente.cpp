#include "Cliente.h"

Animal * Cliente::getAnimal(std::string animal, std::string name, int edad, double peso) {
    Animal a;
    if (animal.compare("delfin") == 0) {
        return a.create(DELFIN, name, edad, peso);
    }
    else if (animal == "gato") {
        return a.create(GATO, name, edad, peso);
    }
    else if (animal == "pinguino")
    {
        return a.create(PINGUINO, name, edad, peso);
    }
    else {
        return a.create(AnimalType(9999), name, edad, peso);
    }

}




