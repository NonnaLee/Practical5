#include "FilterGeneric.h"
#include <vector>
#include <iostream>
using namespace std;
bool FilterGeneric::g(int x) {
	return true;
}
vector<int> FilterGeneric::filter(vector<int> v) {
	vector<int> v2;
	for (int i = 0; i < v.size(); i++) {
		if (g(v[i])) {
			v2.push_back(v[i]);
			cout << v[i] << endl;
		}
	}
	return v;
}