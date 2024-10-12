#include "ATarget.hpp"
#include <iostream>
#include <string>

ATarget::ATarget(std::string type): type(type)
{

}

ATarget::ATarget(const ATarget &other)
{
    *this = other;
}

ATarget &ATarget::operator=(const ATarget &other)
{
    type = other.type;
    return *this;
}

std::string ATarget::getType() const
{
    return type;
}

ATarget::~ATarget()
{

}

void ATarget::getHitBySpell(const ASpell &spell) const
{
    std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}