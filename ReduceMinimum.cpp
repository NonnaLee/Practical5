#include "ReduceMinimum.h"

int ReduceMinimum::binaryOperator(int a, int b)
{
    if (a == 0) {
        return b;
    }
    if (b < a) {
        return b;
    }
    else {
        return a;
    }
}
