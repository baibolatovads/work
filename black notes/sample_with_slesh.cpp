#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	string s = "test test";
	size_t n = s.size();

	char x[n];

	s.copy(x,n,0);

	x[n] = '\0';

	//reverse(x,x+n);

	cout << x << endl;

	return 0;
}