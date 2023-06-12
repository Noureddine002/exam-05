#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
class Warlock
{
    private:
        std::string name;
        std::string title;
        std::map<std::string ,ASpell *>arr;
        SpellBook sp;
    public:
        Warlock();
        ~Warlock();
        Warlock(Warlock const &cpy);
        Warlock &operator = (Warlock const &op);
        Warlock(std::string const &name,std::string const &title);
        std::string const &getName()const;
        std::string const &getTitle()const;
        void setTitle(std::string const &title);
        void introduce() const;
        void learnSpell(ASpell *sp);
        void forgetSpell(std::string name_sp);
        void launchSpell(std::string name_sp,ATarget const &tg);
};