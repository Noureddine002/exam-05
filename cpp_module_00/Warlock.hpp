#pragma once

#include <iostream>

class Warlock
{
    private:
        std::string name;
        std::string title;
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
};
