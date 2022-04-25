#pragma once
#include <iostream>
#include <vector>
using namespace std;
class ReduceGeneric
{
private:
	virtual int binaryOperator(int, int);
public:
	int reduce(vector<int> v);
};

