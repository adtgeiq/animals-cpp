#ifndef __DELFIN__
#define __DELFIN__

#include <string>
#include "Animal.h"
#include "IAnimalBehavior.h"

class Delfin : public Animal, public IAnimalBehavior {
public:
    Delfin(std::string name, int edad, double peso);
    std::string setColor(std::string color) { c = color; }
    std::string getColor() { return c; }
    std::string camina();
    std::string hasUnSonido();

private:
    std::string c;
};

#endif // !__DELFIN__
