#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	string s = "ttxttxttxttxttxttx";

	char x[] = {'x','y','z'};
	
	s.insert(5,x,2);

	cout << s << endl;

	return 0;
}