#include "ASpell.hpp"


ASpell::ASpell(){

}
ASpell::~ASpell()
{

}
ASpell::ASpell(ASpell const &cpy){
    *this = cpy;
}
ASpell &ASpell::operator =(ASpell const &op)
{
    this->name = op.name;
    this->effects = op.effects;
    return *this;
}
ASpell::ASpell(std::string const &name,std::string const &effects)
{
    this->name = name;
    this->effects = effects;
}
std::string const &ASpell::getName() const
{
    return this->name;
}
std::string const &ASpell::getEffects() const
{
    return this->effects;
}

void ASpell::launch(ATarget const &tg) const
{
    tg.getHitBySpell(*this);
}