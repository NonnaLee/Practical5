#pragma once
#include "ReduceGeneric.h"
class ReduceMinimum :
    public ReduceGeneric
{
private:
    virtual int binaryOperator(int, int);
};

