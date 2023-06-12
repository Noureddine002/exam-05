#include "Warlock.hpp"

Warlock::Warlock()
{

}
Warlock::~Warlock()
{
    std::cout<<this->getName()<<": My job here is done!"<<std::endl;
}
Warlock::Warlock(Warlock const &cpy)
{
    *this = cpy;
}
Warlock & Warlock::operator = (Warlock const &op)
{
    this->name = op.name;
    this->title = op.title;
    return *this;
}
Warlock::Warlock(std::string const &name,std::string const &title)
{
    this->name = name;
    this->title = title;
    std::cout<<this->getName()<<": This looks like another boring day."<<std::endl;
}
std::string const &Warlock::getName()const
{
    return this->name;
}
std::string const &Warlock::getTitle()const
{
    return this->title;
}
void Warlock::setTitle(std::string const &title)
{
    this->title = title;
}
void Warlock::introduce() const
{
    std::cout<<this->getName()<<": I am "<<this->getName()<<", "<<this->getTitle()<<"!"<<std::endl;
}

void Warlock::learnSpell(ASpell *sp)
{
    if(sp)
        arr.insert(std::pair<std::string,ASpell *>(sp->getName(),sp));
}
void Warlock::forgetSpell(std::string name_sp)
{
    std::map<std::string ,ASpell *>::iterator it = arr.find(name_sp);
    if(it != arr.end())
        arr.erase(it);
}
void Warlock::launchSpell(std::string name_sp,ATarget const &tg)
{
    std::map<std::string ,ASpell *>::iterator it = arr.find(name_sp);
    if(it != arr.end())
    {
        ASpell *sp = it->second;
        sp->launch(tg);
    }
}
