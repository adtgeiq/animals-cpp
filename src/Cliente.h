#ifndef __CLIENTE__
#define __CLIENTE__

#include <string>
#include "Animal.h"

class Cliente {
public:
    Animal * getAnimal(std::string animal, std::string name, int edad, double peso);

private:
    

};

#endif // !__CLIENTE__