#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){

	string s;
	string t;
	cin >> t >> s;

	size_t i = s.find(t);

	if(i == string::npos){
		cout << "no" << endl;
	}else{
		cout << "yes" << endl;
	}

	return 0;
}