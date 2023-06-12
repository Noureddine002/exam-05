#pragma once

#include "ATarget.hpp"


class TargetGenerator
{
private:
    std::map<std::string ,ATarget *> arr;
public:
    TargetGenerator();
    ~TargetGenerator();
    TargetGenerator(TargetGenerator const &cpy);
    TargetGenerator &operator = (TargetGenerator const &op);
    void learnTargetType(ATarget* sp);
    void forgetTargetType(std::string const &sp_name);
    ATarget* createTarget(std::string const &sp_name);
};
