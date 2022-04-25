#include "ReduceGeneric.h"
#include <iostream>
#include <vector>
using namespace std;
int ReduceGeneric::binaryOperator(int, int)
{
	return 0;
}
int ReduceGeneric::reduce(vector<int> v){
	int val = 0;
	for (int i = 0; i < v.size(); i++) {
		val = binaryOperator(val, v[i]);
	}
	cout << val;
	return val;
};