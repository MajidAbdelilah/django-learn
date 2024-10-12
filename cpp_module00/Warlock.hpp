#pragma once
#include <string>
#include <iostream>

class Warlock
{
    private:
    std::string name;
    std::string title;
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

};