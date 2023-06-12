#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}
TargetGenerator::~TargetGenerator()
{

}
TargetGenerator::TargetGenerator(TargetGenerator const &cpy)
{
    *this =cpy;
}
TargetGenerator & TargetGenerator::operator = (TargetGenerator const &op)
{
    this->arr = op.arr;
    return (*this);
}
void TargetGenerator::learnTargetType(ATarget* sp)
{
    if(sp)
        arr.insert(std::pair<std::string,ATarget *>(sp->getType(),sp));
}
void TargetGenerator::forgetTargetType(std::string const &sp_name)
{
    std::map<std::string ,ATarget *>::iterator it = arr.find(sp_name);
    if(it != arr.end())
        arr.erase(it);
}
ATarget* TargetGenerator::createTarget(std::string const &sp_name)
{
     std::map<std::string ,ATarget *>::iterator it = arr.find(sp_name);
    if(it != arr.end())
        return arr[sp_name];
    return NULL;
}