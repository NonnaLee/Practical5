#include <iostream>

#include "MapGeneric.h"
using namespace std;
int MapGeneric::f(int x) { return 1; };
vector<int> MapGeneric::map(vector<int> v) {
	vector<int> v2;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
		v[i] = f(v[i]);
		cout << " : " << v[i] << endl;
	}
	return v;
};
