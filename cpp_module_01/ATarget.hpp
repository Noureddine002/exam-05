#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"
class ASpell;
class ATarget
{
    std::string type;
    public:
        ATarget();
        virtual ~ATarget();
        ATarget(ATarget const &cpy);
        ATarget & operator = (ATarget const &op);
        ATarget(std::string const &type);
        std::string const &getType() const;
        virtual ATarget *clone() const = 0;
        void getHitBySpell(ASpell const &asp) const;
};