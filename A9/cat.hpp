#ifndef CAT_HPP
#define CAT_HPP

#include "pet.hpp"

class Cat : public Pet {
private:
    static constexpr float licensingRate = 1.5;

public:
    Cat(const std::string& name, float weight) : Pet(name, weight) {}

    float CalculateFee() const override {
        return weight * licensingRate;
    }
};

#endif
