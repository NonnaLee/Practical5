#pragma once
#include "FilterGeneric.h"
class FilterForTwoDigitPositive :
    public FilterGeneric
{
private:
    bool g(int x);
};

