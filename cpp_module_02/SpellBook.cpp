#include "SpellBook.hpp"

SpellBook::SpellBook()
{

}
SpellBook::~SpellBook()
{

}
SpellBook::SpellBook(SpellBook const &cpy)
{
    *this =cpy;
}
SpellBook & SpellBook::operator = (SpellBook const &op)
{
    this->arr = op.arr;
    return (*this);
}
void SpellBook::learnSpell(ASpell* sp)
{
    if(sp)
        arr.insert(std::pair<std::string,ASpell *>(sp->getName(),sp));
}
void SpellBook::forgetSpell(std::string const &sp_name)
{
    std::map<std::string ,ASpell *>::iterator it = arr.find(sp_name);
    if(it != arr.end())
        arr.erase(it);
}
ASpell* SpellBook::createSpell(std::string const &sp_name)
{
    std::map<std::string ,ASpell *>::iterator it = arr.find(sp_name);
    if(it != arr.end())
        return arr[sp_name];
    return NULL;
}