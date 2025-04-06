#ifndef DOG_HPP
#define DOG_HPP

#include "pet.hpp"

class Dog : public Pet {
private:
    static constexpr float licensingRate = 2.0;

public:
    Dog(const std::string& name, float weight) : Pet(name, weight) {}

    float CalculateFee() const override {
        return weight * licensingRate;
    }
};

#endif
