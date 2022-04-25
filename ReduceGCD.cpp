#include "ReduceGCD.h"
int ReduceGCD::binaryOperator(int a, int b)
{
    int d = b / 2;
    while (d != 1) {
        if (b % d == 0) {
            if (d < a || a==0) {
                return d;
            }
            else {
                return a;
            }
        }
        d--;
    }
}