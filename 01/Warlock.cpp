#include "Warlock.hpp"
#include <iostream>

Warlock::Warlock(const std::string &name, const std::string &title): name(name), title(title)
{
    std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!\n";
    for(std::map<std::string, ASpell *>::iterator i = spell_block.begin(); i != spell_block.end(); ++i)
    {
        delete i->second;
    }
    spell_block.clear();
}

const std::string &Warlock::getName() const 
{
    return name;
}

const std::string &Warlock::getTitle() const 
{
    return title;
}


void Warlock::setTitle(const std::string &title)
{
    this->title = title;
}

void Warlock::introduce() const
{
    std::cout << name << ": I am "<< name <<", " << title << "!\n";
}

void Warlock::learnSpell(ASpell *spell)
{  
    if(!spell)
        return ;
    if(spell_block.find(spell->getName()) == spell_block.end())
    {
        spell_block[spell->getName()] = spell->clone();
    }
}

void Warlock::forgetSpell(std::string name)
{
    if(spell_block.find(name) != spell_block.end())
    {
        spell_block.erase(spell_block.find(name));
    }
}

void Warlock::launchSpell(std::string name, const ATarget &target)
{
    if(spell_block.find(name) != spell_block.end())
    {
        spell_block[name]->launch(target);
    }
}