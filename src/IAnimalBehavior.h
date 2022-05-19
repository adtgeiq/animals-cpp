#ifndef __IANIMAL_BEHAVIOR__
#define __IANIMAL_BEHAVIOR__

#include <string>

class IAnimalBehavior {
public:
    virtual std::string hasUnSonido() = 0;
    virtual std::string camina() = 0;

};

#endif // !__IANIMAL_BEHAVIOR__