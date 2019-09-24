#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	string s;
	getline (cin, s);

	string t = s.substr(0,2);

	cout << t << endl;

	return 0;
}