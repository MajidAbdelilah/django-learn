#pragma once

#include "ASpell.hpp"

#include <iostream>
#include <string>

class Fwoosh: public ASpell
{
    public:
    Fwoosh();
    ~Fwoosh();
    ASpell *clone() const;
};