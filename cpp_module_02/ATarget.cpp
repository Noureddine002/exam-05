#include "ATarget.hpp"

ATarget::ATarget()
{

}
ATarget:: ~ATarget()
{

}
ATarget::ATarget(ATarget const &cpy)
{
    *this = cpy;
}
ATarget & ATarget::operator = (ATarget const &op)
{
    this->type = op.type;
    return *this;
}
ATarget::ATarget(std::string const &type)
{
    this->type = type;
}
std::string const &ATarget::getType() const
{
    return this->type;
}

void ATarget::getHitBySpell(ASpell const &asp) const
{
    std::cout<<this->getType()<<" has been "<<asp.getEffects()<<"!"<<std::endl;
}