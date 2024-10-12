#pragma once
#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    protected:
    std::string type;

    public:
    ATarget(std::string type);
    ATarget(const ATarget &other);
    ATarget &operator=(const ATarget &other);
    virtual ~ATarget();
    
    std::string getType() const;
    void getHitBySpell(const ASpell &spell) const;
    virtual ATarget *clone() const = 0;

};