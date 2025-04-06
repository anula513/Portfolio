#ifndef PET_HPP
#define PET_HPP

#include <string>

class Pet {
protected:
    std::string name;
    float weight;

public:
    Pet(const std::string& name, float weight) : name(name), weight(weight) {}
    virtual ~Pet() {}

    virtual float CalculateFee() const = 0;
    std::string GetName() const { return name; }
};

#endif
