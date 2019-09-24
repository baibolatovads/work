#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	string s = "test test";
	string t;
	cin >> t;

	size_t i = s.find(t);

	if(i == string::npos){
		cout << "not found!" << endl;
	}else{
		cout << i << endl;
	}

	return 0;
}