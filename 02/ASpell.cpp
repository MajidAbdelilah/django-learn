#include "ASpell.hpp"
#include <string>
#include <iostream>

ASpell::ASpell(): name(""), effects("")
{

}


ASpell::ASpell( std::string name,  std::string effects): name(name), effects(effects)
{

}

ASpell::ASpell(const ASpell &other)
{
    name = other.name;
    effects = other.effects;
}

std::string ASpell::getName() const
{
    return name;
}

std::string ASpell::getEffects() const
{
    return effects;
}

ASpell::~ASpell()
{

}

ASpell &ASpell::operator=(const ASpell &other)
{

    name = other.name;
    effects = other.effects;

    return *this;
}

void ASpell::launch(const ATarget &target) const
{
    target.getHitBySpell(*this);
}