#ifndef __PINGUI__
#define __PINGUI__

#include <string>
#include "Animal.h"
#include "IAnimalBehavior.h"

class Pinguino : public Animal, public IAnimalBehavior {
public:
    Pinguino(std::string name, int edad, double peso);
    std::string setColor(std::string color) { c = color; }
    std::string getColor() { return c; }
    std::string camina();
    std::string hasUnSonido();

private:
    std::string c;

};

#endif // !__PINGUI__