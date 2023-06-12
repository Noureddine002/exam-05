#pragma once

#include "ASpell.hpp"


class SpellBook
{
private:
    std::map<std::string ,ASpell *> arr;
public:
    SpellBook();
    ~SpellBook();
    SpellBook(SpellBook const &cpy);
    SpellBook &operator = (SpellBook const &op);
    void learnSpell(ASpell* sp);
    void forgetSpell(std::string const &sp_name);
    ASpell* createSpell(std::string const &sp_name);
};

