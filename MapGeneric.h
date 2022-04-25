#pragma once
#include <iostream>
#include <vector>
using namespace std;
class MapGeneric
{
	private:
		virtual int f(int x);
	public:
		vector<int> map(vector<int> v);
};

