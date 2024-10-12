#pragma once
#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"

class Warlock
{
    private:
    std::string name;
    std::string title;
    std::map<std::string, ASpell *> spell_block; 
    Warlock();
    Warlock(const Warlock &other);
    Warlock &operator=(const Warlock &otehr);

    public:    
    Warlock(const std::string &name, const std::string &title);
    ~Warlock();

    const std::string &getName() const;
    const std::string &getTitle() const;

    void setTitle(const std::string &title);
    void introduce() const;

    void learnSpell(ASpell *spell);
    void forgetSpell(std::string name);
    void launchSpell(std::string spellname, const ATarget &target);

};