#pragma once
#include "ReduceGeneric.h"
class ReduceGCD :
    public ReduceGeneric
{
private:
    virtual int binaryOperator(int, int);
};

