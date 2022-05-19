#ifndef __ANIMAL__
#define __ANIMAL__

#include <string>

enum AnimalType
{
    GATO, PINGUINO, DELFIN
};

class Animal {
public:
    Animal();
    Animal(std::string name, int edad, double peso);
    ~Animal();
    std::string getName();
    int getEdad();
    double getPeso();
    void setName(std::string name);
    void setEdad(int edad);
    void setPeso(double peso);
    Animal * create(AnimalType tipo, std::string name, int edad, double peso);

private:
    std::string n;
    int e;
    double p;
};
#endif // !__ANIMAL__
