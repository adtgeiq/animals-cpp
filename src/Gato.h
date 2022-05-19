#ifndef __GATO__
#define __GATO__

#include <string>
#include "Animal.h"
#include "IAnimalBehavior.h"

class Gato : public Animal, public IAnimalBehavior {

public:
    Gato(std::string name, int edad, double peso, std::string color) ;
    std::string setColor(std::string color) { c = color; }
    std::string getColor() { return c; }
    std::string camina();
    std::string hasUnSonido();

private:
    std::string c;
};
#endif // !__GATO__