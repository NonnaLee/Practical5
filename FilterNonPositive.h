#pragma once
#include "FilterGeneric.h"
class FilterNonPositive :
    public FilterGeneric
{
private:
    bool g(int x);
};

