#pragma once
#include <vector>
using namespace std;

class FilterGeneric
{
private:
	virtual bool g(int x);
public:
	vector<int> filter(vector<int> v);

};

